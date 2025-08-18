#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int k, int mid)
{
    int students = 1, currPages = 0;

    for (int val : arr)
    { 
        if (val > mid)  // greater value than max pages alloted to a student(mid)
        {
            return false;
        }
        if (currPages + val <= mid)
        {
            currPages += val;
        }
        else
        {
            students++;
            currPages = val;
        }
    }

    return (students <= k);
}

int bookAllocation(vector<int> &pages, int k)
{
    if (k > pages.size())
    {
        return -1;
    }
    int totalPages = 0;
    for (int val : pages)
    {
        totalPages += val;
    }

    int ans = -1;

    int low = 0, high = totalPages;

    while (low <= high)
    {
        int mid = low + (high - low) / 2; // mid is the max no. of pages that can be allocated to a student

        if (isValid(pages, k, mid)) // try to find more lesser value
        {
            ans = mid;
            high = mid - 1;
        }
        else // increase the no. of pages per student
        {
            low = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> pages = {12, 34, 67, 90};
    int k = 2; // no. of students

    cout << "THE MIN. OF MAX. NO. OF PAGES ALLOTED TO A STUDENT IS : " << bookAllocation(pages, k) << "\n";
    return 0;
}