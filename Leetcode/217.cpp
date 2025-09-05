// Contains Duplicate

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution solution;

    // contains duplicates
    vector<int> nums1 = {1, 2, 3, 1};
    cout << "[1,2,3,1] - " << (solution.containsDuplicate(nums1) ? "True" : "False") << endl;

    // no duplicates
    vector<int> nums2 = {1, 2, 3, 4};
    cout << "[1,2,3,4] - " << (solution.containsDuplicate(nums2) ? "True" : "False") << endl;

    // mmmultiple duplicates
    vector<int> nums3 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    cout << "[1,1,1,3,3,4,3,2,4,2] - " << (solution.containsDuplicate(nums3) ? "True" : "False") << endl;

    return 0;
}