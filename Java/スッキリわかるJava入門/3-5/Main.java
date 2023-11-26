class Main {
    public static void main(String[] args) {
        System.out.print("[メニュー] 1:検索 2:登録 3:削除 4:変更>");
       try (java.util.Scanner scanner = new java.util.Scanner(System.in)) {
           int selected = scanner.nextInt();

           String action;
           switch (selected) {
           case 1:
               action = "検索";
               // FALLTHROUGH
           case 2:
               action = "登録";
               // FALLTHROUGH
           case 3:
               action = "削除";
               // FALLTHROUGH
           case 4:
               action = "変更";
               System.out.format("%sします\n", action);
               break;
           default:
               break;
           }
       }
    }
}
