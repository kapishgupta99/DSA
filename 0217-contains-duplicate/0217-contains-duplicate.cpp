class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
       std::unordered_set<int> numSet;

    for (int num : nums) {
        if (numSet.count(num) > 0) {
            return true;  // Duplicate found
        }
        numSet.insert(num);
    }

    return false;  // No duplicates found
}
        
    
};