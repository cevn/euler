// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143?

fn main() { 
   format!("prime or not: {:b}", isPrime(600851475143));  
}

#[test]
fn isPrime_test_2() { 
   assert!(isPrime(2) == true); 
} 

#[test]
fn isPrime_test_3() { 
   assert!(isPrime(3) == true); 
} 

#[test]
fn isPrime_test_4() { 
   assert!(isPrime(4) == false); 
} 

fn isPrime(n: int) -> bool {
   match n { 
       2 => return true, 
       3 => return true,
       _ => { 
           if (n%2==0) || (n%3==0) {
               return false;
           } else { 
               let mut i = 5; 
               let mut w = 2; 

               while i*i < n { 
                   if n%i == 0 { 
                       return false; 
                   }
                   i += w; 
                   w = 6 - w; 
               } 
               return true; 
           } 
       }
   }
}
