#!/usr/bin/env python
# -*- coding: utf-8 -*-

from tkinter import *
from tkinter import ttk
import hashlib
import time
import sqlite3

sq_helper_cmd=[
    'show_pending_work', 
    'edit_pending_work',
    'show_already_done'
    ]

sq_tables=[
    'PENDINGWORKS', 
    'DONE'
    ]

class Sqlite_Helper():
    def __init__(self) :
        self.target_database = sqlite3.connect('/home/amai/Work/DataBase/worktables.db')

    def update(self, t, a1, a2 , a3, a4):
        return False

    def add(self, t, w, g, c, wid, s = '') :
        cs = self.target_database.cursor()
        if t == sq_tables[0] :
            cs.execute("INSERT INTO PENDINGWORKS  \
            (WID,WORK,STATUS,GUIDELINE,COMMENT)  \
            VALUES (" + str(wid) + ", '" + w +  "',\
            '" + s +  "',  '" + g +  "',   \
            '" + c +  "' )")
        else :
            cs.execute("INSERT INTO DONE  \
            (WID,WORK,TYPE,COMMENT)  \
            VALUES (" + str(wid) + ", '" + w +  "',\
            '" + g +  "',  '" + c +  "' )")
        self.target_database.commit()

    def update(self, t, w, g , c, wid, s = ''):
        cs = self.target_database.cursor()
        if t == sq_tables[0] :
            cs.execute("UPDATE PENDINGWORKS SET \
                WORK = '" + w +  "', \
                STATUS = '" + s +  "', \
                GUIDELINE = '" + g +  "', \
                COMMENT = '" + c +  "' \
                WHERE WID = " + str(wid))
        else :
            cs.execute("UPDATE DONE SET \
                WORK = '" + w +  "', \
                TYPE = '" + g +  "', \
                COMMENT = '" + c +  "' \
                WHERE WID = " + str(wid))
        self.target_database.commit()
        return False

    def delete(self, t, a1, a2 , a3, a4):
        return False

    def generate_wid(self, table):
        c = self.target_database.cursor()
        print ("Opened database successfully")
        ret = c.execute("SELECT MAX(WID) FROM " + table)
        for r in ret:
            return r[0] + 1
        return 0

    def select(self, t, cmd, WID = ''):
        c = self.target_database.cursor()
        if t == sq_tables[0] :
            if cmd == sq_helper_cmd[0] :
                return c.execute(" SELECT WID,WORK FROM PENDINGWORKS")
            elif cmd == sq_helper_cmd[1] :
                return c.execute("SELECT WORK,STATUS,GUIDELINE,COMMENT from PENDINGWORKS where (WID=" + str(WID) + ")")
            elif cmd == sq_helper_cmd[2] :
                return c.execute(" SELECT * FROM PENDINGWORKS")
        else :
           return c.execute(" SELECT * FROM DONE")
        pass

    def close(self) :
        self.target_database.close()

class Sub_W():
    def __init__(self,init_window_name):
        self.init_window_name = init_window_name
        self.WID = ''
        self.sq_helper = Sqlite_Helper()

    #设置窗口
    def set_init_window(self, is_update = False, WID = ''):
        #标签
        if (is_update == False) :
            self.init_window_name.title("add new work")           #窗口名
            self.init_window_name.geometry('400x500+140+140')
            self.pending_work_label = Label(self.init_window_name, text="pending work")
            self.pending_work_label.grid(row=0, column=0)
            self.guide_line_label = Label(self.init_window_name, text="guide line")
            self.guide_line_label.grid(row=2, column=0)
            self.comment_label = Label(self.init_window_name, text="comment")
            self.comment_label.grid(row=5, column=0)
            #文本框
            self.pending_work_Text = Text(self.init_window_name, width=50, height=2)  #Pending work
            self.pending_work_Text.grid(row=1, column=0)
            self.guide_line_Text = Text(self.init_window_name, width=50, height=10)  #guide line
            self.guide_line_Text.grid(row=4, column=0)
            self.comment_Text = Text(self.init_window_name, width=50, height=10)  # comment
            self.comment_Text.grid(row=6)

            self.add_work_button = Button(self.init_window_name, text="add work", bg="lightblue", width=20,command=self.confirm_add_work)  # 调用内部方法  加()为直接调用 
            self.add_work_button.grid(row=8)
        else :
            self.init_window_name.title("update work")           #窗口名
            self.init_window_name.geometry('400x550+140+140')
            self.pending_work_label = Label(self.init_window_name, text="pending work")
            self.pending_work_label.grid(row=0, column=0)
            self.comboxlist=ttk.Combobox(self.init_window_name, width=25, height=2) #初始化
            self.comboxlist["values"]=("new", "processing", "finished")
            self.comboxlist.current(0) #选择第一个
            self.comboxlist.grid(row=2, column=0, sticky=W)

            self.guide_line_label = Label(self.init_window_name, text="guide line")
            self.guide_line_label.grid(row=3, column=0)
            self.comment_label = Label(self.init_window_name, text="comment")
            self.comment_label.grid(row=6, column=0)
            #文本框
            ret = self.sq_helper.select(sq_tables[0], sq_helper_cmd[1], WID)
            self.WID = WID
            for r in ret :
                self.pending_work_Text = Text(self.init_window_name, width=50, height=2)  #Pending work
                self.pending_work_Text.insert(END, r[0])
                self.pending_work_Text.grid(row=1, column=0)
                self.guide_line_Text = Text(self.init_window_name, width=50, height=10)  #guide line
                self.guide_line_Text.insert(END, r[2])
                self.guide_line_Text.grid(row=5, column=0)
                self.comment_Text = Text(self.init_window_name, width=50, height=10)  # comment
                self.comment_Text.insert(END, r[3])
                self.comment_Text.grid(row=7)

            self.add_work_button = Button(self.init_window_name, text="update work", bg="lightblue", width=20,command=self.confirm_update_work)  # 调用内部方法  加()为直接调用 
            self.add_work_button.grid(row=9)

    #设置窗口
    def set_confirm_window(self, w, g, c, s ='', wid = ''):
        self.init_window_name.title("confirm")           #窗口名
        self.init_window_name.geometry('400x300+140+140')

        # init data
        self.pending_work_Text = w
        self.guide_line_Text = g
        self.comment_Text = c
        self.WID = wid
        self.status = s

        # construct window
        self.pending_work_label = Label(self.init_window_name, text="pending work : \n" + w)
        self.pending_work_label.pack(side='top', anchor='w', expand='no',pady = 5)
        if s != '':
            self.comment_label = Label(self.init_window_name, text="status :  \n" + s)
            self.comment_label.pack(side='top', anchor='w', expand='no',pady = 5)
        self.guide_line_label = Label(self.init_window_name, text="guide line :  \n" + g)
        self.guide_line_label.pack(side='top', anchor='w', expand='no',pady = 5)
        self.comment_label = Label(self.init_window_name, text="comment : \n" + c)
        self.comment_label.pack(side='top', anchor='w', expand='no',pady = 5)

        self.add_work_button = Button(
            self.init_window_name,
            text="confirm", 
            bg="lightblue", 
            width=20,
            command=self.confirm_change
        )  
        self.add_work_button.pack(side='top',  anchor='s',expand='no',pady = 5)  

    #功能函数
    def confirm_add_work(self):
        init_sub_window = Toplevel()
        confirm_w = Sub_W(init_sub_window)
        # 设置子窗口默认属性
        confirm_w.set_confirm_window(
            self.pending_work_Text.get(1.0,END).strip(),
            self.guide_line_Text.get(1.0,END).strip(),
            self.comment_Text.get(1.0,END).strip()
        )
        return 1

    def confirm_update_work(self):
        init_sub_window = Toplevel()
        confirm_w = Sub_W(init_sub_window)
        # 设置子窗口默认属性
        confirm_w.set_confirm_window(
            self.pending_work_Text.get(1.0,END).strip(),
            self.guide_line_Text.get(1.0,END).strip(),
            self.comment_Text.get(1.0,END).strip(),
            self.comboxlist.get(),
            self.WID
        )
        return 1

    def confirm_change(self):
        if self.WID == '' :
            self.WID = self.sq_helper.generate_wid(sq_tables[0])
            self.sq_helper.add(
                sq_tables[0],
                self.pending_work_Text,
                self.guide_line_Text,
                self.comment_Text,
                self.WID,
                'new')
        else :
            self.sq_helper.update(
                sq_tables[0],
                self.pending_work_Text,
                self.guide_line_Text,
                self.comment_Text,
                self.WID,
                self.status)
        return False

class Main_W():
    def __init__(self,init_window_name):
        self.init_window_name = init_window_name
        # conn = sqlite3.connect('/home/amai/Work/DataBase/worktables.db')
        # self.sq_helper = Sqlite_Helper(conn)
        self.sq_helper = Sqlite_Helper()

    #设置窗口
    def set_init_window(self):
        self.init_window_name.title("worktable_v0.1")
        self.init_window_name.geometry('400x520+100+100')

        self.lb = Listbox(self.init_window_name, width=80, height=20)
        self.lb.pack()
        self.import_work_data(self.lb)
        self.lb.bind('<Double-Button-1>', self.open_update_work_w)
        # self.pending_work_button = Button(self.init_window_name, text="pending work", bg="lightblue", width=80,command=self.show_pending_work)  # 调用内部方法  加()为直接调用 
        # self.pending_work_button.pack(side='top', expand='no',pady = 5)
        self.add_work_button = Button(self.init_window_name, text="add work", bg="lightblue", width=80,command=self.open_add_work_w)  # 调用内部方法  加()为直接调用 
        self.add_work_button.pack(side='top', expand='no',pady = 5)
        self.done_work_button = Button(self.init_window_name, text="already done", bg="lightblue", width=80,command=self.show_done)  # 调用内部方法  加()为直接调用 
        self.done_work_button.pack(side='top', expand='no',pady = 5)


    #功能函数
    def import_work_data(self, lb):
        ret = self.sq_helper.select(sq_tables[0], sq_helper_cmd[0])
        for elem in ret:
            show_text = elem[1] + "  - wid: " + str(elem[0])
            lb.insert(END, show_text)
        self.sq_helper.close

    def open_add_work_w(self):
        init_sub_window = Toplevel()
        add_work_w = Sub_W(init_sub_window)
        # 设置子窗口默认属性
        add_work_w.set_init_window()
        return True

    def show_pending_work(self):
        return False

    def open_update_work_w(self, event):
        init_sub_window = Toplevel()
        update_work_w = Sub_W(init_sub_window)
        # 设置子窗口默认属性
        update_work_w.set_init_window(True, self.get_select_wid(event))
        return False

    def get_select_wid(self, event):
        w = event.widget
        index = int(w.curselection()[0])
        value = w.get(index)
        print(value)
        r = value.split(':')
        return r[1]

    def show_done(self):
        return False


    #获取当前时间
    def get_current_time(self):
        current_time = time.strftime('%Y-%m-%d %H:%M:%S',time.localtime(time.time()))
        return current_time


def work_table_start():
    init_main_window = Tk()              #实例化出一个父窗口
    work_table_w = Main_W(init_main_window)
    # 设置根窗口默认属性
    work_table_w.set_init_window()

    init_main_window.mainloop()          #父窗口进入事件循环，可以理解为保持窗口运行，否则界面不展示


work_table_start()