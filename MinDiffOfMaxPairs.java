import java.util.Arrays;

public class MinDiffOfMaxPairs {
    
    public int minimizeMax(int[] nums, int p) {
        Arrays.sort(nums);
        int n = nums.length;

        int left = 0, right = nums[n - 1] - nums[0];
        int ans = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (canFormPairs(nums, p, mid)) {
                ans = mid;
                right = mid - 1; 
            } else {
                left = mid + 1;  
            }
        }

        return ans;
    }

    private boolean canFormPairs(int[] nums, int p, int maxDiff) {
        int count = 0;
        for (int i = 1; i < nums.length && count < p; i++) {
            if (nums[i] - nums[i - 1] <= maxDiff) {
                count++;
                i++; 
            }
        }
        return count >= p;
    }

    // Main function for testing
    public static void main(String[] args) {
        MinDiffOfMaxPairs solver = new MinDiffOfMaxPairs();

        int[] nums1 = {10, 1, 2, 7, 1, 3};
        int p1 = 2;
        System.out.println(solver.minimizeMax(nums1, p1)); // Output: 1

        int[] nums2 = {4, 2, 1, 2};
        int p2 = 1;
        System.out.println(solver.minimizeMax(nums2, p2)); // Output: 0
    }
}
