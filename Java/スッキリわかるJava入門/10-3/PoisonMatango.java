public class PoisonMatango extends Matango {
    int nRestPoisonAttack = 5;

    public PoisonMatango(char suffix) {
        super(suffix);
    }

    public void attack(Hero h) {
        super.attack(h);

        if (nRestPoisonAttack != 0) {
            System.out.println("さらに毒の奉仕をばらまいた！");

            int damageByPoison = h.hp / 5;

            h.hp -= damageByPoison;
            System.out.println(damageByPoison + "ポイントのダメージ！");

            nRestPoisonAttack -= 1;
        }
    }
}
