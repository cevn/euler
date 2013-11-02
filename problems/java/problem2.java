class problem2 {
  public static void main(String[] args) {
    int i = 0; 
    int sum = 0; 
    while (fibonacci(i) < 4000000) {
      if (isEven(fibonacci(i))) sum += fibonacci(i); 
    }

  System.out.format("Sum: %d", sum); 

  }


  private static boolean isEven(int n) {
    return (n%2==0);
  }

  private static int fibonacci(int n) {
    int f1 = 0; 
    int f2 = 1; 
    int fn=0;

    for (int i = 2; i < n; i++ ) {
      fn = f1 + f2; 
      f1 = f2; 
      f2 = fn; 
    }
  return fn; 
  }

}
