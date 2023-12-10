import java.util.Arrays;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.Date;
import java.util.Calendar;
import java.text.SimpleDateFormat;

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

        Date now = new Date();
        System.out.println(now);
        Calendar c = Calendar.getInstance();
        c.setTime(now);

        int day = c.get(Calendar.DAY_OF_MONTH);
        c.set(Calendar.DAY_OF_MONTH, day + 100);
        System.out.println(c.getTime());

        Date d = c.getTime();
        SimpleDateFormat f = new SimpleDateFormat("yyyy/MM/dd HH:mm:ss");
        System.out.println(f.format(d));
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
