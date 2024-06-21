#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 1) return 1;

        vector<int> dp(n + 1);
        dp[0] = 1; // Base case: 1 way to stay at the ground
        dp[1] = 1; // Base case: 1 way to reach the first step

        for (int i = 2; i <= n; ++i) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
    }
};

int main() {
    Solution solution;
    int n;
    cout << "Enter the number of steps: ";
    cin >> n;
    cout << "Number of distinct ways to reach the top: " << solution.climbStairs(n) << endl;
    return 0;
}
