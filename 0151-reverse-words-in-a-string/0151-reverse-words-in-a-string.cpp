class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        stringstream ss(s);
        string temp;
        while(ss>>temp){
            words.push_back(temp);
        }
        string ans;
        for(int i=words.size()-1;i>=0;--i){
            if(!ans.empty()){
                ans+=" ";
            }
            ans+=words[i];
        }
        return ans;
    }
};