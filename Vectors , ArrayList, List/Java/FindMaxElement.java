// Find max element in a ArrayList
import java.util.ArrayList;
import java.util.Collections;

public class FindMaxElement {
    public static void main(String[] args) {
        ArrayList<Integer> v = new ArrayList<>();
        v.add(21);
        v.add(3);
        v.add(13);
        v.add(433);
        v.add(453);
        v.add(3);

        int maxElement = Collections.max(v);
        System.out.println("Max Element: " + maxElement);
    }
}