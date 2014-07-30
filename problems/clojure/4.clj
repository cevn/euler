; A palindromic number reads the same both ways.
; The largest palindrome made from the product
; of two 2-digit numbers is 9009 = 91 × 99.
; Find the largest palindrome made from the product of two 3-digit numbers.

(require '[clojure.string :as s])

(defn palindrome [number]
  (= (str number) (s/reverse (str number))))

(palindrome 353)

