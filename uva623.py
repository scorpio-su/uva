import sys

for i in [input()]:
    i=int(i)
    num=1
    for i in range(1,i+1):
        num*=i
    print('{0}!\n{1}'.format(i,num))