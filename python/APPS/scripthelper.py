#!/usr/bin/env python
# -*- coding: utf-8 -*-

from tkinter import *
from tkinter import ttk
import tkinter.messagebox
import hashlib
import time
import sqlite3

# DB init
# 	CREATE TABLE PENDINGWORKS(SCRIPT_ALIAS TEXT  PRIMARY KEY, SCRIPT_PATH TEXT,  SCSCRIPT_USAGE TEXT);
#

sq_select_cmd=[
    'show_pending_work',
    'edit_pending_work',
    'show_already_done'
    ]

sq_update_cmd=[
    'add',
    'update',
    ]

sq_tables=[
    'PENDINGWORKS',
    'DONE'
    ]

process_value=[
    'new',
    'processing',
    'finished'
    ]

# class Sqlite_Helper():
#     def __init__(self) :
#         print ("Opened database successfully")
#         self.target_database = sqlite3.connect('/home/amai/Work/DataBase/worktables.db')

#     def update(self, cmd, t, w, g , c, wid, s = ''):
#         cs = self.target_database.cursor()
#         if cmd == sq_update_cmd[0] :
#             cs.execute("INSERT INTO " + t + "  \
#             (WID,WORK,STATUS,GUIDELINE,COMMENT)  \
#             VALUES (" + str(wid) + ", '" + w +  "',\
#             '" + s +  "',  '" + g +  "',   \
#             '" + c +  "' )")
#         elif cmd == sq_update_cmd[1] :
#             cs.execute("UPDATE " + t + " SET \
#                 WORK = '" + w +  "', \
#                 STATUS = '" + s +  "', \
#                 GUIDELINE = '" + g +  "', \
#                 COMMENT = '" + c +  "' \
#                 WHERE WID = " + str(wid))
#         self.target_database.commit()
#         return True

#     def delete(self, t, w):
#         cs = self.target_database.cursor()
#         cs.execute("DELETE FROM " + t + " where (WID=" + str(w) + ")")
#         self.target_database.commit()
#         return True

#     def generate_wid(self):
#         maxp = 0
#         maxd = 0
#         c = self.target_database.cursor()
#         retp = c.execute("SELECT MAX(WID) FROM " + sq_tables[0])
#         for rp in retp:
#             maxp = rp[0]

#         retd = c.execute("SELECT MAX(WID) FROM " + sq_tables[1])
#         for rd in retd:
#             maxd = rd[0]

#         if(isinstance(maxp, int) and isinstance(maxd, int)) :
#             if maxd > maxp :
#                 return maxd + 1
#             else :
#                 return maxp + 1
#         elif (not isinstance(maxp, int) and not isinstance(maxd, int)) :
#             return 1
#         elif (not isinstance(maxp, int)) :
#             return maxd + 1
#         else :
#             return maxp + 1
#         return 0

#     def select(self, t, cmd, WID = ''):
#         c = self.target_database.cursor()
#         # if t == sq_tables[0] :
#         if cmd == sq_select_cmd[0] :
#             return c.execute(" SELECT WID,WORK FROM " + t)
#         elif cmd == sq_select_cmd[1] :
#             print ("SELECT WORK,STATUS,GUIDELINE,COMMENT from " + t + " where (WID=" + str(WID) + ")")
#             return c.execute("SELECT WORK,STATUS,GUIDELINE,COMMENT from " + t + " where (WID=" + str(WID) + ")")
#         elif cmd == sq_select_cmd[2] :
#             return c.execute(" SELECT * FROM " + t)
#         pass

#     def close(self) :
#         self.target_database.close()
#         print ("Close database successfully")

class Sub_W():
    def __init__(self,init_window_name):
        self.enable = True
        self.init_window_name = init_window_name
        self.WID = ''
        self.init_window_name.protocol("WM_DELETE_WINDOW", self.on_closing)

    def on_closing(self):
        # self.sq_helper.close
        self.init_window_name.destroy()

    def on_sub_closing(self):
        self.init_sub_window.destroy()
        self.add_work_button.config(bg="lightblue")
        self.enable = True

    def set_init_window(self, is_update = False, WID = ''):
        self.init_window_name.geometry('400x600+140+140')
        self.pending_work_label = Label(self.init_window_name, text="pending work")
        self.pending_work_label.grid(row=0, column=0)
        self.pending_work_text = Text(self.init_window_name, width=50, height=2)  #Pending work
        self.guide_line_label = Label(self.init_window_name, text="guide line")
        self.guide_line_text = Text(self.init_window_name, width=50, height=10)  #guide line
        self.comment_label = Label(self.init_window_name, text="comment")
        self.comment_text = Text(self.init_window_name, width=50, height=10)  # comment
        self.add_work_button = Button(self.init_window_name, bg="lightblue", width=20)
        self.init_window_name.title("add new work")
        self.pending_work_text.grid(row=1, column=0)
        self.guide_line_label.grid(row=2, column=0)
        self.guide_line_text.grid(row=4, column=0)
        self.comment_label.grid(row=5, column=0)
        self.comment_text.grid(row=6)
        self.add_work_button.grid(row=8)
        self.add_work_button.config(text="add work",command=self.confirm_add_work)
        # else :
        #     self.init_window_name.title("update work")
        #     self.comboxlist=ttk.Combobox(self.init_window_name, width=25, height=2) #初始化
        #     self.comboxlist["values"]=(
        #         process_value[0],
        #         process_value[1],
        #         process_value[2])
        #     self.pending_work_text.grid(row=1, column=0)
        #     self.comboxlist.grid(row=2, column=0, sticky=W)
        #     self.guide_line_label.grid(row=3, column=0)
        #     self.guide_line_text.grid(row=5, column=0)
        #     self.comment_label.grid(row=6, column=0)
        #     self.comment_text.grid(row=7)
        #     self.add_work_button.grid(row=9)
        #     self.add_work_button.config(text="update work",command=self.confirm_update_work)


        self.comment_text.insert(END, self.get_current_time())

    #设置窗口
    def set_confirm_window(self, w, g, c, s ='', wid = ''):
        self.init_window_name.title("confirm")
        self.init_window_name.geometry('400x500+140+140')

        # init data
        self.pending_work_text = w
        self.guide_line_text = g
        self.comment_text = c
        self.WID = wid
        self.status = s

        # construct window
        self.pending_work_label = Label(self.init_window_name, text="pending work : ")
        self.pending_work_label.pack(anchor='w', expand='no')
        self.pack_label(self.pending_work_text)
        # if s != '':
        #     self.comment_label = Label(self.init_window_name, text="status : ")
        #     self.comment_label.pack(anchor='w', expand='no')
        #     self.pack_label(self.status)
        self.guide_line_label = Label(self.init_window_name, text="guide line : ")
        self.guide_line_label.pack(anchor='w', expand='no')
        self.pack_label(self.guide_line_text)
        self.comment_label = Label(self.init_window_name, text="comment : ")
        self.comment_label.pack(anchor='w', expand='no')
        self.pack_label(self.comment_text)
        self.add_work_button = Button(
            self.init_window_name,
            text="confirm",
            bg="lightblue",
            width=20,
            command=self.confirm_change
        )
        self.add_work_button.pack(side='top',  anchor='s',expand='no',pady = 5)

    def pack_label(self, text):
        split_text = text.split('\n')
        for elem in split_text:
            Label(self.init_window_name, text= "\t" + elem).pack(anchor='w', expand='no')
        Label(self.init_window_name, text="").pack(anchor='w', expand='no')
        pass

    def confirm_add_work(self):
        if(self.enable == True):
            self.add_work_button.config(bg="Crimson")
            self.enable = False
        else :
            print("Waring: operation denied")
            return False
        self.init_sub_window = Toplevel()
        confirm_w = Sub_W(self.init_sub_window, self.sq_helper, self.sq_table)
        confirm_w.set_confirm_window(
            self.pending_work_text.get(1.0,END).strip(),
            self.guide_line_text.get(1.0,END).strip(),
            self.comment_text.get(1.0,END).strip()
        )
        self.init_sub_window.protocol("WM_DELETE_WINDOW", self.on_sub_closing)
        return 1

    def confirm_update_work(self):
        if(self.enable == True):
            self.add_work_button.config(bg="Crimson")
            self.enable = False
        else :
            print("Waring: operation denied")
            return False
        self.init_sub_window = Toplevel()
        confirm_w = Sub_W(self.init_sub_window, self.sq_helper, self.sq_table)
        confirm_w.set_confirm_window(
            self.pending_work_text.get(1.0,END).strip(),
            self.guide_line_text.get(1.0,END).strip(),
            self.comment_text.get(1.0,END).strip(),
            self.comboxlist.get(),
            self.WID
        )
        self.init_sub_window.protocol("WM_DELETE_WINDOW", self.on_sub_closing)
        return 1

    def confirm_change(self):
        if(self.enable == True):
            self.add_work_button.config(bg="Crimson")
            self.enable = False
        else :
            print("Waring: operation denied")
            return False

        if(self.pending_work_text == '' or not isinstance(self.pending_work_text,str)) :
            tkinter.messagebox.showinfo("Warning", "not a valid work")
            print ("Warning : not a valid work")
            self.init_window_name.destroy()
            return False

        # if self.WID == '' :
        #     self.cmd = sq_update_cmd[0]
        #     if(self.sq_table == sq_tables[0]) :
        #         self.status = process_value[0]
        #     elif(self.sq_table == sq_tables[1]) :
        #         self.status = process_value[2]
        #     self.WID = self.sq_helper.generate_wid()
        # else :
        #     self.cmd = sq_update_cmd[1]
        #     if self.sq_table == sq_tables[0] and self.status == process_value[2] :
        #         self.sq_helper.delete(self.sq_table, self.WID)
        #         self.sq_table = sq_tables[1]
        #         self.cmd = sq_update_cmd[0]
        #     elif self.sq_table == sq_tables[1] and self.status != process_value[2] :
        #         self.sq_helper.delete(self.sq_table, self.WID)
        #         self.sq_table = sq_tables[0]
        #         self.cmd = sq_update_cmd[0]

        # self.sq_helper.update(
        #     self.cmd,
        #     self.sq_table,
        #     self.pending_work_text,
        #     self.guide_line_text,
        #     self.comment_text,
        #     self.WID,
        #     self.status)

        print ("Info : change to DB completed")
        return True

    def get_current_time(self):
        current_time = time.strftime('%Y-%m-%d %H:%M:%S',time.localtime(time.time()))
        return current_time

class Main_W():
    def __init__(self,init_window_name):
        self.enable = True
        # self.sq_table = sq_tables[0]
        self.init_window_name = init_window_name
        # conn = sqlite3.connect('/home/amai/Work/DataBase/worktables.db')
        # self.sq_helper = Sqlite_Helper(conn)
        # self.sq_helper = Sqlite_Helper()
        self.init_window_name.protocol("WM_DELETE_WINDOW", self.on_closing)

    def on_closing(self):
        # self.sq_helper.close()
        self.init_window_name.destroy()

    def on_sub_closing(self):
        self.import_work_data()
        self.init_sub_window.destroy()
        self.add_work_button.config(bg="lightblue")
        # self.table_shift_button.config(bg="lightblue")
        self.enable = True

    #设置窗口
    def set_init_window(self):
        self.init_window_name.title("worktable_v0.1")
        self.init_window_name.geometry('400x520+100+100')

        self.lb = Listbox(self.init_window_name, width=80, height=20)
        self.lb.pack()
        self.import_work_data()
        self.lb.bind('<Double-Button-1>', self.open_update_work_w)
        self.add_work_button = Button(self.init_window_name, text="add work", bg="lightblue", width=80,command=self.open_add_work_w)  # 调用内部方法  加()为直接调用
        self.add_work_button.pack(side='top', expand='no',pady = 5)
        # self.table_shift_button = Button(self.init_window_name, text="already done", bg="lightblue", width=80,command=self.table_shift)  # 调用内部方法  加()为直接调用
        # self.table_shift_button.pack(side='top', expand='no',pady = 5)

    def import_work_data(self):
        self.lb.delete(0,END)
        # ret = self.sq_helper.select(self.sq_table, sq_select_cmd[0])
        for elem in ret:
            show_text = elem[1] + "  - wid: " + str(elem[0])
            self.lb.insert(END, show_text)
        self.sq_helper.close

    def open_add_work_w(self):
        if(self.enable == True):
            self.add_work_button.config(bg="Crimson")
            self.table_shift_button.config(bg="Crimson")
            self.enable = False
        else :
            print("Waring: operation denied")
            return False
        self.init_sub_window = Toplevel()
        add_work_w = Sub_W(self.init_sub_window, self.sq_helper, self.sq_table)
        add_work_w.set_init_window()
        self.init_sub_window.protocol("WM_DELETE_WINDOW", self.on_sub_closing)
        return True

    def open_update_work_w(self, event):
        if(self.enable == True):
            self.add_work_button.config(bg="Crimson")
            self.table_shift_button.config(bg="Crimson")
            self.enable = False
        else :
            print("Waring: operation denied")
            return False
        self.init_sub_window = Toplevel()
        update_work_w = Sub_W(self.init_sub_window, self.sq_helper, self.sq_table)
        update_work_w.set_init_window(True, self.get_select_wid(event))
        self.init_sub_window.protocol("WM_DELETE_WINDOW", self.on_sub_closing)
        return False

    def get_select_wid(self, event):
        w = event.widget
        index = int(w.curselection()[0])
        value = w.get(index)
        print(value)
        r = value.split(':')
        return r[1]

    # def table_shift(self):
    #     if self.sq_table == sq_tables[0] :
    #         self.sq_table = sq_tables[1]
    #         self.table_shift_button.config(text="pending work")
    #     else :
    #         self.sq_table = sq_tables[0]
    #         self.table_shift_button.config(text="already done")

    #     self.import_work_data()
    #     return True

def work_table_start():
    init_main_window = Tk()
    work_table_w = Main_W(init_main_window)
    work_table_w.set_init_window()
    init_main_window.mainloop()

work_table_start()
