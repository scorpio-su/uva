# -*- coding: utf-8 -*-
"""
Created on Tue Dec 10 00:04:06 2019

@author: Username
"""

import sys

for n in [input()]:
    n=int(n)
    if n == 0: break
    num=5*(n%10)
    n//=10
    if (n-num)%17 == 0: print('1')
    else: print('0')