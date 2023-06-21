class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int rightSum=0;
       int leftSum=0;
        for(int i=1;i<nums.size();++i){
             rightSum+=nums[i];
        }
        for(int i=0;i<nums.size();++i){
            if(rightSum==leftSum){
                return i;
            }
            leftSum += nums[i];
            if (i + 1 < nums.size()) {
                rightSum -= nums[i+1];}
        }
        return -1;
    }
};