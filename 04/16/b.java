import java.util.*;

class Pair{
    int y;
    int x;

    public Pair(int y, int x){
        this.y = y;
        this.x = x;
    }
}

public class b{
    public static void main(String[] args){
        Integer a[] = {13,3,8,5};
        Pair[] c ={
            new Pair(1,2),
            new Pair(3,4),
            new Pair(5,2),
            new Pair(10,23)
        };

        ArrayList<Pair> list = new ArrayList<>();





        Arrays.sort(a);
        Arrays.sort(a, Collections.reverseOrder());

        for(int i = 0; i < a.length; i++){
            System.out.print(a[i] + " ");
        }
    }



}