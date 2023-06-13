class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> sortedNums = nums;
    sort(sortedNums.begin(), sortedNums.end());
    
    unordered_map<int, int> countMap;
    int n = nums.size();
    
    for (int i=0;i<n;i++) {
        if (countMap.find(sortedNums[i]) == countMap.end()) {
            countMap[sortedNums[i]] = i;
        }
    }
    
    vector<int> result(n);
    
    for (int i = 0; i < n; i++) {
        result[i] = countMap[nums[i]];
    }
    
    return result;
        
    }
};