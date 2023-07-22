class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        stack<int> st;
        int n = nums.size();
        ans.resize(n, -1); 

        for (int i = 0; i < 2 * n - 1; i++) { 
            while (!st.empty() && nums[st.top()] < nums[i % n]) {
                ans[st.top()] = nums[i % n];
                st.pop();
            }
            st.push(i % n);
        }

        return ans;
    }
};
