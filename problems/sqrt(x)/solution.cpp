class Solution {
public:
    int mySqrt(int x) {
        
        if(x==0) {
           return x; 
        }
        long long int back=x;
        for(long long int i=1;i<=x;i++) {
            if(i*i == back) {
                return i;
            }
            if(i*i > back) {
                return i-1;
            }
        }
        return 0;
    }
};