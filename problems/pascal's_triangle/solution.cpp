
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {

        vector<vector<int>> op(numRows);
        op[0].resize(0+1);
        op[0][0] = 1;
        if (numRows == 1)
            return op;

        for (int i = 1; i <= numRows - 1; i++)
        {
            op[i].resize(i+1);
            op[i][0] = 1;
            op[i][i] = 1;
            for (int j = 1; j <= i/2; j++)
            {
                op[i][j] = op[i - 1][j - 1] + op[i - 1][j];
                op[i][i - j] = op[i][j];
            }
        }

        return op;
    }
};
