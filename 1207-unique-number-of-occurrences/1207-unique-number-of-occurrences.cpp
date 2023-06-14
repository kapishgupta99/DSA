class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
     if(arr.size() == 2){
            if(arr[0] == arr[1]) return true;
            else return false;
        }
        sort(arr.begin(), arr.end()); 
        int count=1 ;
        vector<int> arr2;
        for (int i = 0; i < arr.size() -1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                count++;
            }
            else
            {
                arr2.push_back(count);
                count = 1;
            }
        }
        sort(arr2.begin(), arr2.end()); 
        for (int i = 1; i < arr2.size(); i++)
        {
            if (arr2[i] == arr2[i - 1])
            {
                return false;
            }
        }
        return true;    
            
           
        
        
    }
};