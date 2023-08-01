class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
         int n=arr.size();
        int left=0;
        int right =n-1;
        if(n<3){
            return false;
        }
    while(left<right){
        int mid=left+(right-left)/2;
        if(arr[mid]<arr[mid+1]){
            left=mid+1;
        }
        else{
            right = mid;            
        }
    }
    if(left==0 || left==n-1){
        return false;
    }
        for (int i = 0; i < left; ++i) {
        if (arr[i] >= arr[i + 1]) {
            return false;
        }
    }

    for (int i = left; i < n - 1; ++i) {
        if (arr[i] <= arr[i + 1]) {
            return false;
        }
    }

    return true;
}
     
        
    
};