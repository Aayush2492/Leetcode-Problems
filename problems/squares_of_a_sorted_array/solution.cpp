class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> op;

        int first_non_neg = nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= 0)
            {
                first_non_neg = i;
                break;
            }
        }

        int first = first_non_neg;
        int last = first_non_neg - 1;
        last = (last == -1) ? nums.size() + 1 : last;
        int og_size = nums.size();
        nums.push_back(INT_MAX);
        nums.push_back(INT_MAX);

        while (last != og_size + 1 || first != og_size)
        {
            if (abs(nums[first]) > abs(nums[last]))
            {
                op.push_back(nums[last] * nums[last]);
                last--;
                last = (last == -1) ? og_size + 1 : last;
            }
            else
            {
                op.push_back(nums[first] * nums[first]);
                first++;
            }
        }
        return op;
    }
};