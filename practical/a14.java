public class a14 {
    

        public static void main(String args[]) {
            int a = 50;
            Integer a1 = a;// boxing
            Integer a2 = 45;// boxing
            System.out.println("Value after boxing " + a1 + " , " + a2);
            int c = a1;// unboxing
            int d = a2;// unboxing
            System.out.println("Value of after unboxing " + c + " , " + d);
        }
    
    
}
