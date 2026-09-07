class Solution {
public:
    int subtractProductAndSum(int n) {
        int a = 1;
        int b = 0;
        while (n!=0){
            int c;
            c = n%10;
            a = a*c;
            b = b+c;
            n = n/10;
        }
        int k = a - b;
        return k;
    }
};