public class a7 {
    public static void main(String args[]){
        System.out.println("enter the arguments");
        int sum=0;
        System.out.println("sum of all numbers");
        for (int i=0;i<args.length;i++){
            sum=sum+Integer.parseInt(args[i]);
            System.out.println(args[i]);
        }
        System.out.println(sum);
    }
}
