#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<pair<int, int>> arr;
        for (int i = 0; i < nums.size(); i++)
        {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end());

        int lo = 0, hi = arr.size() - 1;
        while (lo < hi)
        {
            int sum = arr[lo].first + arr[hi].first;
            if (sum == target)
            {
                return {arr[lo].second, arr[hi].second};
            }
            else if (sum < target)
            {
                lo++;
            }
            else
            {
                hi--;
            }
        }

        return {};
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = sol.twoSum(nums, target);

    if (!result.empty())
    {
        cout << "Indices:" << result[0] << ", " << result[1] << endl;
    }
    else
    {
        cout << "No solution found" << endl;
    }

    return 0;
}
