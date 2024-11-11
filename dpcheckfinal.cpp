// #include <bits/stdc++.h>
// using namespace std;
// class Solution{
// private:
//     int dpcheck(int i, int j, int nums[], vector<vector<int>> &dp){
//         if(i == j) return 0;
        
//         if(dp[i][j] != -1) return dp[i][j];
//         int maxcount = INT_MAX;
//         for(int k=i; k<j; k++){
//             int count = dpcheck(i,k,nums,dp) + dpcheck(k+1,j,nums,dp) + nums[i-1]*nums[k]*nums[j];
//             maxcount = min(count,maxcount);
//         }
//         return dp[i][j] = maxcount;
//     }
// public:
//     int matrixMultiplication(int N, int arr[])
//     {
//         vector<vector<int>> dp(N,vector<int> (N+1,-1));
//         return dpcheck(1,N-1,arr,dp);
//     }
// };
// class Solution2 {
// public:
//     int matrixMultiplication(int N, int arr[]) {
//         // Create a 2D dp array with size N x N, initialized to 0.
//         vector<vector<int>> dp(N, vector<int>(N, 0));

//         // l represents the length of the sub-chain we are considering.
//         for (int l = 2; l < N; l++) { // l = 2 to N-1
//             for (int i = 1; i < N - l + 1; i++) {
//                 int j = i + l - 1;
//                 dp[i][j] = INT_MAX;
//                 for (int k = i; k < j; k++) {
//                     int cost = dp[i][k] + dp[k + 1][j] + arr[i - 1] * arr[k] * arr[j];
//                     dp[i][j] = min(dp[i][j], cost);
//                 }
//             }
//         }
//         return dp[1][N - 1];
//     }
// };
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int N;
//         cin>>N;
//         int arr[N];
//         for(int i = 0;i < N;i++)
//             cin>>arr[i];
        
//         Solution ob;
//         cout<<ob.matrixMultiplication(N, arr)<<endl;
    
// cout << "~" << "\n";
// }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//     int dpcheck(int i, int j, vector<int> &nums, vector<vector<int>> &dp) {
//         if (i > j) {
//             return 0;
//         }
//         if (dp[i][j] != -1) {
//             return dp[i][j];
//         }
//         int mini = INT_MAX;
//         for (int ind = i; ind <= j; ind++) {
//             int cost = nums[j + 1] - nums[i - 1];
//             int ans = cost + dpcheck(i, ind - 1, nums, dp) + dpcheck(ind + 1, j, nums, dp);
//             mini = min(mini, ans);
//         }
//         return dp[i][j] = mini;
//     }

// public:
//     int minCost(int n, vector<int>& cuts) {
//         cuts.push_back(n);
//         cuts.insert(cuts.begin(), 0);
//         sort(cuts.begin(), cuts.end());

//         int m = cuts.size();
//         vector<vector<int>> dp(m, vector<int>(m, -1));

//         return dpcheck(1, m - 2, cuts, dp);
//     }
// };
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int N;
//         cin>>N;
//         vector<int> arr;
//         for(int i = 0;i < N;i++)
//             cin>>arr[i];
        
//         Solution ob;
//         cout<<ob.minCost(N, arr)<<endl;
    
// cout << "~" << "\n";
// }
//     return 0;
// }
