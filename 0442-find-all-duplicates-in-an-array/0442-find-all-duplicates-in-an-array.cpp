class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        unordered_set<int>m;
        for(int num:nums){
            if(m.count(num)>0){ result.push_back(num); }
            else{ m.insert(num); }  
        } 
        return result;
    }
    
};