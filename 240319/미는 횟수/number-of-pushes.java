import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine();
        String s2 = sc.nextLine();
        int cnt = 0;
        // System.out.println(s1.substring(0,4));

        for(int i = 0; i < s1.length(); i++) {
            cnt++;
            if ((s1.substring(5-i) + s1.substring(0, 5-i)).equals(s2)){
                break;
            }
        }

        System.out.println(cnt);
    }
}