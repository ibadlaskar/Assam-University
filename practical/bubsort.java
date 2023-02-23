        import java.util.Scanner;
        public class bubsort {
            public static void main(String[] args) {
                int temp=0;
                int[] array = null; 
                Scanner sc=new Scanner(System.in);
                System.out.println("enter the size");
                int size=sc.nextInt();
            array = new int[size];
        System.out.println("enter elemets");
        for(int i=0;i<size;i++){
            array[i]=sc.nextInt();
        }
        for(int i=0; i < size; i++){  
            for(int j=1; j < (size-i); j++){  
                    if(array[j-1] > array[j]){  
                            //swap elements  
                            temp = array[j-1];  
                            array[j-1] = array[j];  
                            array[j] = temp;  
                    }    
            }  
        }  
            System.out.println("sorted");
            for(int i=0;i<size;i++){
                System.out.println(array[i]);
            }
        }
        }
