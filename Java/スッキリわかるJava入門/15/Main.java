import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder();
        for (int i = 1; i < 101; i++) {
            sb.append(i + ",");
        }
        System.out.println(sb);


        String[] numbers = sb.toString().split(",");
        System.out.println(Arrays.toString(numbers));
    }
}
