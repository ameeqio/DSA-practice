#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int profit = -1, max_profit = 0;

    // buying stock on day 1
    int stock_buy = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] > stock_buy)
        {
            profit = prices[i] - stock_buy;
            max_profit = max(profit, max_profit);
        }
        else
        {
            stock_buy = prices[i];
        }
    }

    return max_profit;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    // buy stock on one day and sell it in the future days to maximize the profit
    cout << "THE MAXIMUM PROFIT ACHIEVED DURING THE TRANSACTION IS : " << maxProfit(prices) << endl;
    return 0;
}