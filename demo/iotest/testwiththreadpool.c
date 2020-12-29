/**
 * @file   : usleep.c
 * @author : Tang Wei
 * @e-mail : wei.tang@wm-motor.com
 * @date   : Tue 21 Jul 2020 10:11:31 AM CST
 *
 * compile:
 *   ~/Swpkg/QNX/qnx700/host/linux/x86_64/usr/bin/aarch64-unknown-nto-qnx7.0.0-gcc -o ReplayCanFrameQcc ReplayCanFrame.c
 *
 * asc_file:
 *  cat org.asc|grep "d 8 "|grep -v "CANFD" > replay.asc
 */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<time.h>
static inline unsigned long ms_now()
{
    struct timespec ts = {0, 0};
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return ts.tv_sec * 1000 + ts.tv_nsec / 1000000;
}
#define LOG(fmt, args...) (printf("%10ld:  %s: %d: " fmt "\n", ms_now(), __FUNCTION__, __LINE__, ##args))


#define LEN_MAX 1024
#define MIN_CAN_LEN (2*8 + 2)


/**
 * CAN FRAME:
 *  timestamp   canID                    |------CanData[8]-----]
 *  0.008254 2  192             Rx   d 8 00 00 00 00 00 02 02 C9  Length = 233910 BitCount = 121 ID = 402
 *
 */


int usage() {
    printf("Usage:\n\tcs_canframereplayer -d /dev/ICU_CMD -f canmsg.asc -r 100"
           "\n\t -d: device name"
           "\n\t -f: can msg likes \"0.000000 9 180             Rx   d 8 36 07 10 00 00 00 0F 8D\""
           "\n\t\tcan log processing: cat xxx.asc |grep \"d 8 \"|grep -v \"CANFD\" > replay_yyy.asc"
           "\n\t -r: repeat times"
           "\n\t -j: using thread"
           "\n");
    return -1;
}

float getCanTimestamp(char* can){
    char *token = strtok(can, " ");
    if (token) {
        LOG("token = %s", token);
        return strtof(token, NULL);
    }

    return 0.0;
}

bool spliteString(char *src_str, char* fs, char *out_strs[], const int out_len) {
    if (src_str == NULL || fs == NULL || out_strs == NULL || out_len < 1) {
        LOG("ERR: parmaters is NULL!!!");
        return false;
    }
    int counter = 0;
    char *token = strtok(src_str, fs);
    while(token != NULL && counter < out_len) {
        out_strs[counter++] = token;
        token = strtok(NULL, fs);
    }
    if (counter == out_len) {
        //LOG("INFO: splite the src_str is success, counter = %d", counter);
        return true;
    }
    LOG("ERR: splite the src_str is fail, counter = %d", counter);
    return false;
}


const char * getCanFrame(char* can) {
    char* p = can;
    while(p != NULL && *p != ' ' && *p != '\0') {
        p++;
    }
    return ++p;
}
int g_line_counter = 0;
int g_last_time = 0;
int g_frame_counter = 0;
#if 0 //实时性太差，不可用
int main(int argc, char* argv[]){
    if(argc == 2) {
        FILE *fin = fopen(argv[1], "r");
        if (fin == NULL) {
            printf("Failed to open %s, exit!!", argv[1]);
            usage();
            exit(-1);
        }
        char line[LEN_MAX] = {'\0'};
        char cmd[LEN_MAX] = {'\0'};
        while(!feof(fin)) {
            memset(line, '\0', LEN_MAX);
            memset(cmd, '\0', LEN_MAX);
            if(fgets(line, LEN_MAX, fin) != NULL) {
                int line_len = strlen(line);
                if (line_len > MIN_CAN_LEN) {
                    line[line_len - 1] = '\0';//删除换行符
                    LOG("     +++++++++++++ g_frame_counter = %d ++++++++++++++     \n", g_frame_counter);
                    LOG(" 0--> fopen line =%s, len = %d\n", line, line_len);
                    LOG("00000000000000000");
                    int cmd_len = sprintf(cmd, "echo \"%s\"|grep -v CANFD|grep \"d 8\"|awk -F \" \" '{print $1,$3,$7,$8,$9,$10,$11,$12,$13,$14}'", line);
                    if (!cmd_len || strlen(cmd) == 0) {
                        LOG("Failed to create the cmd, exit!!");
                        exit(-1);
                    }
                    LOG(" 1--> popen cmd = %s", cmd);
                    FILE *pin = popen(cmd, "r");
                    if (pin != NULL) {
                        memset(line, '\0', LEN_MAX);
                        memset(cmd, '\0', LEN_MAX);
                        if((fgets(line, LEN_MAX, pin) != NULL) && (strlen(line) != 0)) {
                            line_len = (int)strlen(line);
                            line[line_len-1] = '\0';// 删除换行符
                            LOG(" 2--> popen cmd result = %s, len = %d", line, line_len);
                            int timestamp = (int)(getCanTimestamp(line) * 1000000);
                            cmd_len = sprintf(cmd, "echo \"can %s\" > /dev/ICU_CMD", getCanFrame(line));
                            if (cmd_len > 0 && strlen(cmd) > 0) {
                                LOG(" 3--> timestamp = %d, usleep time = %d", timestamp, timestamp - g_last_time);
                                usleep(timestamp - g_last_time);
                                g_last_time = timestamp;
                                LOG(" 4--> system cmd = %s", cmd);
                                system(cmd);
                                LOG("    --- g_frame_counter = %d ---       \n", g_frame_counter++);
                            }
                        }
                        pclose(pin);
                    }
                }
            }

        }
        fclose(fin);
    } else {
        usage();
    }
    return 0;
}
#else

int main(int argc, char* argv[]){
    int ch;
    unsigned long s_time = ms_now();
    const char *DEV = "./target";
    const char *ASC = NULL;
    int REPEAT = 1;
    int THREAD = 1;
    while((ch = getopt(argc, argv, "d:f:r:j:")) != -1)
    {
        switch(ch)
        {
            case 'd':
                DEV = optarg;
            break;
            case 'f':
                ASC = optarg;
            break;
            case 'r':
                REPEAT = strtoul(optarg, NULL, 0);
            break;
            case 'j':
                REPEAT = strtoul(optarg, NULL, 0);
            break;
            default:
                usage();
                return -1;
        }
    }
    if (DEV == NULL || ASC == NULL || REPEAT == 0)
    {
        usage();
        return -1;
    }
    int repeat_times = 0;
    unsigned long e_time = ms_now();
    printf("consumed time : %10ld\n", (e_time - s_time));
    while (repeat_times < REPEAT) {
        repeat_times++;
        FILE *fin = fopen(ASC, "r");
        if (fin == NULL) {
            LOG("Failed to open %s, exit!!", argv[1]);
            usage();
            exit(-1);
        }
        e_time = ms_now();
        printf("fopen src : %10ld\n", (e_time - s_time));
        FILE *dev = fopen(DEV, "w");
        if (dev == NULL) {
            LOG("Failed to open %s, exit!!", DEV);
            usage();
            exit(-1);
        }
        e_time = ms_now();
        printf("fopen des : %10ld\n", (e_time - s_time));
        char line[LEN_MAX] = {'\0'};
        char cmd[LEN_MAX] = {'\0'};
        while(!feof(fin)) {
            LOG(" --------------- g_line_counter = %d -------------------", g_line_counter++);
            memset(line, '\0', LEN_MAX);
            if(fgets(line, LEN_MAX, fin) != NULL) {
                e_time = ms_now();
                printf("read line : %10ld\n", (e_time - s_time));
                int line_len = strlen(line);
                if (line_len > MIN_CAN_LEN) {
                    line[line_len - 1] = '\0';//删除换行符
                    char* ds = strstr(line, "d 8 ");
                    if ((ds != NULL) && (strstr(line, "CANFD") == NULL)) {
                        ds[28] = '\0';
                        char *pre_arr[3] = {NULL};
                        if (spliteString(line, " ", pre_arr, 3)) {
                            int timestamp = (int)(strtof(pre_arr[0], NULL) * 1000000);
                            int us = labs(timestamp - g_last_time);
                            if (us > 1*1000*1000)
                                us = 1*1000*1000; //连续的信号时间差>1s，则当1s处理
                            if (us > 2000) {
                                usleep(2000);//信号之间时间差>2ms则sleep us-2ms.
                                LOG("--- timestamp = %d, g_last_time = %d, us = %d, us-1000 = %d ---", timestamp, g_last_time, us, us-1000);
                            } //两条信号之间时间差＜1ms则不sleep.
                            g_last_time = timestamp;
                            e_time = ms_now();
                            printf("process line : %10ld\n", (e_time - s_time));

                            int cmd_len = sprintf(cmd, "can %s %s", pre_arr[2], ds + 4);
                            LOG(" --> fwrite cmd: %s", cmd);
                            if (cmd_len > 28 && (strlen(cmd) > 28)) {
                                fwrite(cmd, strlen(cmd), 1, dev);
                                fflush(dev);//必须调用，不然会导致数据只被写入缓冲去，而cluster_service每次会读取到缓存区的全部数据.
                                e_time = ms_now();
                                printf("write line : %10ld\n", (e_time - s_time));
                                LOG("     ->>>>>>- g_frame_counter = %d -<<<<<-   \n", ++g_frame_counter);
                            }
                        }
                    }
                }
            }
        }
        fclose(fin);
        fclose(dev);
    }
    e_time = ms_now();
    printf("consumed time : %10ld\n", (e_time - s_time));
    return 0;
}

#endif
