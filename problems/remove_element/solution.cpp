#include <limits.h>

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        vector<int>::iterator itr;
        int i=0;
        int count=0;
        for(itr=nums.begin(); itr!=nums.end();itr++,i++) {
            if(*itr == val) {
                nums[i] = INT_MAX;
                count++;
            }
        }
        sort(nums.begin(), nums.end());
        return(nums.size()-count);
    }
};