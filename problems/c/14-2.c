// Euler Problem #14

// Find the number up to 1 million with the longest Collatz chain.

// Solution:
// Time:

#include <stdio.h>
#include <stdlib.h>

int main() {

	unsigned int LIMIT = 1000000;
	int max_len = 1;
	int max_num = 1;
	int times[LIMIT+1];

	long long unsigned num;
	for (num = 1; num < LIMIT+1; num++) {
		unsigned int start = num;
		int length = 1;
		while (num != 1) {
			if (num % 2 == 0) num = num / 2; // even
			else num = (3 * num) + 1; // odd
			if (num < start) {
				length += times[num];
				break;
			} else length += 1;
		}

		times[start] = length; // add new length to dict
		num = start;
		if (length > max_len) { // update max
			max_len = length;
			max_num = start;
		}
	}

	printf("The number is %d with chain length %d\n", max_num, max_len);
	exit(0);
}

