#this file is to apply overwork timetable
# encoding=utf8
import xlrd
import sys
import getopt
from datetime import date,datetime
import myweblib.WAITELEMENT
from selenium import webdriver
from selenium.webdriver.common.desired_capabilities import DesiredCapabilities
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.support.ui import Select
from selenium.webdriver.common.action_chains import ActionChains
import time


inputfile = 0
taskNum = 0
def read_excel(inputfile):
    #open file, get first sheet
    wb = xlrd.open_workbook(inputfile)
    sheet1 = wb.sheet_by_index(0)

    driver = webdriver.Chrome()
    # firstly you need to get a driver, all the
    driver.get('************')
    # login to oa
    myweblib.WAITELEMENT.elem_sendkey_by_id(driver, "tbUserName", "********", False)
    myweblib.WAITELEMENT.elem_sendkey_by_id(driver, "tbPassword", "*******", False)
    myweblib.WAITELEMENT.elem_click_by_opt(driver, 1, "btnLogin")
    # enter contents frame, press apply work
    myweblib.WAITELEMENT.switch_to_frame_by_opt(driver, 0, "contents")
    myweblib.WAITELEMENT.elem_click_by_opt(driver, 1, "a4")

    i = 0
    while(not sheet1.cell_type(i, 0) in (xlrd.XL_CELL_EMPTY, xlrd.XL_CELL_BLANK)):
        pass
        # enter main, start apply
        driver.switch_to.default_content()
        myweblib.WAITELEMENT.switch_to_frame_by_opt(driver, 0, "main")

        # while(not sheet1.cell_type(i, 0) in (xlrd.XL_CELL_EMPTY, xlrd.XL_CELL_BLANK)):
        # date = sheet1.cell(i, 0).value
        date = xlrd.xldate_as_tuple(sheet1.cell(i, 0).value, 0)

        date = convert_numberdate_to_formatdate(date)
        reason = sheet1.cell(i, 7).value
        print(date, reason)
        myweblib.WAITELEMENT.elem_sendkey_by_id(driver, "TextBoxREASON", reason, False)
        # set date
        myweblib.WAITELEMENT.elem_set_attribute_by_id(driver, "TextBoxDATE_FROM", date)
        myweblib.WAITELEMENT.elem_set_attribute_by_id(driver, "TextBoxDATE_TO", date)
        # set time
        onwork_time = xlrd.xldate_as_tuple(sheet1.cell(i, 2).value, 0)
        quit_time = xlrd.xldate_as_tuple(sheet1.cell(i, 3).value, 0)
        # set onwork time
        if onwork_time[3] == 9 or onwork_time[3] == 8:
            myweblib.WAITELEMENT.elem_select_by_opt(driver, "DropDownListTIME_FROM", 0, "18:30")
        else:
            onwork_time = onwork_time_trans(onwork_time)
            myweblib.WAITELEMENT.elem_select_by_opt(driver, "DropDownListTIME_FROM", 0, onwork_time)

        # set quit work time
        quit_time = quit_time_trans(quit_time)
        myweblib.WAITELEMENT.elem_select_by_opt(driver, "DropDownListTIME_TO", 0, quit_time)
        print(onwork_time, quit_time)
        time.sleep(3)
        myweblib.WAITELEMENT.elem_click_by_opt(driver, 1, "btnAddLine")
        time.sleep(3)

        driver.switch_to.default_content()
        myweblib.WAITELEMENT.switch_to_frame_by_opt(driver, 0, "main")
        myweblib.WAITELEMENT.elem_click_by_opt(driver, 1, "btnPost")
        time.sleep(3)

        driver.switch_to.default_content()
        myweblib.WAITELEMENT.switch_to_frame_by_opt(driver, 0, "main")
        myweblib.WAITELEMENT.elem_click_by_opt(driver, 1, "btnNew")
        i = i + 1

    # driver.findElement(By.xpath("//*[@id=]")
    # myweblib.WAITELEMENT.elem_click_by_opt(driver, 1, "//*[@id="a4"]")
    #open sheet by index
    # sheet1 = wb.sheet_by_index(0)
    # i = 34
    # i_d = 0
    # while (not sheet1.cell_type(i, 3) in (xlrd.XL_CELL_EMPTY, xlrd.XL_CELL_BLANK)):
    #     #get shiteki_value
    #     text = sheet1.cell(i, 3).value
    #     # get shiteki_type
    #     shiteki_type = sheet1.cell_value(i, 47)
    #     # text = sheet1.row_values(i, 3, 50)
    #     if(shiteki_type == "D"):
    #         i_d = i_d + 1
    #         myweblib.WAITELEMENT.autofw_withexcel(text, i_d)
    #     i = i + 1
    #     print(shiteki_type)
    #     print(text)
    # print(i_d)
    time.sleep(10000)

    # print(sheet1.cell(35,4).value)#to get content of one specified cell
    # print(sheet1.cell_value(1,0))
    # print(sheet1.row(1)[0].value)


def onwork_time_trans(onwork_time):
    if onwork_time[4] > 30:
        onwork_time_h = str(onwork_time[3])
        onwork_time_m = "30"
    else:
        onwork_time_h = str(onwork_time[3])
        onwork_time_m = "00"
    onwork_time_text = onwork_time_h+":"+onwork_time_m
    return onwork_time_text

def quit_time_trans(quit_time):
    if quit_time[4] > 30:
        quit_time_h = str(quit_time[3] + 1)
        quit_time_m = "00"
    else:
        quit_time_h = str(quit_time[3])
        quit_time_m = "30"
    quit_time_text = quit_time_h+":"+quit_time_m
    return quit_time_text

def convert_numberdate_to_formatdate(date):
    date_c = 0
    for date_elem in date:
        if date_c == 3:
            break
        elif date_c == 0:
            date_year = str(date_elem)
        elif date_c == 1:
            if(date_elem < 10):
                date_mon = "0" + str(date_elem)
            else:
                date_mon = str(date_elem)
        elif date_c == 2:
            if(date_elem < 10):
                date_day = "0" + str(date_elem)
            else:
                date_day = str(date_elem)
        date_c = date_c + 1
    date_text = date_year +"-"+ date_mon +"-"+ date_day
    return date_text

def main(argv):
    try:
        opts, args = getopt.getopt(argv,"hi:",["ifile="])
    except getopt.GetoptError:
        print('usage -i <inputfile>')
        print('or: usage --ifile=<inputfile>')
        sys.exit(2)
    for opt, arg in opts:
        if opt == '-h':
            print('usage -i <inputfile>')
            print('or: usage --ifile=<inputfile>')
            sys.exit()
        elif opt in ("-i", "--ifile"):
            inputfile = arg
            print('inputfile', inputfile)

    read_excel(inputfile)

if __name__ == "__main__":
    # sys.argv[1:]is the params need to process，sys.argv[0] is python file name，so use sys.argv[1:] to avoid it。
    main(sys.argv[1:])