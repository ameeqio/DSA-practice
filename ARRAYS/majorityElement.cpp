#include <iostream>
#include <vector>
using namespace std;

int majElement(vector <int> &nums)
{
    int freq = 0, majEl = -1;

    for (int val : nums)
    {
        if (freq == 0)
        {
            majEl = val;
            freq = 1;
        }
        else if (val == majEl) 
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }

    return majEl;
}

int main()
{
    vector <int> nums = {10,20,10,10,40,10};
    //majority element always exists in the array
    cout << "THE MAJORITY ELEMENT IS : " << majElement(nums) << endl;
    return 0;
}