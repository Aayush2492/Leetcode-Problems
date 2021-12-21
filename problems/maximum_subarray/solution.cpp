class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        unsigned left_index = 0, right_index = 0, temp_left_index = 0;
        long long int max_sum = INT_MIN, current_sum = 0;

        for (unsigned i = 0; i <= nums.size() - 1; i++)
        {
            current_sum += nums[i];
            if (current_sum > max_sum)
            {
                max_sum = current_sum;
                right_index = i;
                left_index = temp_left_index;
            }

            if (current_sum < 0)
            {
                current_sum = 0;
                temp_left_index = i + 1;
            }
        }
        return max_sum;
    }
};