class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n = nums.size();
       vector<int> LeftProducts(n,1);
       vector<int> RightProducts(n,1);
       vector<int>result(n);

       for(int i = 1; i < n; i++){
         LeftProducts[i] = LeftProducts[i -1] * nums[i-1];
       }

       for(int i = n-2; i >=0; i--){
        RightProducts[i] = RightProducts[i+1] * nums[i+1];

       }
       for (int i = 0; i < n; ++i) {
            result[i] = LeftProducts[i] * RightProducts[i];
        }


       return result;
        
    }
};

// int n = nums.size();
//         vector<int> output(n);
//         output[0] = 1;
//         for(int i=1; i<n; i++){
//             output[i] = output[i-1] * nums[i-1];
//         }
//         int right = 1;
//         for(int i=n-1; i>=0; i--){
//             output[i] *= right;
//             right *= nums[i];
//         }
//         return output;