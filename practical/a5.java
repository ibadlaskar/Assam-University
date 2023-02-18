public class a5 {

        public static void main(String[] args) {
          int decimal = 43;
      
          // Approach 1: using Integer.toBinaryString()
          String binary1 = Integer.toBinaryString(decimal);
          System.out.println("Binary representation (approach 1): " + binary1);
      
          // Approach 2: using a loop
         /* String binary2 = "";
          while (decimal > 0) {
            binary2 = (decimal % 2) + binary2;
            decimal = decimal / 2;
          }
          System.out.println("Binary representation (approach 2): " + binary2);*/ 
        }
      }
    

