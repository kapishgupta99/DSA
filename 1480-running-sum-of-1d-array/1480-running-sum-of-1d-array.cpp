class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>runsum(nums.size());
       runsum[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            
            runsum[i]= runsum[i-1]+nums[i];
        }
        return runsum;
    }
};