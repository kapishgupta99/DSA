class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>pairSet;
        int goodpair=0;
        
        for(int num:nums) {
            pairSet[num]++;
        }
        for (auto num : pairSet) {
        int count = num.second;
        goodpair += (count * (count - 1)) / 2;
        
    }
        return goodpair;
    }
};