class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
         for (int first = 0; first < nums.size(); first++){
			
            for (int second = first + 1; second < nums.size(); second++){
				
                if (nums[first] + nums[second] == target){
				
                    return {first, second};
                }
            }
        }
		
        return {};
    }
};