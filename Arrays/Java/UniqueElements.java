// Print all the unique elements in an array
public class UniqueElements {

    public static void main(String[] args) {
        int[] array = {1, 2, 3, 4, 1, 2, 3, 4, 5};
        int size = array.length;

        System.out.println("Unique elements in the array: ");
        for (int i = 0; i < size; i++) {
            boolean isUnique = true;
            for (int j = 0; j < size; j++) {
                if (i != j && array[i] == array[j]) {
                    isUnique = false;
                    break;
                }
            }
            if (isUnique)
                System.out.print(array[i] + " ");
        }
        System.out.println();
    }
}