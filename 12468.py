import sys

for i in sys.stdin:
    a,b=list(map(int,i.replace('\n','').split(' ')))
    if a == -1 and b == -1 : break
    if a>b:
        up1=a-b
        down1=100-a+b
        print (min(up1,down1))
    elif a == b: print ('0')
    else:
        up1=b-a
        down1=100-b+a
        print (min(up1,down1))