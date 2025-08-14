#include <iostream>
#include <vector>
using namespace std;

int singleElementSortedArr(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
    {
        return nums[0];
    }

    int st = 0, end = n - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        // handling edge-cases
        if (mid == 0 && nums[mid] != nums[mid + 1])
        {
            return nums[mid];
        }
        if (mid == n - 1 && nums[mid] != nums[mid - 1])
        {
            return nums[mid];
        }

        if (nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1])
        {
            return nums[mid]; // single element
        }

        if (mid % 2 == 0) // even search space
        {
            if (nums[mid] == nums[mid - 1]) // left-search
            {
                end = mid - 1;
            }
            else // right-search
            {
                st = mid + 1;
            }
        }

        else // odd search space
        {
            if (nums[mid] == nums[mid - 1]) // right-search
            {
                st = mid + 1;
            }
            else // left-search
            {
                end = mid - 1;
            }
        }
    }

    return -1; // will never hit
}

int main()
{
    vector<int> nums = {2, 2, 3, 4, 4, 5, 5, 7, 7};

    cout << "SINGLE ELEMENT IN THE ARRAY IS : " << singleElementSortedArr(nums) << endl;
    return 0;
}