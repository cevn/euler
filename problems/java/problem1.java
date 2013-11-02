public class problem1 {
  public static void main(String[] args) {
    int sum  = 0; 

    for (int i=0; i < 1000; i +=3) {
      sum += i;
    }
    for (int j=0; j < 1000; j += 5) { 
      sum += j; 
    }

    for (int k=0; k < 1000; k += 15) {
      sum -= k; 
    }
  System.out.format("Sum: %d", sum);
  }

}
