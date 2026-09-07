class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }
        long long a=0;
        int c = x;
        for (int i=0; x!=0 ; i++){
            int b = x%10;
            a = a*10 + b;
            x = x/10;
        }
        if (a==c){
            return true;
        }
        else{
            return false;
        }
        
    }
};