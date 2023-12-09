import java.util.Arrays;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Main {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder();
        for (int i = 1; i < 101; i++) {
            sb.append(i + ",");
        }
        System.out.println(sb);


        String[] numbers = sb.toString().split(",");
        System.out.println(Arrays.toString(numbers));

        String mydata = "some string with 'the data i want' inside";
        MatchString(mydata);
    }

    public String ConstructFiledir(String folder, String file) {
        String folderWithoutTrailingSlash = folder.replaceAll("/$", "");
        return folderWithoutTrailingSlash + "/" + file;
    }

    public static void MatchString(String str) {
        Pattern all = Pattern.compile(".*");
        Matcher matcherAll = all.matcher(str);
        if (matcherAll.find())
        {
            System.out.println(matcherAll.group(0));
        }
    }
}
