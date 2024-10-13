import java.util.ArrayList;

public class RemoveEvenNumbers {
    public static ArrayList<Integer> RemoveEvenNumbers(ArrayList<Integer> v) {
        v.removeIf(val -> val % 2 == 0);
        return v;
    }

    public static void main(String[] args) {
        ArrayList<Integer> v = new ArrayList<>();
        for (int i = 1; i <= 10; i++) {
            v.add(i);
        }

        v = RemoveEvenNumbers(v);
        for (int val : v) {
            System.out.print(val + " ");
        }
        System.out.println();
    }
}