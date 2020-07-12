import sys

for n in [input()]:
    n=int(n)
    num=1
    for i in range(1,n+1):
        num*=i
    num=str(num)
    ans=0
    for i in range (len(num)):
        ans+=int(num[i])
    print(ans)