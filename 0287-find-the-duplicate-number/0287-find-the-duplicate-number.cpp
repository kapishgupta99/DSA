class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int ans=0;
        vector<int>arr(nums.size(),0);
        
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
            
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]>1){
                ans = i;
            }
        }
        return ans;
    }
};