class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans1;
        vector<int>ans2;
        set<int>m1(nums1.begin() , nums1.end());
        set<int>m2(nums2.begin(),nums2.end());
      
        for(int num:m1){
          if(m2.find(num)==m2.end()){
              ans1.push_back(num);
          }
        }
        for(int num:m2){
            if(m1.find(num)==m1.end()){
                ans2.push_back(num);
            }
        }
        return {ans1 , ans2};
        
    }
};