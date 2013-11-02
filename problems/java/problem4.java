public class problem4 {
  public static void main(String[] args) {
    int max = 0; 
    for (int i = 100; i < 999; i++) {
      for (int j = 100; j < 999; j++) {
        if (isPalindrome(i*j) && (max < i*j)) max = i*j; 
      }
    }

  System.out.format("Largest palindromic multiple: %d", max); 
  }


  static boolean isPalindrome(int n) {
    String s = String.valueOf(n); 
    return s.equals(new StringBuilder(s).reverse().toString()); 
  }
}

