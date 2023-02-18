public class a19 {

   
        public static void main(String[] args) {
            try {
                System.out.println("We are in outer try block");
                try {
                    System.out.println("We are in 1st inner try block");
                    int b = 5 / 0;
                } catch (ArithmeticException e) {
                    System.out.println(e);
                }
                System.out.println("We are out of 1st inner try block");
                try {
                    System.out.println("We are in 2nd inner try block");
                    int a[] = new int[5];
                    a[5] = 4;
                } catch (ArrayIndexOutOfBoundsException e) {
                    System.out.println(e);
                }
                System.out.println("We are out of 2nd inner try block");
            } catch (Exception e) {
                System.out.println(e);
            }
            System.out.println("We are out of outer try block");
        }
    
    
}
