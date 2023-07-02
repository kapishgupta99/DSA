//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int N, int K) 
    { 
        unordered_map<int, int> sumMap;
    int maxLen = 0;
    int currSum = 0;

    for (int i = 0; i < N; i++) {
        currSum += arr[i];

        if (currSum == K) {
            maxLen = i + 1;
        }

        if (sumMap.find(currSum - K) != sumMap.end()) {
            maxLen = max(maxLen, i - sumMap[currSum - K]);
        }

        if (sumMap.find(currSum) == sumMap.end()) {
            sumMap[currSum] = i;
        }
    }

    return maxLen;
}

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends