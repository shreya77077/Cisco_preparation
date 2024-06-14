class Solution{
    public:
    vector<int> twoSum(vector<int>& nums, int target){
        unordered_map<int,int> numMap;
        int n = nums.size();

        for(int i = 0;i<n-1;i++){
            for(int j= i+1;j<n;j++){
                if(nums[i] + nums[j] == target){
                    return [i,j];
                }
            }
        }
        return {};
    }
};

// This is a Brute Force approach
// The brute-force approach has a time complexity of O(n^2). This is not efficient for large inputs.