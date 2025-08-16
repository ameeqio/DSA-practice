#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxRowSum(vector<vector<int>> &matr)
{
    int max_rowSum = INT_MIN;
    for (int i = 0; i < matr.size(); i++)
    {
        int curr_rowSum = 0;
        for (int j = 0; j < matr[i].size(); j++)
        {
            curr_rowSum += matr[i][j];
        }

        max_rowSum = max(curr_rowSum, max_rowSum);
    }

    return max_rowSum;
}

int maxColSum(vector<vector<int>> &matr)
{
    int max_colSum = INT_MIN;
    for (int j = 0; j < matr[0].size(); j++)
    {
        int curr_colSum = 0;
        for (int i = 0; i < matr.size(); i++)
        {
            curr_colSum += matr[i][j];
        }

        max_colSum = max(curr_colSum, max_colSum);
    }

    return max_colSum;
}

int main()
{
    vector<vector<int>> matr = {{4, 6, -2}, {5, 9, 0}, {8, 7, -10}};

    cout << "MAXIMUM ROW SUM IS : " << maxRowSum(matr) << endl;
    cout << "MAXIMUM COLUMN SUM IS : " << maxColSum(matr) << endl;
    return 0;
}