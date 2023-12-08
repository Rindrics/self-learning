import java.util.Arrays;
class Main {
    public static void main(String[] args) {
        BankAccount a = new BankAccount("4649", 1592);
        System.out.println(a);

        BankAccount b = new BankAccount("  4649", 123);

        if (a.equals(b)) {
            System.out.println("同じ口座です");
        } else {
            System.out.println("違う口座です");
        }
    }
}
