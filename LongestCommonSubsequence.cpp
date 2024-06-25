#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (text1[i - 1] == text2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        return dp[m][n];
    }
};

int main() {
    Solution solution;
    
    string text1 = "abcde";
    string text2 = "ace";
    cout << "Length of LCS for 'abcde' and 'ace': " << solution.longestCommonSubsequence(text1, text2) << endl;

    text1 = "abc";
    text2 = "abc";
    cout << "Length of LCS for 'abc' and 'abc': " << solution.longestCommonSubsequence(text1, text2) << endl;

    text1 = "abc";
    text2 = "def";
    cout << "Length of LCS for 'abc' and 'def': " << solution.longestCommonSubsequence(text1, text2) << endl;

    return 0;
}
