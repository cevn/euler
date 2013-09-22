#! /usr/bin/python 

# Project Euler, Problem #2 
#
# By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

def fibonacci(n):
    if (n == 0): 
        return 0
    elif (n == 1): 
        return 1
    else:
        return (fibonacci(n-1) + fibonacci(n-2))

def isEven(n): 
    if (n%2 == 0):
        return True
    else: 
        return False

for i in range(1000):
    sum = 0
    n = fibonacci(i) 
    while n < 4000000: 
        if (isEven(n)):
            sum += n
    break

print sum
