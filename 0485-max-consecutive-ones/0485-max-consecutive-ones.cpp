class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                ans++;
                maxi=max(maxi,ans);
            }
            else{
                ans=0;
            }
        }
        return maxi;
       
    }
};