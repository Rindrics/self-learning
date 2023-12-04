public class Main {
    public static void main(String[] args) {
        Hero h = new Hero("勇者");
        Wizard w = new Wizard("魔法使い");
        w.wand = new Wand();

        w.heal(h);
    }
}
