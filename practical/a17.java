
public class a17 {
    
    private int x = 2;
    public int y = 30;
    protected int z = 10; 
   int getX(){
       return x;
   }
    public static void main(String[] args) {
        adidas ad = new adidas();
        ad.display();
      }   
}
class adidas extends a17{
    public void display(){
  System.out.println("The value of x is\t "+getX());
  System.out.println("The value of y is\t "+y);
  System.out.println("The value of z is\t "+z);

    }
}