class Solution {
public:
    bool isPowerOfThree(int n) {
        long long x = 0;
        for (int i = 0; i <= 30; i++){
            x = pow(3,i) ;
            if (x == n)
        return true;
        }
        return false;
        
    }
};