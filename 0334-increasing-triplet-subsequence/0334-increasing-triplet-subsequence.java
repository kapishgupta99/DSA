public class Solution {
    public boolean increasingTriplet(int[] nums) {
        int c1 = Integer.MAX_VALUE, c2 = Integer.MAX_VALUE;
        for (int i : nums) 
            if (i <= c1)
                c1 = i;
            else if (i <= c2)
                c2 = i;
            else
                return true;
        return false;
    }
};