import java.util.*;
public class Main2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();

        String reversed = new StringBuilder(s).reverse().toString();
        if(s.equals(reversed)){
            System.out.println(1);
        } else {
            System.out.println(0);
        }
    }
}
