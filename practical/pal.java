import java.util.Scanner;

public class pal {
    
    public static void main(String[] args) {
        String original, reverse = "";

        Scanner sc=new Scanner(System.in);
        System.out.println("enter the String");
        original=sc.nextLine();
        
        int len=original.length();

        for(int i=len-1;i>=0;--i){
            reverse=reverse+ original.charAt(i);
        }
         
        if (original.equals(reverse)){
    System.out.println("it is palindome");
        }

        else{

        System.out.println("not palindrome");
        }
    }
}
