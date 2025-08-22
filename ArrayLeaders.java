
import java.util.*;

class Solution {
    static List<Integer> leaders(int arr[]) {
        int n = arr.length;
        
        LinkedList<Integer> list = new LinkedList<>();
        
        int max = arr[n - 1];
        list.addFirst(max);
        
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= max) {
                max = arr[i];
                list.addFirst(max); // efficient in LinkedList
            }
        }
        
        return list;
    }
}

public class ArrayLeaders{
    public static void main(String[] args) {
        int[] arr = {16, 17, 4, 3, 5, 2};
        List<Integer> leaders = Solution.leaders(arr);
        
        System.out.println("Leaders in the array: " + leaders);
    }
}



