// Find the Sum of Maximum Sum Subarray.{Using Kadane's Algorithm}
// Time Complexity: O(n)
// Space Complexity: O(1)

import java.util.Scanner;
import java.util.ArrayList;
import java.util.Scanner;

public class KadaneAlgorithm {
    public static int kadaneAlgorithm(ArrayList<Integer> arr) {
        int n = arr.size();
        int maxSum = arr.get(0);
        int currSum = arr.get(0);
        for (int i = 1; i < n; i++) {
            currSum = Math.max(arr.get(i), currSum + arr.get(i));
            maxSum = Math.max(maxSum, currSum);
        }
        return maxSum;
    }

    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<>();
        arr.add(-2);
        arr.add(-3);
        arr.add(4);
        arr.add(-1);
        arr.add(-2);
        arr.add(1);
        arr.add(5);
        arr.add(-3);

        System.out.println("Maximum Sum of Subarray: " + kadaneAlgorithm(arr));
    }
}