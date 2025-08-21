import java.util.*;

class Solution {
    // Function to remove duplicates from the given array using TreeSet
    ArrayList<Integer> removeDuplicates(int[] arr) {
        TreeSet<Integer> ob = new TreeSet<>();
        for (int c : arr) {
            ob.add(c); // TreeSet automatically removes duplicates and sorts elements
        }
        return new ArrayList<>(ob); // convert TreeSet to ArrayList
    }

    // Function to print ArrayList
    void printList(ArrayList<Integer> list) {
        for (int num : list) {
            System.out.print(num + " ");
        }
        System.out.println();
    }
}

public class RemoveDuplicateSorted {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter the number of elements:");
        int n = sc.nextInt();
        
        int[] arr = new int[n];
        System.out.println("Enter array elements:");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        
        Solution ob = new Solution();
        
        System.out.println("Array Elements Before removing duplicates:");
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
        
        ArrayList<Integer> res = ob.removeDuplicates(arr);
        
        System.out.println("Array After Removing Duplicates:");
        ob.printList(res);
        
        sc.close();
    }
}
