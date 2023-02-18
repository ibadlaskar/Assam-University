
      class Test {
        void FunOver(int i) {
            System.out.println("Integer is :" + i);
        }
    
        void FunOver(float f) {
            System.out.println("Float is :" + f);
        }
    
        void FunOver(double d) {
            System.out.println("Double is :" + d);
        }
    }
    
    public class a11{
        public static void main(String[] args) {
            int i = 56;
            float f = 56.3f;
            double d = 55.632;
            ;
    
            Test s1 = new Test();
            s1.FunOver(i);
            s1.FunOver(f);
            s1.FunOver(d);
        }
    }