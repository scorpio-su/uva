# -*- coding: utf-8 -*-
"""
Created on Wed Oct 30 21:56:07 2019

@author: Username
"""
import sys
import math as m

for t in sys.stdin:
    t=int(t.replace('\n',''))
    for n in range (0,t):
        data = list(map(int,input().replace('\n','').split()))
        data.sort()
        max1=0
        for i in range(0,len(data)-1):
            for j in range(i+1,len(data)):
                max1=max(max1,m.gcd(data[i],data[j]))
        print(max1)