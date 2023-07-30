class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int n = nums.size();
    int violations=0;

    for (int i = 1; i < n; i++) {
        if (nums[i] <= nums[i - 1]) {
            violations++;
            if (violations>1) {
                return false;
            }

            
            if (i==1 || nums[i] > nums[i - 2]) {
                nums[i - 1] = nums[i];
            } else {
                nums[i] = nums[i - 1];
            }
        }
    }

    return true;
    }
};