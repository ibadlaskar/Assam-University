import java.util.Scanner;
public class a6{    
     
    public static void main(String args[]){    
     int flag=0; 
     Scanner sc =new Scanner(System.in) ;
      System.out.println("Enter a number");
     int n=sc.nextInt(); 

     if(n<=1){  
      System.out.println(n+" is not prime number");      
     }
     else{  
      for(int i=2;i<=n/2;i++){      
       if(n%i==0){      
        System.out.println(n+" is not prime number");      
        flag=1;      
        break;      
       }      
      }
      
      
      if(flag==0) 
       { System.out.println(n+" is prime number"); }  
     }  
   }    
   }  
