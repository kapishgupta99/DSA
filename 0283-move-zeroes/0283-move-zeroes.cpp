class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int start=0;
        int mid=0;
        int end=n-1;
        while(mid<=end){
            if(nums[mid]!=0){
                swap(nums[start],nums[mid]);                  
                    start++;
            }
            mid++;
        }
    }
        
    
};