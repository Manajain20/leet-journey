class Solution {
public:
    bool isSameAfterReversals(int num) {
        int a = num;
        int b = 0;
        int c = 0;
        while (a != 0){
            b = ((b*10)+(a%10));
            a = a/10;
        }
        while (b!=0){
            c = ((c*10)+(b%10));
            b = b/10;
        }
        if (num == c){
            return true;
        }
        else {
            return false;
        }
    }
};