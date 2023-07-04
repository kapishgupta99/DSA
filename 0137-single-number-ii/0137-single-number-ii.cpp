class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int,int>storage;
        for(auto i:nums){
            storage[i]++;
            
        }
        for(auto i:storage){
            if(i.second==1){
                return i.first;
            }
        }
        return -1;
    }
};