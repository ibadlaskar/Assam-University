public class a8 {
        public static void main(String[] args) {
          // Create a String object
          String str = "Hello";
      
          // Demonstrate the setCharAt() function
          str = str.substring(0, 1) + "a" + str.substring(2);
          System.out.println(str);  // Output: Halllo
      
          // Create a StringBuffer object
          StringBuffer sb = new StringBuffer("Hello");
      
          // Demonstrate the setLength() function
          sb.setLength(10);
          System.out.println(sb);  // Output: "Hello     "
      
          // Demonstrate the append() function
          sb.append(" World");
          System.out.println(sb);  // Output: "Hello     World"
      
          // Demonstrate the insert() function
          sb.insert(5, ",");
          System.out.println(sb);  // Output: "Hello,     World"
      
          // Demonstrate the concat() function
          sb.replace(5, 6, " ");
          String str2 = str.concat(sb.toString());
          System.out.println(str2);  // Output: "Halllo Hello      World"
      
          // Demonstrate the equals() function
          System.out.println(str.equals(sb.toString()));  // Output: false
        }
      }
      

