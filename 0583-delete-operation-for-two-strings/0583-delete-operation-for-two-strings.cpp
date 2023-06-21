class Solution {
    public:
    int lcs(string s1, string s2){
        int m=s1.length();
        int n=s2.length();
        int dp[m+1][n+1];
        
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0||j==0){
                    dp[i][j]=0;
                }
                else if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]); 
                }
            }
        }
        return dp[m][n];
    }
    
    
    
    
    
     int minDistance(string word1, string word2) {
        int a=lcs(word1, word2);
         int m=word1.size();
         int n=word2.size();
         
         int ans=(m-a)+(n-a);
         return ans;
        
    }
};