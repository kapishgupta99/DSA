class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<bool>result(candies.size());
                           
        int maxElement=*max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=maxElement){
                result[i]= true;
            }    
        }
        return result;
    }       
};