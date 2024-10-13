// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.

import java.util.ArrayList;

public class SingleElement {
    public static int singleNumber(ArrayList<Integer> nums) {
        int unique = 0;
        for (int num : nums) {
            unique ^= num;
        }
        return unique;
    }

    public static void main(String[] args) {
        ArrayList<Integer> nums = new ArrayList<>();
        nums.add(4);
        nums.add(1);
        nums.add(2);
        nums.add(1);
        nums.add(2);

        System.out.println(singleNumber(nums));
    }
}