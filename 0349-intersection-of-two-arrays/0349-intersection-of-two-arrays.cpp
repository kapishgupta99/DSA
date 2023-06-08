class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      
        unordered_set<int> numset1(nums1.begin(),nums1.end());
        unordered_set<int> numset2(nums2.begin(),nums2.end());
        
        vector<int> result;
        for(int i:numset1){
            if(numset2.count(i)>0){
                result.push_back(i);
            }
        }
        
        return result;
        
        
    }
};