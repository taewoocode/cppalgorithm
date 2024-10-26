import java.util.*;

public class Main {
    static String s;
    static int lcnt, vcnt;

    public static boolean isVowel(int idx) {
        return (idx == 'a' || idx == 'e' || idx == 'i' || idx == 'o' || idx == 'u');
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (true) {
            s = sc.next();
            if (s.equals("end")) break;
            lcnt = vcnt = 0;
            boolean flag = false;
            boolean isIncludeV = false;
            int prev = -1;  

            for (int i = 0; i < s.length(); i++) {
                int idx = s.charAt(i);  

                if (isVowel(idx)) {
                    lcnt++;
                    vcnt = 0;
                    isIncludeV = true;  
                } else {
                    lcnt = 0;
                    vcnt++;
                }

                if (vcnt == 3 || lcnt == 3) {
                    flag = true;
                }

                if (i >= 1 && (prev == idx) && (idx != 'e' && idx != 'o')) {
                    flag = true;
                }

                prev = idx;  
            }

            if (!isIncludeV) {
                flag = true;
            }

            if (flag) {
                System.out.println("<" + s + "> is not acceptable.");
            } else {
                System.out.println("<" + s + "> is acceptable.");
            }
        }
        sc.close();
    }
}
