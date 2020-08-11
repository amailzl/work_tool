# encoding=utf8
import xlrd
import sys
import getopt
from datetime import date,datetime
import myweblib.WAITELEMENT

inputfile = 0
taskNum = 0
def read_excel(inputfile, taskNum):
    #open file
    wb = xlrd.open_workbook(inputfile)

    #open sheet by index
    sheet1 = wb.sheet_by_index(0)
    i = 34
    i_d = 0
    while (not sheet1.cell_type(i, 3) in (xlrd.XL_CELL_EMPTY, xlrd.XL_CELL_BLANK)):
        #get shiteki_value
        text = sheet1.cell(i, 3).value
        # get shiteki_type
        shiteki_type = sheet1.cell_value(i, 47)
        # text = sheet1.row_values(i, 3, 50)
        if(shiteki_type == "D"):
            i_d = i_d + 1
            myweblib.WAITELEMENT.autofw_ofshitekitask_withexcel(taskNum, text, i_d)
        i = i + 1
        print(shiteki_type)
        print(text)
    print(i_d)

    # print(sheet1.cell(35,4).value)#to get content of one specified cell
    # print(sheet1.cell_value(1,0))
    # print(sheet1.row(1)[0].value)
    return text

def main(argv):
    try:
        opts, args = getopt.getopt(argv,"hi:t:",["ifile=", "taskNum="])
    except getopt.GetoptError:
        print('usage -i <inputfile> -t <taskNum>')
        print('or: usage --ifile=<inputfile> --task=<taskNum>')
        sys.exit(2)
    for opt, arg in opts:
        if opt == '-h':
            print('usage -i <inputfile> -t <taskNum>')
            print('or: usage --ifile=<inputfile> --task=<taskNum>')
            sys.exit()
        elif opt in ("-i", "--ifile"):
            inputfile = arg
            print('inputfile', inputfile)
        elif opt in ("-t", "--taskNum"):
            taskNum = arg
            print('taskNum', taskNum)

    read_excel(inputfile, taskNum)

if __name__ == "__main__":
    # sys.argv[1:]is the params need to process，sys.argv[0] is python file name，so use sys.argv[1:] to avoid it。
    main(sys.argv[1:])