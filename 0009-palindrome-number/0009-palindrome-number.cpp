class Solution {
public:
    bool isPalindrome(long long x) {
        
        if (x<0){
            return 0;
        }
        
        int number=x;
        long long reverse=0;
        
        while(number>0){
            reverse=reverse*10 + number % 10;
            number /=10;
        }
        
        return x==reverse;
        
        
    
    }
};