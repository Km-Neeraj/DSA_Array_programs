import java.util.*;

class Solution {
    public int secondHighest(String s) {
        TreeSet<Integer> set = new TreeSet<>();
        for (char c : s.toCharArray()) {
            if (Character.isDigit(c)) {
                set.add(c - '0');
            }
        }
        if (set.size() < 2) return -1;
        set.pollLast(); // remove largest
        return set.last(); // return second largest
    }
}

public class SecondLargestDigitString {
    public static void main(String[] args) {
        String s = "dfa12321afd";
        Solution ob = new Solution();
        int s1 = ob.secondHighest(s);
        System.out.println("Second Highest = " + s1);
    }
}
