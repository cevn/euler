#!/usr/bin/python

# Project Euler, Problem #1
#
# Find the sum of all the multiples of 3 or 5 below 1000.

def isMultof3or5(number): 
    if ((number % 3 == 0) | (number % 5 == 0)):
        return True
    else: 
        return False 

multlist = []
for i in range(3,1000):
    if (isMultof3or5(i)):
        multlist.append(i)

sum = 0
i=0
for i in range(len(multlist)):
   sum += multlist[i]

print(sum) 
