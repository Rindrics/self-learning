public class Main {
    public static void main(String[] args) {
        Hero h = new Hero();
        h.name = "ミナト";
        h.hp = 100;
        System.out.println("勇者" + h.name + "を生み出しました！");

        Cleric c = new Cleric();
        c.name = "アサカ";
        c.hp = 50;
        c.mp = 10;
        System.out.println("聖職者" + c.name + "を生み出しました！");

        Matango m1 = new Matango();
        m1.hp = 50;
        m1.suffix = 'A';

        Matango m2 = new Matango();
        m2.hp = 48;
        m2.suffix = 'B';

        h.slip();
        c.selfAid();
        c.pray(2);
        c.pray(10);
        c.pray(10);
        m1.run();
        m2.run();
        h.run();
    }
}
