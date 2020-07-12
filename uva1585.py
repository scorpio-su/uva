import sys

for s in sys.stdin:
    s=s.replace('\n','')
    num=0
    sum1=0
    for i in range (len(s)):
        if s[i] == 'o':
            num+=1
        else:
            num=0
        sum1 +=num
    print (sum1)
    
