#!/bin/python3

#Given an integer, n, print its first 10 multiples. 
#Each multiple n x i (where 1 less than or equal to i which is less than or equal to 10) should be 
#printed on a new line in the form: n x i = result.

import sys


n = int(input().strip())
i = 1
while i<11:
    print(n,"x",i,"=", n*(i))
    i = i + 1