class Solution {
public:
    int s=0 , ans=-1;
    int firstOcc(vector<int>&nums,int target){
        int e=nums.size() -1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                ans=mid;
            e=mid-1;}
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            
        }
        return ans;
    }
    
    int LastOcc(vector<int>&nums,int target){
        int e=nums.size() -1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                ans=mid;
            s=mid+1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            
        }
        return ans;
    }
    
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
      vector<int> v(2);
        v[0] = firstOcc(nums, target);
        v[1] = LastOcc(nums, target);

        return v;  
    }
};