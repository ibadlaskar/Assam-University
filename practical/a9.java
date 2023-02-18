import java.util.Scanner;

   

class Dist {
    int feet, inches;

    void getDistance(int feet, int inches) {
        this.feet = feet; // use of this keyword
        this.inches = inches;
    }

    void showDistance() {
        System.out.println("feet = " + feet);
        System.out.println("inches = " + inches);
    }
}

public class a9 {// class name should be distance

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the feet : ");
        int x = sc.nextInt();
        System.out.print("Enter the inches : ");
        int y = sc.nextInt();
        Dist obj = new Dist();
        obj.getDistance(x, y);
        sc.close();
        obj.showDistance();

    }
}
    
