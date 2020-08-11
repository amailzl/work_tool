#!/usr/bin/python
import sys
import junitlib.junitextractor
import junitlib.junitidentifier

def openfile(file) :
    try :
        f = open (file, 'r')
        return f
    except IOError:
        print('[Errno 2] No such file or directory: ' + file)
        exit(2)

def closefile(f) :
    try :
        f.close()
        return True
    except IOError:
        print('[Errno 3] file '+ file +'close failed')
        exit(2)

def emptyline(target):
    target.write('\n')

def printdivider(c, str) :
    print(c + str)

def ctosbr (c, l) :
    str = ''
    for i in range(0, l) :
        str = str + c
    return str

def printjunitdependency(target) :
    try :
        junitdependency = 'junit_dependency.txt'
        f = open (junitdependency, 'r')
        for line in open(junitdependency) :
            line = f.readline()
            target.write(line)
        f.close()
        printdivider('printjunitdependency', ctosbr('.', 25))
    except IOError:
        print('[Err] target file open failed: ')
        exit(2)

def printsourcedependency(file, target) :
    source = openfile(file)
    for line in open(file) :
        line = source.readline()
        if junitlib.junitidentifier.isimport(line) :
            target.write(line)
        if junitlib.junitidentifier.isclass(line) :
            closefile(source)
            printdivider('printsourcedependency', ctosbr('.', 25))
            return True
    raise Exception('[printsourcedependency][error] file not contain class')
    return False

def printjunitbasic(file, target) :
    mainclassname = junitlib.junitextractor.getmainclassname(file)
    source = openfile(file)
    testclass = mainclassname + "UnitTest"
    testobj = "test" + mainclassname
    emptyline(target)
    target.write("@RunWith(MockitoJUnitRunner.class)\n\
public class " + testclass + "{\n\
    private static String TAG = \""+ testclass + "\";\n\
    private " + mainclassname + " " + testobj + " = null;\n\n\
    private Class<"+ mainclassname +"> "+ mainclassname +"Clazz = "+ mainclassname +".class;\n")
    for line in open(file) :
        line = source.readline()
        if junitlib.junitidentifier.isclass(line) :
            currentclass = junitlib.junitextractor.getclassname(line)
            if currentclass != mainclassname :
                target.write("    private Class<?> "+ currentclass +"Clazz = null;\n")
    target.write("\n\
    @Before\n\
    public void setUp(){\n\
        "+ testobj +" = new "+ mainclassname +"();\n\
    }\n\
\n\
    @After\n\
    public void tearDown(){\n\
        "+ testobj +" = null;\n\
    })\n\n")
    closefile(source)
    printdivider('printjunitbasic', ctosbr('.', 25))
    return True

def printinnerclassbuilder(file, target) :
    mainclassname = junitlib.junitextractor.getmainclassname(file)
    source = openfile(file)
    mainclazzname = mainclassname + "Clazz"
    packageprefix = ''
    for line in open(file) :
        line = source.readline()
        if junitlib.junitidentifier.ispackage(line) :
            packageprefix = junitlib.junitextractor.getpackagename(line)
        if junitlib.junitidentifier.isclass(line) :
            currentclass = junitlib.junitextractor.getclassname(line)
            if currentclass != mainclassname :
                target.write("    public Object get"+currentclass+"Object(){\n\
        for(Class c:"+mainclazzname+".getDeclaredClasses()){\n\
            if(c.getName().equals("+packageprefix+"."+mainclassname+"$"+currentclass+")){\n\
                "+currentclass+"Clazz = c;\n\
                break;\n\
            }\n\
        }\n\
        try{\n\
            Constructor[] cons = "+currentclass+"Clazz.getDeclaredConstructors();\n\
            for (Constructor con:cons){\n\
                Log.e(TAG, \""+currentclass+"Clazz con: [\" + con + \"]\");\n\
            }\n\
            Constructor con = cons[0];\n\
            con.setAccessible(true);\n\
            Object obj = con.newInstance(test"+mainclassname+");\n\
            return obj;\n\
        }catch(Exception e){\n\
            Log.e(TAG, \""+currentclass+"builder error:\" + e);\n\
            assertEquals(2, 1);\n\
        }\n\
        return null;\n\
    }\n\n")
    printdivider('printinnerclassbuilder', ctosbr('.', 25))
    closefile(source)

def printprivatefield(file, target) :
    source = openfile(file)
    for line in open(file) :
        line = source.readline()
        if junitlib.junitidentifier.isclass(line) :
            currentclass = junitlib.junitextractor.getclassname(line)
        if junitlib.junitidentifier.isprivatefield(line) :
            ret = junitlib.junitextractor.getfieldinfo (line)
            if ret != [] :
                fieldname = ret[0]
                fieldtype = ret[1]
                if fieldname.isupper() :
                    print("[constants] [ignore] [name] :" + fieldname + ", [type] :" + fieldtype)
                    continue
                print("[fieldinfo] [name] :" + fieldname + ", [type] :" + fieldtype)
                target.write("\n\
    public void init_"+fieldname+"("+fieldtype+" initArg){\n\
        try{\n\
            Field field = "+currentclass+"Clazz.getDeclaredField(\""+fieldname+"\");\n\
            field.setAccessible(true);\n\
            field.set(test"+currentclass+", initArg);\n\
        }catch(Exception e){\n\
            Log.e(TAG, \"init_"+fieldname+" error:\" + e);\n\
            assertEquals(2, 1);\n\
        }\n\
    }\n")
    printdivider('printprivatefield', ctosbr('.', 25))
    closefile(source)

def printmethod(file, target) :
    mainclassname = junitlib.junitextractor.getmainclassname(file)
    source = openfile(file)
    for line in open(file) :
        line = source.readline()
        if junitlib.junitidentifier.isclass(line) :
            currentclass = junitlib.junitextractor.getclassname(line)
        if junitlib.junitidentifier.isprivatemethod(line) :
            ret = junitlib.junitextractor.getmethodinfo (line)
            printprivatemethod(mainclassname,currentclass,ret,target)
        if junitlib.junitidentifier.ispublicmethod(line) :
            ret = junitlib.junitextractor.getmethodinfo (line)
            printpublicmethod(mainclassname,currentclass,ret,target)
    target.write("\n\
}")
    closefile(source)

def printpublicmethod(mainclassname,currentclass,info,target) :
    methodname=info[0]
    print("methodname"+ methodname)
    del info[0]
    if mainclassname == currentclass :
        target.write("\n\n\
    //test "+methodname+"\n\
    @Test\n\
    public void test_"+methodname+"(){\n\
        Log.d(TAG, \"["+currentclass+"] ["+methodname+"] test\");\n\
    }")
    else :
        target.write("\n\n\
    //test "+methodname+"\n\
    @Test\n\
    public void test_"+methodname+"(){\n\
        Log.d(TAG, \"["+currentclass+"] ["+methodname+"] test\");\n\
        Object "+currentclass+"Obj = get"+currentclass+"Object();\n\
    }")

def printprivatemethod(mainclassname,currentclass,info,target) :
    methodname=info[0]
    del info[0]
    argsstr = ''
    for elem in info :
        elem = "," + elem + ".class"
        argsstr  = argsstr + elem
    if mainclassname == currentclass :
        target.write("\n\n\
    //test "+methodname+"\n\
    @Test\n\
    public void test_"+methodname+"(){\n\
        Log.d(TAG, \"["+currentclass+"] ["+methodname+"] test\");\n\
        try {\n\
            Method "+methodname+"Method = "+currentclass+"Clazz.getDeclaredMethod(\""+methodname+"\""+argsstr+");\n\
            innerMethod1.setAccessible(true);\n\
        } catch (Exception e){\n\
            Log.e(TAG, \"test_"+methodname+" error:\" + e);\n\
            assertEquals(2, 1);\n\
        }\n\
    }")
    else :
        target.write("\n\
    //test "+methodname+"\n\n\
    @Test\n\
    public void test_"+methodname+"(){\n\
        Log.d(TAG, \"["+currentclass+"] ["+methodname+"] test\");\n\
        Object "+currentclass+"Obj = get"+currentclass+"Object();\n\
        try {\n\
            Method "+methodname+"Method = "+currentclass+"Clazz.getDeclaredMethod(\""+methodname+"\""+argsstr+");\n\
            innerMethod1.setAccessible(true);\n\
        } catch (Exception e){\n\
            Log.e(TAG, \"test_"+methodname+" error:\" + e);\n\
            assertEquals(2, 1);\n\
        }\n\
    }")



