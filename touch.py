#使用方法：目录 语言（c或j） 题目数量 例：python touch.py 2tha j 4
import os
import sys
a = ['1tha', 'j', '5']
pathname = sys.argv[1]+sys.argv[2]
if os.path.exists(pathname):
    print("path exists")
    sys.exit()
os.mkdir(pathname)
alphabet = ' ABCDEFGHIJKLMNOPQRSTUVWXYZ'
files=int(sys.argv[3])+1
if sys.argv[2] == 'c':
    for i in range(1, files):
        open(pathname+"/"+alphabet[i]+".cpp", "w")
elif sys.argv[2] == 'j':
    for i in range(1, files):
        open(pathname+"/"+str(i)+".ja", "w")
else:
    print("error")