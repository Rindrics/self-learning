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

    public int pray(int sec) {
        System.out.println(this.name + "は" + sec + "秒間天に祈った！");
        int recoverAmount = sec + new java.util.Random().nextInt(3);
        this.mp += recoverAmount;
        if (this.mp > this.maxMp) {
            this.mp = this.maxMp;
        }
        System.out.println("MPが" + recoverAmount + "回復した！");

        return recoverAmount;
    }
}
