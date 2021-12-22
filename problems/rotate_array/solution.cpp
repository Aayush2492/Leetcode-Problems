class Solution
{
public:
    int modulo(int i, int n)
    {
        return (i % n + n) % n;
    }

    void rotate(vector<int> &arr, int k)
    {
        vector<int> op(arr);

        for (int i = 0; i < arr.size(); i++)
        {
            arr[i] = op[modulo(i - k, arr.size())];
        }
    }
};