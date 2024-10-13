// Reverse an ArrayList
import java.util.ArrayList;
import java.util.Collections;

public class ReverseArrayList {
    public static ArrayList<Integer> ReverseArrayList(ArrayList<Integer> v) {
        Collections.reverse(v);
        return v;
    }

    public static void main(String[] args) {
        ArrayList<Integer> v = new ArrayList<>();
        v.add(1);
        v.add(2);
        v.add(3);
        v.add(4);
        v.add(5);

        ArrayList<Integer> reversed = ReverseArrayList(v);
        for (int val : reversed) {
            System.out.print(val + " ");
        }
    }
}