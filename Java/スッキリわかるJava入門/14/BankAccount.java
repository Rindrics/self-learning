public class BankAccount {
    String accountNumber;
    int balance;

    public BankAccount(String accountNumber, int balance) {
        this.accountNumber = accountNumber;
        this.balance = balance;
    }

    public String toString() {
        return "¥" + this.balance + "(口座番号: " + this.accountNumber + ")";
    }
}
