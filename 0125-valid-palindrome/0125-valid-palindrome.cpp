class Solution {
public:
    bool isPalindrome(string s) {
        int l=0,h=s.size()-1;
        for (char& c : s) {
    c = std::tolower(static_cast<unsigned char>(c));
}
        while(l<=h){
            if(!isalnum(s[l]))
            l++;
            else if(!isalnum(s[h]))
            h--;
            else if((s[l])!=(s[h]))
            return 0;
            else{
                l++; h--;
            }
            
        }
        return 1;
        
        
    }
};
