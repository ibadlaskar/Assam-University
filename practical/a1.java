public class a1 {


        public static void main(String values[]) {
            int sum = 0;
            System.out.println("Calculates Sum for below Integers");
            for(int i=0;i<values.length;i++){
                System.out.println(values[i]);
                sum = sum + Integer.parseInt(values[i]);
            }
            System.out.println("Sum :" + sum);
        }
    }