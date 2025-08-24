




import java.util.Arrays;

class MinDiffOfMax {
    public int getMinDiff(int[] arr, int k) {
        int n = arr.length;
        Arrays.sort(arr);

        // Initial difference (without any modification)
        int res = arr[n - 1] - arr[0];

        // Traverse and try partitioning
        for (int i = 1; i < n; i++) {
            if (arr[i] - k < 0) continue;  // height cannot be negative

            int min = Math.min(arr[0] + k, arr[i] - k);
            int max = Math.max(arr[i - 1] + k, arr[n - 1] - k);

            res = Math.min(res, max - min);
        }
        return res;
    }

    // Driver code
    public static void main(String[] args) {
        MinDiffOfMax sol = new MinDiffOfMax();

        int[] arr1 = {12, 6, 4, 15, 17, 10};
        int k1 = 6;
        System.out.println(sol.getMinDiff(arr1, k1));  // Expected output: 8

         
    }
}









