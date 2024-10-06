// Find Sum & Product off all elements of the array.
public class SumProductOfArray {

    public static int SumOfArray(int[] array) {
        int sum = 0;
        for (int i = 0; i < array.length; i++) {
            sum += array[i];
        }
        return sum;
    }

    public static int ProductOfArray(int[] array) {
        int pdt = 1;
        for (int i = 0; i < array.length; i++) {
            pdt *= array[i];
        }
        return pdt;
    }

    public static void main(String[] args) {
        int[] array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        int sum = SumOfArray(array);
        int product = ProductOfArray(array);

        System.out.println("Sum of all elements of the array: " + sum);
        System.out.println("Product of all elements of the array: " + product);
    }
}