#include <map>

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        std::map<int, int> m;
        
        for(int i=0;i<nums.size();i++) {
            
            auto itr = m.find(nums[i]);
            if(itr != m.end()) {
                if(abs(i-itr->second) <= k) {
                    return true;
                }
                itr->second = i;
            }
            else {
                m.insert({nums[i], i});
            }
            
        }
        return false;
    }
};