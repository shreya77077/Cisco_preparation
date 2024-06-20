#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution{
    public: 
    int maxSubArray(vector<int> & nums){
        int currentsum = nums[0];
        int maxsum = nums[0];

        for (int i =1; i < nums.size(); i ++){
            currentsum = max(nums[i], currentsum + nums[i]);
            maxsum = max (maxsum, currentsum);
        }

        return maxsum;

    }
};

int main(){
    Solution solution;
    vector<int>nums;
    int num;

    while(cin>num){
        nums.push_back(num);
    }

    if(!nums.empty()){
        int result = solution.maxSumArray(nums);
        cout << result << endl;
    }else {
        cout<<"No input provided "<<endl;
    }

    return 0;

}