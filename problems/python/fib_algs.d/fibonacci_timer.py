#!/usr/bin/python
# fibonacci_timer.py

# A script to measure and record the execution time of
# two different algorithms, both designed to find the 
# element in the fibonacci sequence of a given index.
# First index is 1, passing less than 1 returns 0.

# The first algorithm is recursive, the second iterative.
# The algorithms are tested across values from START to
# STOP inclusive, stepping by INCREMENT, with each value
# tested TESTS times and the averages reported to the
# terminal.

# The time.clock() function is used to time the algorithms
# according to the Python documentation.

import time
import sys
sys.setrecursionlimit(10000)

START = 5
STOP = 50
INCREMENT = 5
TESTS = 10

# Recursive algorithm.
def recursive_fib(n):
	if n < 1:
		return 0
	elif n == 1:
		return 1
	else:
		return recursive_fib(n-1) + recursive_fib(n-2)

# Iterative algorithm.
def iterative_fib(n):
	if n < 1:
		return 0
	elif n == 1 or n == 2:
		return 1
	else:
		a_2 = 1
		a_1 = 1
		a = a_1 + a_2
		for i in range(n-3):
			a_2 = a_1
			a_1 = a
			a = a_1 + a_2
		return a


# Iterate across values and print results.
print "%-12s %-12s %-12s" % ("VALUE", "RECURSIVE", "ITERATIVE")
for i in range(START, STOP+1, INCREMENT):
	recursive_sum = 0
	iterative_sum = 0
	# Perform tests for given value on both algorithms.
	for j in range(TESTS):
		# Recursive test.
		start = time.clock()
		retval = recursive_fib(i)
		recursive_sum += time.clock() - start
		# Iterative test.
		start = time.clock()
		retval = iterative_fib(i)
		iterative_sum += time.clock() - start
	recursive_avg = recursive_sum / TESTS
	iterative_avg = iterative_sum / TESTS
	print "%-12s %-12f %-12f" % (i, recursive_avg, iterative_avg)		

exit(0)

