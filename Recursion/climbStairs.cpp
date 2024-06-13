#include <iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        return climbStairs(n - 1) + climbStairs(n - 2);
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter the number of steps: ";
    cin >> n;
    cout << "Number of ways to climb " << n << " steps: " << sol.climbStairs(n) << endl;
    return 0;
}
