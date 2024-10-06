// Linear Search
public class DoubleArray {

    public static void DoubleArray(int[] array) {
        for (int i = 0; i < array.length; i++) {
            array[i] *= 2;
        }

        System.out.println("Array elements after doubling: ");
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] array = {1, 2, 3, 4, 5};
        DoubleArray(array);
    }
}