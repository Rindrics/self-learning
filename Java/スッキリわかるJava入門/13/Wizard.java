public class Wizard {
    int hp;
    int mp;
    String name;
    Wand wand;

    public Wizard(String name, int hp, int mp) {
        this.setName(name);
        this.setHp(hp);
        this.setMp(mp);
        this.wand = new Wand();
    }

    public void setName(String name) {
        if (name == null || name.length() < 3) {
            throw new IllegalArgumentException("名前が短すぎます。");
        }
        this.name = name;
    }

    public void setHp(int hp) {
        if (hp < 0) {
            this.hp = 0;
        } else {
            this.hp = hp;
        }
    }

    public void setMp(int mp) {
        if (mp < 0) {
            throw new IllegalArgumentException("MPが負の数です。");
        }
        this.mp = mp;
    }

    void heal(Hero h) {
        int basePoint = 10;
        int recovPoint =
            (int) (basePoint * this.wand.power);
        h.setHp(h.getHp() + recovPoint);
        System.out.println(h.getName() + "のHPを" + recovPoint + "回復した！");
    }
}
