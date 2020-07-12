import sys

n=int(input())

for i in range (n):
    fir=int(input())
    en=int(input())
    if fir %2 ==0:
        fir+=1
    sum=0
    for j in range (fir,en+1,2):
        sum+=j
    print ('Case {}:'.format(i+1) ,sum)