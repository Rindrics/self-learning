class Main {
    public static void main(String[] args) {
       int weight = 63;
         if (weight == 60) {
             System.out.format("weight (%d) は 60 です\n", weight);
         } else {
             System.out.format("weight (%d) は 60 ではありません\n", weight);
         }

       int age1 = 40;
       int age2 = 30;
       if ((age1 + age2) > 60) {
           System.out.format("合計年齢 (%d) は60を超えています\n", age1 + age2);
       } else {
           System.out.format("合計年齢 (%d) は60以下です\n", age1 + age2);
       }

       int age = 21;
       if ((age % 2) == 0) {
           System.out.format("age (%d) は偶数です\n", age);
       } else {
           System.out.format("age (%d) は奇数です\n", age);
       }

       String name = "湊";
       if (name.equals("湊")) {
           System.out.format("name (%s) は湊です\n", name);
       } else {
           System.out.format("name (%s) は湊ではありません\n", name);
       }
    }
}
