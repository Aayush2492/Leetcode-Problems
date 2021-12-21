#include <map>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
//         map<int, int> m;
//         for(int i=0;i<nums.size();i++) {
            
//             auto itr = m.find(nums[i]);
            
//             if(itr != m.end()) {
//                 return true;
                
//             }
//             m.insert({nums[i], i});
//         }
//         return false;
    
    return( nums.size() > unordered_set<int>(nums.begin(), nums.end()).size());
    }
};