// Find sum of all elements in ArrayList.
import java.util.ArrayList;

public class SumOfElements {
    public static void main(String[] args) {
        ArrayList<Integer> v = new ArrayList<>();
        v.add(2);
        v.add(4);
        v.add(6);
        v.add(8);
        v.add(10);

        int sum = 0;
        for(int val : v) {
            sum += val;
        }
        System.out.println("Sum of elements in ArrayList: " + sum);
    }
}