public class Cleric {
    String name;
    int hp;
    int mp;
    final int maxHp = 50;
    final int maxMp = 10;

    public void selfAid() {
        System.out.println(this.name + "はセルフエイドを唱えた！");
        this.hp = this.maxHp;
        this.mp -= 5;
        System.out.println("HPが最大まで回復した！");
    }
}
