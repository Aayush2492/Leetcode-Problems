// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int low=1, high=n;
        while(low<=high) {
            int mid = (low+high)/2;
            
            if(low == high) {
                return low;
            }
            
            if(!isBadVersion(mid)) {
                low = mid+1;
            }
            else {
                high = mid;
            }
        }
        return -1;
    }
};