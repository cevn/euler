import java.math.BigInteger;

class problem3 {
  public static void main(String[] args)  {
    long NUMBER = 600851475143L; 
    for (long i=2; i < (long)Math.sqrt(NUMBER); i++) {
      if (NUMBER%i == 0 && isPrime(i)) {
        System.out.format("Prime Factor: %d\n", i);
      }
    }
    
  }

  static boolean isPrime(long n) {
    for (long i=2; i < (long)Math.sqrt(n); i++) {
      if (n%i == 0) return false; 
    }

    return true; 
  }
}
