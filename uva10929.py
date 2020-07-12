import sys

for num in sys.stdin:
    num= str(num.replace('\n',''))
    sum=0
    if num == '0':
        break
    for i in range (len(str(num))):
        if i%2 == 0:
            sum-=int(num[i])
        else:
            sum+=int(num[i])
    if sum%11==0:
        print ('%s is a multiple of 11.' %num)
    else:
        print ("%s is not a multiple of 11."%num)