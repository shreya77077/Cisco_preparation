#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
        int n = s.size();
        vector<bool> dp(n + 1, false);
        dp[0] = true;

        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (dp[j] && wordSet.count(s.substr(j, i - j))) {
                    dp[i] = true;
                    break;
                }
            }
        }

        return dp[n];
    }
};

int main() {
    Solution solution;

    string s1 = "leetcode";
    vector<string> wordDict1 = {"leet", "code"};
    cout << "Output for 'leetcode': " << solution.wordBreak(s1, wordDict1) << endl;

    string s2 = "applepenapple";
    vector<string> wordDict2 = {"apple", "pen"};
    cout << "Output for 'applepenapple': " << solution.wordBreak(s2, wordDict2) << endl;

    string s3 = "catsandog";
    vector<string> wordDict3 = {"cats", "dog", "sand", "and", "cat"};
    cout << "Output for 'catsandog': " << solution.wordBreak(s3, wordDict3) << endl;

    return 0;
}
