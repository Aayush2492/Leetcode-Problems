class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int insert=0;
        
        for(auto num:nums) {
            if(num != 0) {
                nums[insert++] = num;
            }
        }
        
        for(int i=insert; i<nums.size();i++) {
            nums[i] =0;
        }
    }
};