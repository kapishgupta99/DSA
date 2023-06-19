class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int highestAltitude=0;
        int currentAltitude=0;
        
        for(int i:gain){
            currentAltitude+=i;
            
            if(currentAltitude>highestAltitude){
                highestAltitude=currentAltitude;
            }
            
        }
        return highestAltitude;
    }
};