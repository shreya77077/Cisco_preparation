#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution{
    public:
    vector<int>twoSum(vector<int>&nums, int target){
        unordered_map<int,int> numMap;
        for(int i=0; i< nums.size();i++){
            int complement = target - nums[i];

            if(num_map.find(complement) != num_map.end()){
                return {num_map[complement],i};
            }
            num_map[nums[i]] = i;

        }

        return {};
    }

}

int main(int argc, char *argv[]) {
    int test_cases;
    cin >> test_cases;

    Solution solution; // Create an instance of the Solution class

    while (test_cases--) {
        int n, target;
        cin >> n >> target;
        vector<int> nums(n);
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }
        vector<int> result = solution.twoSum(nums, target);
        if (!result.empty()) {
            cout << result[0] << " " << result[1] << endl;
        } else {
            cout << "No solution found." << endl;
        }
    }

    return 0;
}
