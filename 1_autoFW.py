# this file is for auto fill review webpage
# encoding=utf8

from selenium import webdriver
from selenium.webdriver.common.desired_capabilities import DesiredCapabilities
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.support.ui import Select
from selenium.webdriver.common.action_chains import ActionChains
import time
import virtkey
import sys
import getopt
import myweblib.WAITELEMENT

taskNum = 0
optlen = 0
def fill_checkList(driver, optlen):
    action = ActionChains(driver)
    action.key_down(Keys.TAB).key_up(Keys.ENTER).perform()
    action.key_down(Keys.TAB).key_up(Keys.ENTER).perform()
    # the second kind of operation is not base on element
    # ActionChains can simulate mouse and keyboard operations
    # most of the case you can find the element in the page ,whicn makes no sense to use actionChain
    # but if the element is nested in the webpage ,you may never be able to locate it
    # in this case actionChain can be used
    # more in https://seleniumhq.github.io/selenium/docs/api/py/webdriver/selenium.webdriver.common.action_chains.html
    i = int(optlen)
    while i:
        i = i - 1
        action.send_keys(Keys.DOWN).perform()
        action.key_down(Keys.TAB).key_up(Keys.ENTER).perform()
        print("press key")
        print(i)
    i = 1
    time.sleep(10000)

def fill_form(driver):
    i_str = "first round".decode("utf-8")
    text = driver.find_element_by_id("issue_subject").get_attribute('value')
    print(text)
    text = text[:-7] + i_str
    myweblib.WAITELEMENT.elem_sendkey_by_id(driver, "issue_subject", text, True)
    myweblib.WAITELEMENT.elem_select_by_opt(driver, "issue_status_id", 0, "1")
    myweblib.WAITELEMENT.elem_select_by_opt(driver, "issue_assigned_to_id", 1, "<< me >>")
    date = myweblib.WAITELEMENT.elem_get_attribute_by_id(driver, "issue_start_date", 'value')
    myweblib.WAITELEMENT.elem_set_attribute_by_id(driver, "issue_due_date", date)
    myweblib.WAITELEMENT.elem_set_attribute_by_id(driver, "issue_custom_field_values_208", date)
    myweblib.WAITELEMENT.elem_sendkey_by_id(driver, "issue_custom_field_values_221", "0.01", False)
    myweblib.WAITELEMENT.elem_sendkey_by_id(driver, "issue_custom_field_values_209", "east 9f 02".decode("utf-8"), False)
    myweblib.WAITELEMENT.elem_sendkey_by_id(driver, "issue_custom_field_values_210", "0.5", False)
    myweblib.WAITELEMENT.elem_select_by_opt(driver, "issue_custom_field_values_211", 1, "<< me >>")

def main(argv):

    #getopt
    try:
        opts, args = getopt.getopt(argv, "ht:l:", ["help", "task=", "optlen="])
    except getopt.GetoptError:
        print('test_arg.py -t <taskNum> -l <listoptlen>')
        print('or: test_arg.py --task=<taskNum> --optlen=<listoptlen>')
        sys.exit(2)

    # get arg by opt
    for opt, arg in opts:
        if opt in ("-h", "--help"):
            print('test_arg.py -t <taskNum> -l <optlen>')
            print('or: test_arg.py --task=<taskNum> --optlen=<  optlen>')
            sys.exit()
        elif opt in ("-t", "--task"):
            taskNum = arg
            print('taskNum is :', taskNum)
        elif opt in ("-l", "--optlen"):
            optlen = arg
            print('optlen is :', optlen)

    # print the params that not specifed with my define
    for i in range(0, len(args)):
        print('param %s is :%s' % (i + 1, args[i]))
    #this part is for get some param form command line you may not need this
    autofw(taskNum, optlen)


def autofw(taskNum, optlen):
    #I mainly use two kinds of operation in my writer
    # driver = webdriver.Firefox()
    driver = webdriver.Chrome()
    # firstly you need to get a driver, all the
    driver.get('http://i*****')
    myweblib.WAITELEMENT.elem_sendkey_by_id(driver, "username", "***", False)
    driver.find_element_by_id("password").send_keys("***@")
    driver.find_element_by_id("login-submit").click()
    #
    # the first kind of operation is base on element.
    # driver can use diferent kind of find_element method to locate element in webpage
    # you can see more method in
    # https://www.seleniumhq.org/docs/03_webdriver.jsp#selenium-webdriver-api-commands-and-operations
    # once you find keys you can add operations like click and send_ksys after you expession
    # FYI : xpath is a powerful key to locate element , but it may be tricky for new developers like myself to get xpath correctly, a easy way to get xpath is open browser ,and click F12 to view html code, find the element you want to interact with and simply click right button of your mouse, you can find an option is "copy xpath"
    #
    driver.find_element_by_id("q").send_keys(taskNum)
    driver.find_element_by_id("q").send_keys(Keys.ENTER)


    # you may always in an circumstance which you need go from one webpage to another
    # in this case,if you try to find a elem during page loading you may get a error for you may not locate a element until the page is fully loaded
    # so you need to use the method under below to wait for the page fully loaded
    try:
        element = WebDriverWait(driver, 10).until(
            EC.presence_of_element_located((By.LINK_TEXT, "new review"))
        )
        element.click()
    finally:
        time.sleep(1)

    fill_form(driver)
    fill_checkList(driver, optlen)


if __name__ == "__main__":
    main(sys.argv[1:])
