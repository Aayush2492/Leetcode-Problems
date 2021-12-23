class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
       int start=0, end=nums.size()-1;
        
        while(start<end) {
            if(nums[start] + nums[end] == target) {
                vector<int> op;
                op.push_back(start+1);
                op.push_back(end+1);
                return op;
            }
            else if(nums[start] + nums[end] < target) {
                start++;
            }
            else {
                end--;
            }
        }
        return nums;
    }
};