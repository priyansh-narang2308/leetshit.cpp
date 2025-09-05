// Buy and sell stocks
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxProfit = 0;
        int minPrice = prices[0];

        for (int &currentPrice : prices)
        {
            maxProfit = max(maxProfit, currentPrice - minPrice);
            minPrice = min(minPrice, currentPrice);
        }

        return maxProfit;
    }
};

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    Solution obj;
    int result = obj.maxProfit(prices);

    cout << "Maximum Profit: " << result << endl;

    return 0;
}
