import comment.Zenhan;

public class Main {
    public static void main(String[] args) {
        Zenhan.doWarusa();
        Zenhan.doTogame();
        callDeae();
        showMondokoro();
    }

    public static void callDeae() {
        System.out.println("えぇい、こしゃくな。くせ者だ！であえい！");
    }

    public static void showMondokoro() {
        System.out.println("飛車さん、角さん。もういいでしょう。");
        System.out.println("この紋所が目にはいらぬか！");
        doTogame();
    }
}
