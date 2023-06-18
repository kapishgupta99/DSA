class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int count = 0 ;
    int max=0;
    for(int i=0 ; i<sentences.size() ;i++ ){
        for(int j=0;j<sentences[i].size() ;j++){
            char ch = sentences[i][j];
            if(ch==' '){count++;}
        }
     if(count>max){ max =count; 
                   count=0;
    }else count=0;
    }
    return max+1;
    }
};