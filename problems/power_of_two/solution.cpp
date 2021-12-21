#include <cmath>

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        double d = (double)(n);
        
        if(d == 1) {
            return true;
        }
        
        if(d<=0) {
            return false;
        }
        
        while(d>1) {
            d = d/2;
            double frac = d - floor(d);
            if(frac != 0) {
                return false;
            }
        }
        return true;
    }
};