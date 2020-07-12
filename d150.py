# -*- coding: utf-8 -*-
"""
Created on Sun Sep 15 18:51:38 2019

@author: Username
"""

import sys

def select_sort(list):
    for i in range (len(list)-1):
        min_index=i
        for j in range (i+1,len(list)):
            if list[min_index] < list[j]: min_index =j
        if min_index != i:
            list[min_index], list[i] = list[i], list[min_index]


n=int (input())
for i in range (n):
    num=int (input())
    nump=list(input().replace ('\n','').split(' '))
    select_sort(nump)
    out =0
    for i in range (2,num,3): out +=nump[i]
    print (out)