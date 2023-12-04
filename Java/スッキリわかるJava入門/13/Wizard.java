public class Wizard {
    int hp;
    int mp;
    String name;
    Wand wand;

    public Wizard(String name) {
        this.setName(name);
    }

    public void setName(String name) {
        if (name == null || name.length() < 3) {
            throw new IllegalArgumentException("名前が短すぎます。");
        }
        this.name = name;
    }

    void heal(Hero h) {
        int basePoint = 10;
        int recovPoint =
            (int) (basePoint * this.wand.power);
        h.setHp(h.getHp() + recovPoint);
        System.out.println(h.getName() + "のHPを" + recovPoint + "回復した！");
    }
}
