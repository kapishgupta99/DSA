class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int leftsum=0;
        int rightsum=0;
        int totalsum=0;
        
       for(int num:nums){
           totalsum+=num;
       }
       if(leftsum==totalsum-nums[0]){
           return 0;
       }
        for (int i = 1; i < n; i++) {
        leftsum += nums[i - 1];
        rightsum = totalsum - leftsum - nums[i];
        if (leftsum == rightsum) {
            return i;
        }
    }
       
        return -1;
    }
};