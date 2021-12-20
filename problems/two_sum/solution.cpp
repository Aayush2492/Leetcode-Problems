#include <map>
#include <iterator>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, int> m;
        std::vector<int> op;
        for(int i=0; i<nums.size(); i++) {
            m.insert(std::pair<int, int>(nums[i], i));
            
            auto itr = m.find(target - nums[i]);
            if(itr != m.end()) {
                if(itr->second != i) {
                    
                    op.push_back((i<itr->second)? i: itr->second);
                    op.push_back(std::max(i, itr->second));
                    break;
                }
            }
            
        }
        return op;
    }
};