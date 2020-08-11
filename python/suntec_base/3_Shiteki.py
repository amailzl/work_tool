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

taskNum = 0
def main(argv):

    #getopt
    try:
        opts, args = getopt.getopt(argv, "ht:", ["help", "task="])
    except getopt.GetoptError:
        print('test_arg.py -t <taskNum>')
        print('or: test_arg.py --task=<taskNum>')
        sys.exit(2)

    # get arg by opt
    for opt, arg in opts:
        if opt in ("-h", "--help"):
            print('test_arg.py -t <taskNum>')
            print('or: test_arg.py --task=<taskNum>')
            sys.exit()
        elif opt in ("-t", "--task"):
            taskNum = arg
    print('taskNum is :', taskNum)

    # print the params that not specifed with my define
    for i in range(0, len(args)):
        print('param %s is :%s' % (i + 1, args[i]))
    #this part is for get some param form command line you may not need this
    autofw(taskNum)

def web_wait_element_by_opt(driver, opt, arg):
    if opt == 0:
        element = WebDriverWait(driver, 10).until(EC.presence_of_element_located((By.LINK_TEXT, arg)))
    elif opt == 1:
        element = WebDriverWait(driver, 10).until(EC.presence_of_element_located((By.ID, arg)))
    elif opt == 2:
        element = WebDriverWait(driver, 10).until(EC.presence_of_element_located((By.VALUE, arg)))
    return element

def elem_click_by_opt(driver, opt, arg):
    try:
        elem = web_wait_element_by_opt(driver, opt, arg)
    finally:
        elem.click()

def elem_sendkey_by_id(driver, web_id, text, flag):
    try:
        web_wait_element_by_opt(driver, 1, web_id)
        if flag:
            driver.find_element_by_id(web_id).clear()
    finally:
        driver.find_element_by_id(web_id).send_keys(text)

def elem_select_by_opt(driver, web_id, opt, arg):
    try:
        web_wait_element_by_opt(driver, 1, web_id)
    finally:
        if opt == 0:
            Select(driver.find_element_by_id(web_id)).select_by_value(arg)
        elif opt == 1:
            Select(driver.find_element_by_id(web_id)).select_by_visible_text(arg)

def elem_select_find_in_option(driver, web_id, arg):
    try:
        web_wait_element_by_opt(driver, 1, web_id)
    finally:
        opts = Select(driver.find_element_by_id(web_id)).options()
        for i in opts:
            print(i)

def elem_get_attribute_by_id(driver, web_id, value):
    try:
        web_wait_element_by_opt(driver, 1, web_id)
    finally:
        date = driver.find_element_by_id(web_id).get_attribute(value)
    return date

def elem_set_attribute_by_id(driver, web_id, value):
    try:
        web_wait_element_by_opt(driver, 1, web_id)
    finally:
        js="document.getElementById('"+web_id+"').setAttribute('value','" + value + "')"
        driver.execute_script(js)

def autofw(taskNum):
    #I mainly use two kinds of operation in my writer
    # driver = webdriver.Firefox()
    driver = webdriver.Chrome()
    # firstly you need to get a driver, all the
    driver.get('http://***')
    elem_sendkey_by_id(driver, "username", "***", False)
    # driver.find_element_by_id("username").send_keys("lizhelun")
    elem_sendkey_by_id(driver, "password", "***@", False)
    # driver.find_element_by_id("password").send_keys("asdf1994@")
    elem_click_by_opt(driver, 1, "login-submit")
    # driver.find_element_by_id("login-submit").click()
    #
    # the first kind of operation is base on element.
    # driver can use diferent kind of find_element method to locate element in webpage
    # you can see more method in
    # https://www.seleniumhq.org/docs/03_webdriver.jsp#selenium-webdriver-api-commands-and-operations
    # once you find keys you can add operations like click and send_ksys after you expession
    # FYI : xpath is a powerful key to locate element , but it may be tricky for new developers like myself to get xpath correctly, a easy way to get xpath is open browser ,and click F12 to view html code, find the element you want to interact with and simply click right button of your mouse, you can find an option is "copy xpath"
    #
    elem_sendkey_by_id(driver, "q", taskNum, False)
    # driver.find_element_by_id("q").send_keys(taskNum)
    elem_sendkey_by_id(driver, "q", Keys.ENTER, False)
    # driver.find_element_by_id("q").send_keys(Keys.ENTER)


    # you may always in an circumstance which you need go from one webpage to another
    # in this case,if you try to find a elem during page loading you may get a error for you may not locate a element until the page is fully loaded
    # so you need to use the method under below to wait for the page fully loaded
    elem_click_by_opt(driver, 0, "new shiteki")
    line1 = "*********".decode("utf-8")
    line2 = "***********".decode("utf-8")
    line3 = "********".decode("utf-8")

    i = 2
    i_str = bytes(i)
    text = driver.find_element_by_id("issue_subject").get_attribute('value')
    text = text[:-3] + i_str
    elem_sendkey_by_id(driver, "issue_subject", text, True)
    elem_sendkey_by_id(driver, "issue_description", line1, False)
    elem_sendkey_by_id(driver, "issue_description", line1, False)
    elem_select_by_opt(driver, "issue_status_id", 0, "2")
    elem_select_by_opt(driver, "issue_assigned_to_id", 1, "<< me >>")
    elem_select_by_opt(driver, "issue_custom_field_values_217", 1, "<< me >>")
    date = elem_get_attribute_by_id(driver, "issue_start_date", 'value')
    elem_set_attribute_by_id(driver, "issue_due_date", date)
    elem_set_attribute_by_id(driver, "issue_custom_field_values_218", date)
    elem_set_attribute_by_id(driver, "issue_custom_field_values_275", date)
    elem_select_by_opt(driver, "issue_done_ratio", 0, "100")
    elem_sendkey_by_id(driver, "issue_custom_field_values_219", line3, False)
    elem_select_by_opt(driver, "issue_custom_field_values_942", 1, "D(Defect)")
    elem_sendkey_by_id(driver, "issue_custom_field_values_523", "0.2", False)
    # elem_select_find_in_option(driver, "issue_custom_field_values_217", line2)
    time.sleep(6)
    # action = ActionChains(driver)
    # # the second kind of operation is not base on element
    # # ActionChains can simulate mouse and keyboard operations
    # # most of the case you can find the element in the page ,whicn makes no sense to use actionChain
    # # but if the element is nested in the webpage ,you may never be able to locate it
    # # in this case actionChain can be used
    # # more in https://seleniumhq.github.io/selenium/docs/api/py/webdriver/selenium.webdriver.common.action_chains.html
    time.sleep(10000)

def autofw_withexcel(taskNum, text):
    #I mainly use two kinds of operation in my writer
    # driver = webdriver.Firefox()
    driver = webdriver.Chrome()
    # firstly you need to get a driver, all the
    driver.get('http://iredmine.storm/issues/551687')
    elem_sendkey_by_id(driver, "username", "*********", False)
    # driver.find_element_by_id("username").send_keys("lizhelun")
    elem_sendkey_by_id(driver, "password", "**********@", False)
    # driver.find_element_by_id("password").send_keys("asdf1994@")
    elem_click_by_opt(driver, 1, "login-submit")
    # driver.find_element_by_id("login-submit").click()
    #
    # the first kind of operation is base on element.
    # driver can use diferent kind of find_element method to locate element in webpage
    # you can see more method in
    # https://www.seleniumhq.org/docs/03_webdriver.jsp#selenium-webdriver-api-commands-and-operations
    # once you find keys you can add operations like click and send_ksys after you expession
    # FYI : xpath is a powerful key to locate element , but it may be tricky for new developers like myself to get xpath correctly, a easy way to get xpath is open browser ,and click F12 to view html code, find the element you want to interact with and simply click right button of your mouse, you can find an option is "copy xpath"
    #
    elem_sendkey_by_id(driver, "q", taskNum, False)
    # driver.find_element_by_id("q").send_keys(taskNum)
    elem_sendkey_by_id(driver, "q", Keys.ENTER, False)
    # driver.find_element_by_id("q").send_keys(Keys.ENTER)


    # you may always in an circumstance which you need go from one webpage to another
    # in this case,if you try to find a elem during page loading you may get a error for you may not locate a element until the page is fully loaded
    # so you need to use the method under below to wait for the page fully loaded
    elem_click_by_opt(driver, 0, "new shiteki")
    line1 = "**********".decode("utf-8")
    line2 = "*********".decode("utf-8")
    line3 = "********".decode("utf-8")
    str_split = text.split("\n")
    line_count = 0
    for elem in str_split:
        line_count = line_count + 1;
        if 1 == line_count:
            line1 = elem
            print(line1)
        if 2 == line_count:
            line2 = elem
            print(line2)
        if 3 == line_count:
            line3 = elem
            print(line3)
    i = 2
    i_str = bytes(i)
    text = driver.find_element_by_id("issue_subject").get_attribute('value')
    text = text[:-3] + i_str
    elem_sendkey_by_id(driver, "issue_subject", text, True)
    elem_sendkey_by_id(driver, "issue_description", line1, False)
    elem_sendkey_by_id(driver, "issue_description", line1, False)
    elem_select_by_opt(driver, "issue_status_id", 0, "2")
    elem_select_by_opt(driver, "issue_assigned_to_id", 1, "<< me >>")
    date = elem_get_attribute_by_id(driver, "issue_start_date", 'value')
    elem_set_attribute_by_id(driver, "issue_due_date", date)
    elem_set_attribute_by_id(driver, "issue_custom_field_values_218", date)
    elem_set_attribute_by_id(driver, "issue_custom_field_values_275", date)
    elem_select_by_opt(driver, "issue_done_ratio", 0, "100")
    elem_sendkey_by_id(driver, "issue_custom_field_values_219", line3, False)
    elem_select_by_opt(driver, "issue_custom_field_values_942", 1, "D(Defect)")
    elem_sendkey_by_id(driver, "issue_custom_field_values_523", "0.2", False)
    elem_select_find_in_option(driver, "issue_custom_field_values_217", line2)
    time.sleep(6)
    # action = ActionChains(driver)
    # # the second kind of operation is not base on element
    # # ActionChains can simulate mouse and keyboard operations
    # # most of the case you can find the element in the page ,whicn makes no sense to use actionChain
    # # but if the element is nested in the webpage ,you may never be able to locate it
    # # in this case actionChain can be used
    # # more in https://seleniumhq.github.io/selenium/docs/api/py/webdriver/selenium.webdriver.common.action_chains.html

    time.sleep(10000)

if __name__ == "__main__":
    main(sys.argv[1:])
