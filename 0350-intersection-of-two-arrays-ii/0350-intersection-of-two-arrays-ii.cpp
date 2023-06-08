class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
       unordered_map<int, int> freqMap;
       vector<int> result;

    // Store the frequency of elements in nums1
    for (int num : nums1) {
        freqMap[num]++;
    }

    // Check the frequency of elements in nums2
    // and add them to the result vector accordingly
    for (int num : nums2) {
        if (freqMap[num] > 0) {
            result.push_back(num);
            freqMap[num]--;
        }
    }

    return result;
    }
};