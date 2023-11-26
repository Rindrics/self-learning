class Main {
    public static void main(String[] args) {
        int[] moneyList = {121902, 8302, 55100};

        System.out.println("Print using normal for loop:");
        for (int i = 0; i < moneyList.length; i++) {
            System.out.println(moneyList[i]);
        }

        System.out.println("Print using extended for loop:");
        for (int money : moneyList) {
            System.out.println(money);
        }
    }
}
