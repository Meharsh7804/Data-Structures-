// Print Intersection of 2 arrays
public class IntersectionOfArrays {
    public static void IntersectionOfArrays(int[] array1, int size1, int[] array2, int size2) {
        System.out.println("Intersection of 2 arrays: ");
        for (int i = 0; i < size1; i++) {
            for (int j = 0; j < size2; j++) {
                if (array1[i] == array2[j]) {
                    System.out.print(array1[i] + " ");
                    break;
                }
            }
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] array1 = {1, 2, 3, 4, 5};
        int[] array2 = {3, 4, 5, 6, 7};
        int size1 = array1.length;
        int size2 = array2.length;
        IntersectionOfArrays(array1, size1, array2, size2);
    }
}