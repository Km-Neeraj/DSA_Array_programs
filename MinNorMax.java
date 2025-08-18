
import java.util.*;

class Solution {
    public int findNonMinOrMax(int[] nums) {
        TreeSet<Integer> set = new TreeSet<>();
        for (int n : nums) {
            set.add(n);
        }
        if (set.size() <= 2) return -1;

        
        Integer[] arr = set.toArray(new Integer[0]);

        
        return arr[1];  
    }
}

public class MinNorMax {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter size of array: ");
        int n = sc.nextInt();
        int[] nums = new int[n];
        
        System.out.println("Enter array elements: ");
        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }

        Solution sol = new Solution();
        int ans = sol.findNonMinOrMax(nums);

        System.out.println("Output: " + ans);
    }
}



