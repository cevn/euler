#!/usr/bin/python

# Project Euler, Problem #10

# Find the sum of all primes less than 2 million.
# Solution: 142913828922
# Time: 21 seconds

import math 

# Brute force function to check if a number is prime.
# Rabin-Miller test would be faster, but not necessary
# for numbers of this magnitude.
def isPrime(number):
	chk_limit = int(math.sqrt(number)) + 1
	for i in range(2, chk_limit):
		if number % i == 0:
			return False
	return True

# Iterate through 2 million, adding primes to sum.
sum = 2 # two is a known prime
for i in range(3, 2000001, 2): # start with three and skip even numbers
	if isPrime(i):
		sum += i
	
# Print the solution.
print("The sum of primes less than 2 million is: " + str(sum))
exit(0)
