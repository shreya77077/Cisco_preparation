#include<iostream>
using namespace std;

const int N = 2;
const int M = 2;

void traverse2DArray(int arr[][M],int N){
    for(int i =0;i<N;i++){
        for(int j=0; j<M;j++){
            cout<<arr[i][j] << ' ';
        }
        cout<<endl;

    }
}

int main(){
    int arr[][M]={{1,2},{3,4}};
    traverse2DArray(arr,N);

    return 0;
}
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