public class Main {
    public static void main(String[] args) {
       X obj = new A();
       obj.a();

       Y y1 = new A();
       Y y2 = new B();

       y1.a();
       y2.a();

       Y[] array = new Y[2];
       array[0] = y1;
       array[1] = y2;

       System.out.println("before loop");
       for (Y y : array) {
           System.out.println("inside loop");
           y.b();
       }
       System.out.println("after loop");
    }
}
