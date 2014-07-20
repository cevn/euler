; Problem 1: Find the sum of all the multiples of 3 or 5 below 1000.

(reduce +
  (concat
    (range 0 1000 3)
    (range 0 1000 5)
    (range 0 -1000 -15)))
