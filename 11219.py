#import sys

num=int(input())
num1=0
while(num != 0):
    num-=1
    num1+=1
    nod,nom,noy=list(map(int,str(input()).replace('\n','').split('/')))
    brid,brim,briy=list(map(int,input().replace('\n','').split('/')))
    x= (noy-briy)-(nom<brim) - (nom == brim and brid>nod)
    print ('Case #{}: '.format(num1),end='')
    if x<0: print('Invalid birth date')
    elif x>130: print('Check birth date')
    else: print(x)