class Main {
    public static void main(String[] args) {
        email("テストメール", "test@example.com", "これはテストです");
    }

    public static void email(String title, String address, String text) {
        System.out.format("%sに、以下のメールを送信しました\n件名: %s\n本文: %s\n", address, title, text);
    }
}
