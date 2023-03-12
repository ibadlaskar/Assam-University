
    import java.util.Scanner;

    public class a20 extends Exception {
    public a20 (String s) {
        super(s);
    }

}

class Demo {
    static void find(int arr[], int item) throws a20 {
        boolean flag = false;
        for (int i = 0; i < arr.length; i++) {
            if (item == arr[i])
                flag = true;
        }
        if (!flag) {
            throw new a20("Item Not Found"); // calling constructor of user-defined exception class
        } else {
            System.out.println("Item Found");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter A number to find :");
        int a = sc.nextInt();
        sc.close();
        try {
            find(new int[] { 12, 25, 45,67,34,45,6,7,98,23 }, a);
        } catch (a20 i) {
            System.out.println(i);
        }
    }

}

/*  correct method*/

/* class CustomException extends Exception {
    

    public CustomException(String message) {
        super(message);
    }
}

public class a20 {
    public static void main(String[] args) {
        try {
            int num = 10;
            if (num > 5) {
                throw new CustomException("Number should be less than or equal to 5");
            }
        } catch (CustomException e) {
            System.out.println("Custom Exception caught: " + e.getMessage());
        }
    }
}
*/
