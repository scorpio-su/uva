import sys

for n in sys.stdin:
    n=int(n.replace('\n',''))
    if n == 0:
        break
    print (int(n*(n+1)*(2*n+1)/6))