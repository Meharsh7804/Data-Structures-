// Reverse elements of an array with and without using another array.
import java.util.Arrays;

public class ReverseArray {

    public static void ReverseArrayWithoutAnotherArray(int[] array) {
        int start = 0;
        int end = array.length - 1;
        while (start < end) {
            int temp = array[start];
            array[start] = array[end];
            array[end] = temp;
            start++;
            end--;
        }

        System.out.println("Array elements after reversing without another Array: ");
        System.out.println(Arrays.toString(array));
    }

    public static void ReverseArrayWithAnotherArray(int[] array) {
        int[] newArray = new int[array.length];
        int end = array.length - 1;
        for (int i = 0; i < array.length; i++) {
            newArray[end] = array[i];
            end--;
        }

        System.out.println("Array elements after reversing with another Array: ");
        System.out.println(Arrays.toString(newArray));
    }

    public static void main(String[] args) {
        int[] array = {1, 2, 3, 4, 5};
        ReverseArrayWithoutAnotherArray(array);
        ReverseArrayWithAnotherArray(array);
    }
}