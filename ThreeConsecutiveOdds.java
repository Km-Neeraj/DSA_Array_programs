
import java.util.*;

class Solution {
    public boolean threeConsecutiveOdds(int[] arr) {
        boolean flag = false;
        int count = 0;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] % 2 != 0) {   // odd
                flag = true;
                count++;
            } else {
                flag = false;
                count = 0;           // reset if even
            }

            if (count == 3 && flag == true) {
                return true;
            }
        }
        return false;
    }
}

public class ThreeConsecutiveOdds {
    public static void main(String[] args) {
        Solution sol = new Solution();

        int[] arr1 = {1, 2, 1, 1};
        System.out.println(sol.threeConsecutiveOdds(arr1));  // false

        int[] arr2 = {2, 3, 5, 7, 8};
        System.out.println(sol.threeConsecutiveOdds(arr2));  // true

        int[] arr3 = {1, 3, 5};
        System.out.println(sol.threeConsecutiveOdds(arr3));  // true

        int[] arr4 = {2, 6, 4, 1};
        System.out.println(sol.threeConsecutiveOdds(arr4));  // false
    }
}



