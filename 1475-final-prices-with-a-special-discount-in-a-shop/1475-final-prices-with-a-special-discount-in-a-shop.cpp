class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        stack<int>st;
        int n=prices.size();
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            while(!st.empty() && prices[i]<=prices[st.top()]){
                ans[st.top()]=prices[st.top()]-prices[i];
                st.pop();
                
            }
            st.push(i);
        }
        while(!st.empty()){
            ans[st.top()]=prices[st.top()];
            st.pop();
        }
        return ans;
    }
};