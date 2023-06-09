class Solution {
public:
    char findTheDifference(string s, string t) {
        
        unordered_map<char,int>charcount;
        
   
        
        for(int i:s){
            charcount[i]++;
        }
    
        for(int i:t){
            
            if(--charcount[i]<0){
                return i;
            }
        }
          
        return 0;
        
    }
};