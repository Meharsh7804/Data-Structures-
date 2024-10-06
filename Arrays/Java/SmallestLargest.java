// Find smallest & largest element from the array along with their indexes.
public class SmallestLargest {

    public static int findSmallest(int[] array) {
        int smallest = array[0];
        for (int i = 1; i < array.length; i++) {
            if (array[i] < smallest)
                smallest = array[i];
        }
        return smallest;
    }

    public static int findLargest(int[] array) {
        int largest = array[0];
        for (int i = 1; i < array.length; i++) {
            if (array[i] > largest)
                largest = array[i];
        }
        return largest;
    }

    public static int findIndex(int[] array, int element) {
        for (int i = 0; i < array.length; i++) {
            if (array[i] == element)
                return i;
        }
        return -1;
    }

    public static void SmallestLargest() {
        int[] array = {-15, 56, 90, 23, -23};
        int smallest = findSmallest(array);
        int largest = findLargest(array);

        System.out.println("Smallest element is " + smallest + " at index " + findIndex(array, smallest));
        System.out.println("Largest element is " + largest + " at index " + findIndex(array, largest));
    }

    public static void main(String[] args) {
        SmallestLargest();
    }
}