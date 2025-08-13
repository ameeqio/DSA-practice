#include <iostream>
#include <vector>
using namespace std;

int peakIndexMountainArray(vector<int> &arr)
{
    // starting and ending values can't be peak
    int st = 1, end = arr.size() - 2;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        // arr[mid] is peak
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            return mid;
        }
        else if (arr[mid] > arr[mid - 1]) // mid is at increasing side --> right search
        {
            st = mid + 1;
        }
        else // mid is at decreasing side --> left search
        {
            end = mid - 1;
        }
    }

    return -1; // will never hit
}

int main()
{
    vector<int> arr = {0, 2, 7, 8, 9, 4, 3, 1};
    // arr is a mountain array
    cout << "THE PEAK INDEX IS : " << peakIndexMountainArray(arr) << endl;

    return 0;
}