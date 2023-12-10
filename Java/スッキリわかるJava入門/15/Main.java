import java.util.Arrays;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.time.*;
import java.time.format.DateTimeFormatter;

public class Main {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder();
        for (int i = 1; i < 101; i++) {
            sb.append(i + ",");
        }
        System.out.println(sb);


        String[] numbers = sb.toString().split(",");
        System.out.println(Arrays.toString(numbers));

        MatchString("A1234");
        MatchString("UABCD");
        MatchString("U1BCD");

        ZonedDateTime z = ZonedDateTime.now();
        System.out.println(z);

        ZonedDateTime future = z.plusDays(100);
        System.out.println(future);

        System.out.println(future.format(DateTimeFormatter.ofPattern("yyyy/MM/dd")));
    }

    public String ConstructFiledir(String folder, String file) {
        String folderWithoutTrailingSlash = folder.replaceAll("/$", "");
        return folderWithoutTrailingSlash + "/" + file;
    }

    public static void MatchString(String str) {
        Pattern one = Pattern.compile(".*");
        Matcher matcher1 = one.matcher(str);
        if (matcher1.find())
        {
            System.out.println("matcher1: " + matcher1.group(0));
        }

        Pattern two = Pattern.compile("^A[0-9][0-r]?");
        Matcher matcher2 = two.matcher(str);
        if (matcher2.find())
        {
            System.out.println("matcher2: " + matcher2.group(0));
        }

        Pattern three = Pattern.compile("^U[A-Z]{3}");
        Matcher matcher3 = three.matcher(str);
        if (matcher3.find())
        {
            System.out.println("matcher3: " + matcher3.group(0));
        }
    }
}
