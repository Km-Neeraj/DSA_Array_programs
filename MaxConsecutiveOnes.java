

class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int count = 0;
        int max = 0;

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == 1) {
                count++; 
            } else {
                max = Math.max(max, count); 
                count = 0; 
            }
        }

        return Math.max(max, count); 
    }
}

public class MaxConsecutiveOnes {
    public static void main(String[] args) {
        Solution sol = new Solution();
        
        
        int[] nums = {1, 1, 0, 1, 1, 1,1,1};
        
        int result = sol.findMaxConsecutiveOnes(nums);
        System.out.println("Maximum consecutive ones: " + result);
    }
}
