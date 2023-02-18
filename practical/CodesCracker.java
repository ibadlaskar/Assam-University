import java.util.Scanner;

public class CodesCracker
{
   public static void main(String[] args)
   {
      int num, i, fact=1;
      Scanner s = new Scanner(System.in);
      
      System.out.print("Enter a Number: ");
      num = s.nextInt();
      
      for(i=num; i>=1; i--)
      {
         fact = fact*i;
      }
      
      System.out.println("\nFactorial Result = " +fact);
   }
}