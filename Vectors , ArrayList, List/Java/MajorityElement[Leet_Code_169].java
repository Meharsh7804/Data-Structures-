// Find the element with majority count in the array.
// Majority element is the element that appears more than n/2 times in the array.
import java.util.*;

public class MajorityElement {
    public static int majority(int[] v) {
        int frequency = 0, ans = 0;
        for (int i = 0; i < v.length; i++) {
            if (frequency == 0)
                ans = v[i];
            if (ans == v[i])
                frequency++;
            else
                frequency--;
        }
        return ans;
    }

    public static void main(String[] args) {
        int[] v = {1, 2, 2, 1, 1};
        int majorityElement = majority(v);
        System.out.println("Majority Element: " + majorityElement);
    }
}