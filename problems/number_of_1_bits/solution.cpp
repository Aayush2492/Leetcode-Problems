class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        for(int i=1;i<=32;i++) {
            if(n&1 == 1) count++;
            n>>=1;
        }
        return count;
    }
};