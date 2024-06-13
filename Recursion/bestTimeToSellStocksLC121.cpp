#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    void maxProfitFinder(vector<int>& prices, int i, int &minPrice, int &maxProfit) {
        // Base case: If we have checked all prices, return
        if (i == prices.size())
            return;

        // Solution for 1 case: Update minPrice if current price is lower
        if (prices[i] < minPrice)
            minPrice = prices[i];

        // Calculate today's profit
        int todaysProfit = prices[i] - minPrice;

        // Update maxProfit if today's profit is greater
        if (todaysProfit > maxProfit)
            maxProfit = todaysProfit;

        // Recursive call for the next day
        maxProfitFinder(prices, i + 1, minPrice, maxProfit);
    }

    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX; // Initialize minPrice to maximum possible integer value
        int maxProfit = INT_MIN; // Initialize maxProfit to minimum possible integer value
        maxProfitFinder(prices, 0, minPrice, maxProfit); // Start recursion from day 0
        return maxProfit; // Return the maximum profit found
    }
};

int main() {
    Solution sol;
    vector<int> prices = {7, 1, 5, 3, 6, 4}; // Example input
    cout << "Maximum profit: " << sol.maxProfit(prices) << endl;
    return 0;
}
