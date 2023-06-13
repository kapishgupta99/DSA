class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>pairSet;
        int goodpair=0;
        
        for(int num:nums) {
            pairSet[num]++;
        }
        for (auto it : pairSet) {
        int count = it.second;
        goodpair += (count * (count - 1)) / 2;
        
    }
        return goodpair;
    }
};