#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSumOpt(vector<int> nums, int targetSum)
{
    int i = 0, j = nums.size() - 1;
    int pairSum;

    vector<int> id;

    while (i < j)
    {
        pairSum = nums[i] + nums[j];

        if (pairSum > targetSum)
        {
            j--;
        }
        else if (pairSum < targetSum)
        {
            i++;
        }
        else
        {
            id.push_back(i);
            id.push_back(j);
            return id;
        }
    }

    return id;
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};   // sorted array
    int targetSum = 26;

    vector<int> index = pairSumOpt(nums, targetSum);

    cout << "THE INDEX OF THE PAIR IS : " << index.front() << " , " << index.back() << endl;

    return 0;
}
