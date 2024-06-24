#include <iostream>
#include <vector>
#include <algorithm> // for std::max

using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int n = nums.size();
        vector<int> dp(n, 1); // Initialize the dp array with 1
        
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] > nums[j]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }
        
        // The length of the longest increasing subsequence
        return *max_element(dp.begin(), dp.end());
    }
};

int main() {
    Solution solution;
    
    vector<int> nums1 = {10, 9, 2, 5, 3, 7, 101, 18};
    cout << "Length of LIS for nums1: " << solution.lengthOfLIS(nums1) << endl;
    
    vector<int> nums2 = {0, 1, 0, 3, 2, 3};
    cout << "Length of LIS for nums2: " << solution.lengthOfLIS(nums2) << endl;
    
    vector<int> nums3 = {7, 7, 7, 7, 7, 7, 7};
    cout << "Length of LIS for nums3: " << solution.lengthOfLIS(nums3) << endl;
    
    return 0;
}
