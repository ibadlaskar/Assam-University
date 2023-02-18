 import java.util.Scanner;
public class a18 {
   


    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a: ");
      int  a=input.nextInt();
        System.out.print("Enter a: ");
       int b=input.nextInt();
        try{
        int result =a/b;  
          System.out.println("a/b = "+a+"/"+b+" = "+result);
        }catch(ArithmeticException ex){
          System.out.println("Division by zero");
        }
        
      
    }
}
