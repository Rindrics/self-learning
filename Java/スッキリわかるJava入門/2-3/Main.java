class Main {
    public static void main(String[] args) {
        System.out.println("ようこそ占いの館へ");
        System.out.println("あなたの名前を入力してください");
        try(java.util.Scanner scanner = new java.util.Scanner(System.in)) {
            String name = new java.util.Scanner(System.in).nextLine();
            System.out.println("あなたの年齢を入力してください");
            String ageString = new java.util.Scanner(System.in).nextLine();

            int age = Integer.parseInt(ageString);
            int fortune = new java.util.Random().nextInt(4);
            fortune++;
            System.out.println("占いの結果が出ました！");
            System.out.format("%d 歳の%sさん、あなたの運気番号は %d です。\n", age, name, fortune);
            System.out.println("1: 大吉 2: 中吉 3: 吉 4: 凶");
        }
    }
}
