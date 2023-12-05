public class Main {
    public static void main(String[] args) {
        Hero h = new Hero("勇者");
        Wizard w = new Wizard("魔法使い", 50, 100);
        w.wand = new Wand();

        w.heal(h);
    }
}
