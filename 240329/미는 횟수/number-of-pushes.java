import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine();
        String s2 = sc.nextLine();
        int len = s1.length();
        int cnt = -1;

        for(int i = 0; i < s1.length() - 1; i++) {
            if ((s1.substring(len-i, len) + s1.substring(0, len-i)).equals(s2)){
                cnt = i;
                break;
            }
        }

        System.out.println(cnt);
    }
}