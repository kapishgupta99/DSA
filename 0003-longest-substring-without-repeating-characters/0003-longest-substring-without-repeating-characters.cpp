class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_set<char>mp;
        int left=0;
        int ans=0;
       for(int right=0;right<n;right++){
            while(mp.count(s[right])){
                mp.erase(s[left]);
                left++;
            }
           mp.insert(s[right]);
           ans=max(ans,right-left+1);
        }   
        return ans;
    }
};