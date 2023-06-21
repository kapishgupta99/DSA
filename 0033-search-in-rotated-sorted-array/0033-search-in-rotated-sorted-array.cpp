class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        if(n == 1 && nums[0] == target) { return 0;  }
        int start=0;
        int end=n-1;
        int mid= start+(end-start)/2;
        
        while(start <= end) {
            if(nums[mid] == target) { return mid; }
            if(nums[mid] >= nums[start]) {
                if(target >= nums[start] && target <= nums[mid]) { end = mid-1; }
                else { start = mid+1; }
            }
            else {
                if(target >= nums[mid] && target <= nums[end]) { start = mid+1; }
                else { end = mid -1; }
            }
            mid = start + (end -start)/2;
        }
        return -1;
    }
};