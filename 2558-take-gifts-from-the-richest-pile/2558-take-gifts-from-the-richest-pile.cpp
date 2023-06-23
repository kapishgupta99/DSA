class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n=gifts.size()-1;
        long long ans=0;
        
        while(k>0){
            sort(gifts.begin(),gifts.end());
            gifts[n]=sqrt(gifts[n]);
            k--;
        }
        for(int i=0;i<=n;i++)
        {
            ans+=gifts[i];
        }
        return ans;
         }
};