class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        unordered_map<int,int>m;
        for(int num:nums){
            m[num]++;
            
            if(m[num]>n/2){
                return num;
            }
        }
        return -1;
        
        
    }
};