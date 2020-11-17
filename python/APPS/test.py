
import sqlite3

conn = sqlite3.connect('/home/amai/Work/DataBase/worktables.db')
c = conn.cursor()
print ("Opened database successfully")
wid = 0
w = 'test'
g = 'test'
s = 'test'
COMMENT = 'test'
# c.execute("INSERT INTO PENDINGWORKS (WID,WORK,STATUS,GUIDELINE,COMMENT) VALUES (0, ''test'', 'new', 'tableinit', 'tableinit' )")
# ret = c.execute("SELECT * from PENDINGWORKS where (WID="+str(wid)+ ")")

print("WORK = '" + w +  "', STATUS = '" + s +  "', GUIDELINE = '" + g +  "', COMMENT = '" + c +  "' WHERE WID = " + str(wid))
# c.execute()
c.execute("UPDATE PENDINGWORKS SET WORK = '" + w +  "', STATUS = '" + s +  "', GUIDELINE = '" + g +  "', COMMENT = '" + c +  "' WHERE WID = " + str(wid))
# for r in ret:
#     print (r[0])

conn.commit()
conn.close()
# print ("Opened database successfully" + conn)