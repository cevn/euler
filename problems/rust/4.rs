// A palindromic number reads the same
// both ways. The largest palindrome made
// from the product of two 2-digit numbers is
// 9009 = 91 × 99.
//
// Find the largest palindrome made from the
// product of two 3-digit numbers.

fn main() {
  let mut i = 100;
  let mut j = 100;
  let mut max = 0;

  while i < 999 { 
    while j < 999 { 
      if isPalindrome(i*j) {
        if max < i*j {
          max = i*j; 
        }
      }
    }
  } 
}

fn isPalindrome(num: int) {
  let stringnum = num as str;
}
