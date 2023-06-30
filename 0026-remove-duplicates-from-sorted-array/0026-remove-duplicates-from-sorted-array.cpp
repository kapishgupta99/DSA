class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      set<int> uniqueSet;
    for (int num : nums) {
        uniqueSet.insert(num);
    }
       nums.assign(uniqueSet.begin(), uniqueSet.end());
        return uniqueSet.size();
        
    
}
};