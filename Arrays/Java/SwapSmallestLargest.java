// Swap smallest & largest element from the array along with their indexes.
public class SwapMinMax {

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

    public static void SwapSmallestLargest() {
        int[] array = {-15, 56, 90, 23, -23};
        int smallest = findSmallest(array);
        int largest = findLargest(array);

        int smallestIndex = findIndex(array, smallest);
        int largestIndex = findIndex(array, largest);

        int temp = array[smallestIndex];
        array[smallestIndex] = array[largestIndex];
        array[largestIndex] = temp;

        System.out.println("Array elements after swapping smallest and largest elements: ");
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        SwapSmallestLargest();
    }
}