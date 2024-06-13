            //ye que TLE marega iska optimised solution DP se krenge baad me
            //abhi recursion se kra h
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int solve(vector<int>& nums, int size, int index) {
        // Base case
        if (index >= size) {
            return 0;
        }

        // Chori karlo -> ith index pr
        int option1 = nums[index] + solve(nums, size, index + 2);

        // Chori mat kro -> ith index pr 
        int option2 = solve(nums, size, index + 1);
        
        int finalAns = max(option1, option2);
        return finalAns;
    }

    int rob(vector<int>& nums) {
        int size = nums.size();
        int index = 0;
        int ans = solve(nums, size, index);
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 1}; // Example input
    cout << "Maximum amount that can be robbed: " << sol.rob(nums) << endl;
    return 0;
}
