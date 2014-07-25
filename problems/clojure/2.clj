; By considering the terms in the Fibonacci sequence
; whose values do not exceed four million,
; find the sum of the even-valued terms.

(def fib-seq
  ((fn rfib [a b]
     (lazy-seq (cons a (rfib b (+ a b)))))
   0 1))

(defn even? [number]
  (= 0(mod number 2)))


(reduce + (filter even? (take-while #(< % 4000000) fib-seq)))
