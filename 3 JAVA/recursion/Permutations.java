// recursion Question of permutation


import java.util.Arrays;

public class Permutations {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3};
        generatePermutations(arr, 0);
    }

    public static void generatePermutations(int[] arr, int index) {
        if (index == arr.length - 1) {
            // Base case: when we have fixed all elements except the last one
            System.out.println(Arrays.toString(arr));
        } else {
            for (int i = index; i < arr.length; i++) {
                // Swap the current element with the element at the current index
                swap(arr, index, i);
                // Recursively generate permutations for the remaining elements
                generatePermutations(arr, index + 1);
                // Backtrack by swapping the elements back to their original positions
                swap(arr, index, i);
            }
        }
    }

    public static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

