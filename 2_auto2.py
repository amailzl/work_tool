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

# driver = webdriver.Firefox()
driver = webdriver.Chrome()
driver.get('http://****')
driver.find_element_by_id("username").send_keys("****")
driver.find_element_by_id("password").send_keys("*****")
driver.find_element_by_id("kc-login").click()

task = "523353"
driver.find_element_by_id("q").send_keys(task)
driver.find_element_by_id("q").send_keys(Keys.ENTER)


try:
    element = WebDriverWait(driver, 10).until(
        EC.presence_of_element_located((By.LINK_TEXT, "new review"))
    )
    element.click()
finally:
    time.sleep(1)
action = ActionChains(driver)
driver.find_element_by_id("issue_custom_field_values_523").send_keys("test")

i = 2
while i:
    i = i - 1
    action.send_keys(Keys.TAB).perform()

time.sleep(1)

# i = i - 1
# action.send_keys(Keys.RETURN).perform()
# action.send_keys(Keys.TAB).perform()
action.send_keys(Keys.DOWN).perform()
action.send_keys(Keys.TAB).perform()
action.send_keys(Keys.DOWN).perform()
    # action.send_keys(Keys.DOWN).perform()

time.sleep(20)
driver.quit()


i = 1
while 1:
    res_ok_id = 'edit_kess010acy210_responsible_2_%d'%(i)
    riw_ok_id = 'edit_kess010acy210_review_2_%d'%(i)
    ait_ok_id = 'edit_kess010acy210_addition_2_%d'%(i)
    res_ok_id_path = "//*[@id=\""+res_ok_id+"\"]/select"
    riw_ok_id_path = "//*[@id=\""+riw_ok_id+"\"]/select"
    ait_ok_id_path = "//*[@id=\""+ait_ok_id+"\"]/textarea"
    try:
        element = WebDriverWait(driver, 10).until(
            EC.presence_of_element_located((By.XPATH, res_ok_id_path))
        )
    except:
        print(res_ok_id_path)
        break
    else:
        # temp = WebDriverWait(driver, 10).until(EC.element_to_be_clickable((By.XPATH, res_ok_id_path)))
        time.sleep(3)
        action = ActionChains(driver)
        eles = driver.find_element_by_xpath(res_ok_id_path)
        # for i in eles:
        print(res_ok_id_path)
        # action.move_to_element_with_ #complete where you want to move element
        # driver.find_element_by_xpath(res_ok_id_path).click()
        action.move_to_element(driver.find_element_by_xpath(res_ok_id_path)).click().perform()
        action.move_to_element(driver.find_element_by_xpath(ait_ok_id_path)).send_keys("test").key_down(Keys.DOWN).key_up(Keys.DOWN).perform()
        # driver.find_element_by_xpath(res_ok_id_path).click()
        # driver.find_element_by_xpath(res_ok_id_path).send_keys(Keys.DOWN)
        # Select(driver.find_element_by_xpath(res_ok_id_path)).select_by_index(1)
        # Select(driver.find_element_by_xpath(riw_ok_id_path)).select_by_index(1)
        i = i + 1
        time.sleep(0.2)
