class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        
       int count=0;
         int n = items.size();
      

        int ruleK;
        if(ruleKey == "type"){
            ruleK = 0;
        } else if (ruleKey == "color"){
            ruleK = 1;
        } else {
            ruleK = 2;
        }

        for(int i = 0; i < n; i++){
            if(items[i][ruleK] == ruleValue){
                count++;
            }
        }
        return count;
    }
};