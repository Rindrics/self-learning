class Main {
    public static void main(String[] args) {
        int[] numbers = { 3, 4, 9 };

        System.out.println("1桁の数字を入力してください");

        java.util.Scanner scanner = new java.util.Scanner(System.in);
        int input = scanner.nextInt();
        
        for (int number : numbers) {
            if (number == input) {
                System.out.println("アタリ！");
            }
        }
        System.out.println("ハズレ！");
        scanner.close();
    }
}
