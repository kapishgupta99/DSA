class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int, int> countMap;
    unordered_set<int> occurrenceSet;

    // Count the occurrences of each number
    for (int num : arr) {
        countMap[num]++;
    }

    // Check if the occurrences are unique
    for (auto it : countMap) {
        int occurrence = it.second;
        if (occurrenceSet.find(occurrence) != occurrenceSet.end()) {
            return false; // Duplicate occurrence found
        }
        occurrenceSet.insert(occurrence);
    }

    return true;
       
            
            
           
        
        
    }
};