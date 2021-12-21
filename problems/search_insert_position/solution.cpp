class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {

        long long int low = 0;
        long long int high = nums.size() - 1;
        int mid;
        while (low <= high)
        {
            mid = ((low + high) / 2);

            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << "Mid :" << mid << endl;
        if (nums[mid] > target)
        {
            return mid;
        }
        else
        {
            return mid + 1;
        }
        // return low;
    }
};