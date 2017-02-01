#!/bin/python3

#In this challenge, we're getting started with conditional statements,
#Given an integer, , perform the following conditional actions:

#If n is odd, print Weird
#If n is even and in the inclusive range of 2 to 5, print Not Weird
#If n is even and in the inclusive range of 6 to 20, print Weird
#If n is even and greater than 20, print Not Weird
#Complete the stub code provided in your editor to print whether or not n is weird.

import sys

N = int(input().strip())
if ((N % 2) == 1):
    print("Weird")
elif ((N%2) == 0) & (1<N<6):
    print("Not Weird")
elif((N%2) == 0) & (5<N<21):
    print("Weird")
elif ((N%2) == 0) & (N>20):
    print("Not Weird")