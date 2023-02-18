import java.util.Scanner;
public class a3 {


  public static void main(String[] args) {
    int[] array = null;

    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter the size of the array: ");
    int size = scanner.nextInt();

    array = new int[size];

    for (int i = 0; i < size; i++) {
      System.out.print("Enter a value for element " + i + ": ");
      array[i] = scanner.nextInt();
    }

    // Use the array here
  }


    
}
