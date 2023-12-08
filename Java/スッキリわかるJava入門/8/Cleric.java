public class Cleric {
    String name;
    int hp;
    int mp;
    static final int maxHp = 50;
    static final int maxMp = 10;

    public void selfAid() {
        System.out.println(this.name + "はセルフエイドを唱えた！");
        this.hp = this.maxHp;
        this.mp -= 5;
        System.out.println("HPが最大まで回復した！");
    }

    public int pray(int sec) {
        System.out.println(this.name + "は" + sec + "秒間天に祈った！");
        int recoverAmount = sec + new java.util.Random().nextInt(3);

        int recoverActual = Math.min(this.maxMp - this.mp, recoverAmount);
        this.mp += recoverActual;
        if (this.mp > this.maxMp) {
            this.mp = this.maxMp;
        }
        System.out.println("MPが" + recoverActual + "回復した！");

        return recoverActual;
    }
}
