class Solution {
public:
    int climbStairs(int n) {
        if(n==1 || n==2) {
            return n;
        }
        
        long long int a=1;
        long long int b=2;
        long long int c;
        
        for(int i=3;i<=n;i++ ) {
            c=a+b;
            a=b;
            b=c;
        }
        return c;
        
    }
};