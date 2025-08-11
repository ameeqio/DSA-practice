#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int maxSubArrSum(vector<int> &nums)
{
    int currSum = 0, maxSum = INT_MIN;

    for (int val : nums)
    {
        currSum += val;
        maxSum = max(currSum, maxSum);

        if (currSum < 0)
        {
            currSum = 0;
        }
    }

    return maxSum;
}

int main()
{
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    cout << "THE MAXIMUM SUBARRAY SUM IS : " << maxSubArrSum(nums) << endl;
    return 0;
}