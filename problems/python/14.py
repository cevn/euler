#!/usr/bin/python

# Project Euler, Problem #14

# Find the number up to 1 million that has the longest
# Collatz chain (hailstone sequence).
# Solution:
# Time:

# Dynamic Approach:
# Use a dictionary to save each computed chain length. If the next
# element in the chain is less that the starting number at any point,
# lookup that numbers chain length and add it to the current to prevent
# any repeat computation. Maintain a max length throughout iterations to
# 1 million and report its value as the solution.

# Returns the length of the given numbers Collatz sequence.
#def collatzLength(number):
#	length = 1
#	while number != 1:
#		if number % 2 == 0: # even, divide by two
#			number = number / 2
#		else: # odd, mult by 3 and add 1
#			number = (3 * number) + 1
#		length += 1
#	return length

# Iterate up to 1 million, maintaining maximum chain length
# and dictionary of computed chains.
max_len = 1
max_num = 1
prev = {}
for num in range(1, 1000001):
	start = num
	length = 1
	while num != 1:
		if num % 2 == 0: # even, divide by two
			num = num / 2
		else: #odd, mult by 3 and add 1
			num = (3 * num) + 1
		if num < start: # lookup remaining chain length in dict
			length += prev[num]
			break
		else: # continue process
			length += 1
	prev[start] = length # add new length to dict
	if length > max_len:
		max_len = length
		max_num = start

print("max num is " + str(max_num) + " with length " + str(max_len))
exit(0)
