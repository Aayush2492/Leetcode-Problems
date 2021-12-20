class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        
        long long int back = x;
        long long int rev=0;
        
        while(x>0) {
            int r = x%10;
            rev = 10*rev + r;
            x = x/10;
        }
        
        if(rev == back) {
            return true;
        }
        else {
            return false;
        }
    }
};