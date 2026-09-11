class Solution {
public:
    bool isPowerOfFour(int n) {
long long x = 0;
        for (int i = 0; i <= 30; i++){
            x = pow(4,i);
            if (x == n)
            return true;
        }
        return false;
    }
};