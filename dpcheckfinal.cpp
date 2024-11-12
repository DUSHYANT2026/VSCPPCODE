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











// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     int largestRectangleArea(vector<int>& nums) {
//         int n = nums.size();
//         stack<int> s;

//         int ans = 0;
//         for(int i=0; i<=n; i++){
//             while(!s.empty() && (i == n || nums[s.top()] >= nums[i])){
//                 auto it = s.top();
//                 s.pop();
//                 int height = nums[it];
//                 int width = 0;
//                 if(s.empty()){
//                     width = i;
//                 }else{
//                     width = i-s.top()-1;
//                 }
//                 ans = max(ans,height*width);
//             }
//             s.push(i);
//         }
//         return ans;
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
//         cout<<ob.largestRectangleArea(arr)<<endl;
    
// cout << "~" << "\n";
// }
//     return 0;
// }






// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// private:
//     int largestRectangleArea(vector<int>& nums) {
//         int n = nums.size();
//         stack<int> s;

//         int ans = 0;
//         for(int i=0; i<=n; i++){
//             while(!s.empty() && (i == n || nums[s.top()] >= nums[i])){
//                 auto it = s.top();
//                 s.pop();
//                 int height = nums[it];
//                 int width = 0;
//                 if(s.empty()){
//                     width = i;
//                 }else{
//                     width = i-s.top()-1;
//                 }
//                 ans = max(ans,height*width);
//             }
//             s.push(i);
//         }
//         return ans;
//     }
// public:
//     int maximalRectangle(vector<vector<int>>& matrix) {
//         vector<int> nums(matrix[0].size(),0);

//         int ans = INT_MIN;
//         for(int i=0; i<matrix.size(); i++){
//             for(int j=0; j<matrix[0].size(); j++){
//                 if(matrix[i][j] == 1) nums[j]++;
//                 else nums[j] = 0;
//             }
//             int maxarea = largestRectangleArea(nums);
//             ans = max(ans,maxarea);
//         }
//         return ans;
//     }
// };
// int main(){
//     int n; int m; cin>>n>>m;
//     vector<vector<int>> nums;
//     for(int i=0; i<n; i++){
//         vector<int> temp; int x;
//         for(int j=0; j<m; j++){
//             cin>>x;
//             temp.push_back(x);
//         }
//         nums.push_back(temp);
//     }
//     Solution obj;
//     cout<<obj.maximalRectangle(nums);
//     return 0;
// }







#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n = matrix.size(); int m = matrix[0].size();
        vector<vector<int>> dp(n, vector<int>(m, 0));

        for(int j = 0; j < m; j++) dp[0][j] = matrix[0][j];
        for(int i = 0; i < n; i++) dp[i][0] = matrix[i][0];

        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){
                if(matrix[i][j] == 1){
                    dp[i][j] = 1 + min({dp[i-1][j-1],dp[i-1][j],dp[i][j-1]});
                }
                else dp[i][j] = 0;
            }
        }
        int ans = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                ans += dp[i][j];
            }
        }
        return ans;
    }
};
int main(){
    int n; int m; cin>>n>>m;
    vector<vector<int>> nums;
    for(int i=0; i<n; i++){
        vector<int> temp; int x;
        for(int j=0; j<m; j++){
            cin>>x;
            temp.push_back(x);
        }
        nums.push_back(temp);
    }
    Solution obj;
    cout<<obj.countSquares(nums);
    return 0;
}
