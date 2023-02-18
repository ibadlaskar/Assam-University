import java.util.Scanner;
public class a6{    
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
 System.out.println("Enter a number");
  int n=sc.nextInt();

      boolean flag = false;
      for (int i = 2; i <= n / 2; ++i) {
        
        // condition for nonprime number
        if (n % i == 0) {
          flag = true;
          break;
        }
      }
  
      if (flag==false)
        System.out.println(n + " is a prime number.");
      else
        System.out.println(n + " is not a prime number.");
    }
  }