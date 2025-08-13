#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &nums, int target)
{
    int st = 0, end = nums.size() - 1;
    int mid;

    while (st <= end)
    {
        mid = st + (end - st) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target) // left search
        {
            end = mid - 1;
        }
        else // right search
        {
            st = mid + 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> nums = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int target = 23;

    int result = binarySearch(nums, target);

    if (result == -1)
    {
        cout << "ELEMENT IS NOT PRESENT IN THE GIVEN ARRAY" << endl;
    }
    else
    {
        cout << "ELEMENT IS PRESENT IN THE GIVEN ARRAY AT INDEX : " << result << endl;
    }
    return 0;
}
