import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        System.out.println("【数あてゲーム】") ;
        int ans = new java.util.Random().nextInt(10);

        Scanner scanner = new Scanner(System.in);

        for (int i = 0; i < 5; i++) {
            System.out.println("0~9の数字を入力してください");
            int num = scanner.nextInt();
            if (num == ans) {
                System.out.println("アタリ！");
                break;
            } else {
                System.out.println("違います");
            }
        }
        scanner.close();
        System.out.println("ゲームを終了します");
    }
}
