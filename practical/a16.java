import java.util.Scanner;


public class a16 {


 public static void main(String[] args) {
  int len;
  Scanner sc=new Scanner(System.in);
  Scanner in = new Scanner(System.in); 
  System.out.print("Enter length: ");
  len = sc.nextInt();
  int[] arr = new int[len];
  arr[0] = 0;
  arr[1] = 1;
  
  for (int i = 2; i < len; i++) {
   arr[i] = arr[i - 1] + arr[i - 2];
  }


  System.out.println("Fibonacci Series: ");
  for (int i = 0; i <=len; i++) {
        System.out.print(arr[i] + " ");
  }
 }


}