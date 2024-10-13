// Return the indexes of elements whose sum is equal to the target.
import java.util.ArrayList;
import java.util.Arrays;

public class PairSum {
    public static ArrayList<Integer> pairSum(ArrayList<Integer> v, int target) {
        ArrayList<Integer> ans = new ArrayList<>();
        int start = 0;
        int end = v.size() - 1;
        while (start < end) {
            if (v.get(start) + v.get(end) == target) {
                ans.add(start);
                ans.add(end);
                return ans;
            } else if (v.get(start) + v.get(end) < target) {
                start++;
            } else {
                end--;
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        ArrayList<Integer> v = new ArrayList<>(Arrays.asList(2, 7, 11, 15));
        int target = 9;
        ArrayList<Integer> ans = pairSum(v, target);
        System.out.println(ans.get(0) + ", " + ans.get(1));
    }
}