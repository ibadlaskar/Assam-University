class Calc {

    public int m, cm;
    static int total = 0;

    Calc(int f, int i) {

        this.m = f;
        this.cm = i;
    }

    void display() {
        System.out.println("Metre = " + m);
        System.out.println("Centimetre =  " + cm);

    }

    public static void addDistance() {

        total = total + 10;
        System.out.println("value of static total =   " + total);

    }

    public void varDistance(int... a) {
        System.out.println("Variable length arguments : ");

        for (int i : a) {
            System.out.println(i);
        }

    }
}

public class a13{
    public static void main(String args[]) {

        Calc d1 = new Calc(10, 20);
        d1.display();
        Calc.addDistance();
        Calc.addDistance();
        d1.varDistance(10, 20, 30, 40);

    }
}

