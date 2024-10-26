// #include<bits/stdc++.h>
// using namespace std;
// int dpcheck(int n, vector<int> &nums){
//     if(n <= 1) return n;

//     if(nums[n] != -1) return nums[n];
//     return nums[n] = dpcheck(n-1,nums) + dpcheck(n-2,nums);
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> nums(n+1,-1);
//     cout<<dpcheck(n,nums);
//     return 0;

//     // time = o(n) using vector
//     // space = o(n) + o(n) (vector + recursion stack space)
// }



// #include<bits/stdc++.h>
// using namespace std;
// int dpcheck(int n,vector<int> &nums){
//     // using tabulation
//     nums[0] = 0;
//     nums[1] = 1;

//     for(int i=2; i<=n; i++){
//         nums[i] = nums[i-1] + nums[i-2];
//     }
//     return nums[n];
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> nums(n+1,-1);
//     cout<<dpcheck(n,nums);
//     return 0;

//     // time = o(n) using vector
//     // space = o(n) (vector space)
// }



// #include<bits/stdc++.h>
// using namespace std;
// int dpcheck(int n){
//     // using tabulation and space optimization
//     int ans = 0;
//     int prev2 = 0;
//     int prev1 = 1;

//     for(int i=2; i<=n; i++){
//         ans = prev2 + prev1;
//         prev2 = prev1;
//         prev1 = ans;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
    
//     cout<<dpcheck(n);
//     return 0;

//     // time = o(n) using vector
//     // space = 1 (constant space)
// }





// #include<bits/stdc++.h>
// using namespace std;

// int climbStairs1(int n) {
//     if(n <= 1) return 1;   // using recursion(time limit)
//     return climbStairs1(n-1) + climbStairs1(n-2);
// }

// int climbStairs2(int n) {           // using memoization (memory limit)
//     vector<int> nums(n+1,-1); 

//     if(n <= 1) return 1;
//     if(nums[n] != -1) return nums[n];

//     return nums[n] = climbStairs2(n-1) + climbStairs2(n-2);
// }

// int climbStairs3(int n) {          // using tabulation
//     vector<int> dp(n+1,-1);
//     dp[0] = 1;  dp[1] = 1;
//     for(int i=2;i<=n;i++){
//         dp[i] = dp[i-1] + dp[i-2];
//     }
//     return dp[n];
// }

// int climbStairs4(int n) {              // optimized space complexcity
//     if(n == 1) return 1;
//     int ans = 0;  int first = 1;  int second = 1;

//     for(int i=2;i<=n;i++){
//         ans = first + second;
//         second = first;
//         first = ans;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"ENTER THE NUMBER "<< endl; cin>>n;
    
//     cout<<climbStairs1(n);
//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
//     private:
//     int dpcheck(vector<int> &nums, int index,vector<int> &dp){             // using memoization method O(N) time and O(N) + O(N) = O(N)space 
//         if(index == 0) return 0;
        
//         if(dp[index] != -1) return dp[index];
        
//         int left = dpcheck(nums,index-1,dp) + abs(nums[index] - nums[index-1]);
//         int right = INT_MAX;
//         if(index > 1){
//             right = dpcheck(nums,index-2,dp) + abs(nums[index] - nums[index-2]);
//         }
//         return dp[index] = min(left,right);
//     }
//     public:
//     int minimumEnergy(vector<int>& nums, int n) {                      
        
//         vector<int> dp(n+1,-1);
//         return dpcheck(nums,n-1,dp);
//     }
// };

// class Solution1 {
//   public:
//     int minimumEnergy(vector<int>& nums, int n) {                      // using tablution method O(N) time and O(N) space
        
//         vector<int> dp(n,-1);

//         dp[0] = 0;
//         int left = INT_MAX; int right = INT_MAX;
    
//         for(int i=1; i<n; i++){
//             left = dp[i-1] + abs(nums[i] - nums[i-1]);
//             if(i > 1){
//                 right = dp[i-2] + abs(nums[i] - nums[i-2]);
//             }
//             dp[i] = min(left, right);        
//         }
//         return dp[n-1];
//     }
// };

// class Solution3 {
//   public:
//     int minimumEnergy(vector<int>& nums, int n) {                      // using space optimization time : O(N) and space : O(1) constant
        
//         int first = 0;            int ans = 0;
//         int second = 0;

//         int left = INT_MAX; int right = INT_MAX;
    
//         for(int i=1; i<n; i++){
//             left = first + abs(nums[i] - nums[i-1]);
//             if(i > 1){
//                 right = second + abs(nums[i] - nums[i-2]);
//             }
//             ans = min(left, right);   
//             second = first;
//             first = ans;     
//         }
//         return ans;
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int N;
//         cin >> N;
//         vector<int> arr(N);
//         for (int i = 0; i < N; i++) {
//             cin >> arr[i];
//         }
//         Solution obj;
//         Solution1 obj1;
//         cout << obj1.minimumEnergy(arr, N) << "\n";
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
//         private:
//     int dpcheck(vector<int> &nums, int index,vector<int> &dp){
//         if(index == 0) return nums[0];
//         if(index == 1) return nums[1];
        
//         if(dp[index] != -1) return dp[index];
        
//         int left = dpcheck(nums,index-1,dp) + nums[index];
//         int right = dpcheck(nums,index-2,dp) + nums[index];
    
//         return dp[index] = min(left,right);
//     }
//   public:
//     int minCostClimbingStairs(vector<int>&cost ,int N) {

//         vector<int> dp(N,-1);
//         return min(dpcheck(cost,N-1,dp), dpcheck(cost,N-2,dp));
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int N;
        
//         cin>>N;
//         vector<int>cost(N);
        
//         for(int i=0 ; i<N ; i++){
//             cin>>cost[i];
//         }

//         Solution ob;
//         cout<<ob.minCostClimbingStairs(cost,N);
//         cout<<"\n";
//     }
//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   private:
//     int dpcheck(int k, vector<int> &nums,vector<int>&dp, int index){
//         if(index == 0) return 0;
        
//         if(dp[index] != -1) return dp[index];
        
//         int ans = INT_MAX;
//         int step = 0;
//         for(int i=1; i<=k; i++){
//             if(index - i >= 0){
//                 step = dpcheck(k,nums,dp,index-i) + abs(nums[index] - nums[index-i]);
//             }
//             ans = min(step,ans);
//         }
//         return dp[index] = ans;
//     }
//   public:
//     int minimizeCost(int k, vector<int>& nums) {


//         // int n = nums.size();                       // this code using memoization 
//         // vector<int> dp(n+1,-1);
//         // return dpcheck(k,nums,dp,n-1);
        
//         int n = nums.size();                        // using tabulation
//         vector<int> dp(n+1,-1);
//         dp[0] = 0;
        
//         for(int i=1; i<n; i++){
//             int ans = INT_MAX;
//             for(int j=1; j<=k; j++){
//                 if(i-j >= 0){
//                     int step = dp[i-j] + abs(nums[i] - nums[i-j]);
//                     ans = min(ans,step);
//                 }
//             }
//             dp[i] = ans;
//         }
//         return dp[n-1];
//     }
// };
// int main() {
//     string ts;
//     getline(cin, ts);
//     int t = stoi(ts);
//     while (t--) {
//         string ks;
//         getline(cin, ks);
//         int k = stoi(ks);
//         vector<int> arr;
//         string input;
//         getline(cin, input);
//         stringstream ss(input);
//         int number;
//         while (ss >> number) {
//             arr.push_back(number);
//         }
//         Solution obj;
//         int res = obj.minimizeCost(k, arr);
//         cout << res << endl;
//         // string tl;
//         // getline(cin, tl);
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// private: 
//     int dpcheck(vector<int> &nums,int index ,vector<int> & dp){

//         if(index < 0) return 0;
//         if(index == 0) return nums[index];
//         if(dp[index] != -1) return dp[index];

//         int pick = nums[index] + dpcheck(nums,index-2,dp);
//         int notpick = dpcheck(nums,index-1,dp);
//         return dp[index] = max(pick,notpick);
//     }
// public:
//     int rob(vector<int>& nums) {
        
//         int n = nums.size();
//         vector<int> dp(n,-1);
//         return dpcheck(nums,n-1,dp);
//     }
// };
// class Solution2 {
//     public:
//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> dp(n,-1);

//         dp[0] = nums[0];

//         for(int i=1; i<n; i++){
//             int take = nums[i];

//             if(i > 1){
//                 take += dp[i-2];
//             }
//             int leave = dp[i-1];

//             dp[i] = max(take,leave);
//         }
//         return dp[n-1];
//     }
// };
// int main(){
//     int n,x; 
//     cout<<"ENTER THE SIZE OF THE ARRAY"<<endl;
//     cin>>n;

//     vector<int> nums;
//     for(int i=0; i<n; i++){
//         cin>>x;
//         nums.push_back(x);
//     } 
//     Solution2 obj;

//     cout <<"MAXIMUM AMOUNT THE THEIF CAN STEAL FORM ALL THE HOUSES "<<obj.rob(nums)<<endl;
// }






// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// private:
//     int dpcheck(vector<int> &dp,int index,vector<int> &nums){                      // memoization code for the house robber problem if last and first index are adjacent too
//         int n = nums.size();                                                      // just update the array in first array remove tha first element , second remove the last one
//         if(index == 0) return nums[0];                                           // store the maximum amount
//         if(index < 0) return 0;

//         if(dp[index] != -1) return dp[index];
        
//         int take = nums[index] + dpcheck(dp,index-2,nums);
//         int leave = dpcheck(dp,index-1,nums);

//         return dp[index] = max(take,leave);
//     }
// public:
//     int rob(vector<int>& nums) {
//         int n = nums.size();

//         vector<int> temp1, temp2;
//         if(n==1) return nums[0];

//         for(int i=0;i<n;i++)
//         {
//             if(i!=0) temp1.push_back(nums[i]);
//             if(i!=n-1) temp2.push_back(nums[i]);
//         }
//         int n1 = temp1.size(); int n2 = temp2.size();
//         vector<int> dp1(n1,-1), dp2(n2,-1);
//         return max(dpcheck(dp1,n1-1,temp1),dpcheck(dp2,n2-1,temp2));
//     }
// };
// class Solution2{
// private:
//     int dpcheck(vector<int> &nums){             // using tabulation        
//         int n = nums.size();                                                     
//         vector<int> dp(n,-1);

//         dp[0] = nums[0];

//         for(int i=1; i<n; i++){
//             int take = dp[i];
//             if(i > 1){
//                 take += dp[i-2];
//             }
//             int leave = dp[i-1];
//             dp[i] = max(take,leave);
//         }

//         return dp[n-1];
//     }
// public:
//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> temp1, temp2;
//         if(n==1) return nums[0];

//         for(int i=0;i<n;i++)
//         {
//             if(i!=0) temp1.push_back(nums[i]);
//             if(i!=n-1) temp2.push_back(nums[i]);
//         }
//         return max(dpcheck(temp1),dpcheck(temp2));
//     }
// };
// int main(){
//     int n,x; 
//     cout<<"ENTER THE SIZE OF THE ARRAY"<<endl;
//     cin>>n;
//     vector<int> nums;
//     for(int i=0; i<n; i++){
//         cin>>x;
//         nums.push_back(x);
//     } 
//     Solution2 obj;
//     cout <<"MAXIMUM AMOUNT THE THEIF CAN STEAL FORM ALL THE HOUSES "<<obj.rob(nums)<<endl;
// }




// 2D DP OR DP IN GRID


// #include <bits/stdc++.h>
// using namespace std;
// class Solution1 {
//   private:
//     int dpcheck(vector<vector<int>>&nums,int day,int last){                // using recursion
//         if(day == 0){
//             int ans = INT_MIN;
//             for(int i=0; i<3; i++){
//                 if(i != last){
//                     ans = max(ans,nums[0][i]);
//                 }
//             }
//             return ans;
//         }
//         int ans = INT_MIN;
//         for(int i=0; i<3; i++){
//             if(i != last){
//                 int newans = nums[day][i] + dpcheck(nums,day-1,i);
//                 ans = max(ans,newans);
//             }
//         }
//         return ans;
//     }
//   public:
//     int maximumPoints(vector<vector<int>>& arr, int n) {
//         return dpcheck(arr,n-1,3);
//     }
// };
// class Solution {
//   private:
//     int dpcheck(vector<vector<int>>&nums,int day,int last,vector<vector<int>> &dp){                // dp using memoization
//         if(day == 0){
//             int ans = INT_MIN;
//             for(int i=0; i<3; i++){
//                 if(i != last){
//                     ans = max(ans,nums[0][i]);
//                 }
//             }
//             return ans;
//         }
//         if(dp[day][last] != -1) return dp[day][last];
//         int ans = INT_MIN;
//         for(int i=0; i<3; i++){
//             if(i != last){
//                 int newans = nums[day][i] + dpcheck(nums,day-1,i,dp);
//                 ans = max(ans,newans);
//             }
//         }
//         return dp[day][last] = ans;
//     }
//   public:
//     int maximumPoints(vector<vector<int>>& arr, int n) {
//         vector<vector<int>> dp(n , vector<int> (4,-1));
//         return dpcheck(arr,n-1,3,dp);
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<vector<int>> arr;
//         for (int i = 0; i < n; ++i) {
//             vector<int> temp;
//             for (int j = 0; j < 3; ++j) {
//                 int x;
//                 cin >> x;
//                 temp.push_back(x);
//             }
//             arr.push_back(temp);
//         }
//         Solution obj;
//         cout << obj.maximumPoints(arr, n) << endl;
//     }
//     return 0;
// }





// #include <bits/stdc++.h>                   // total unique path from start to end point 
// using namespace std;

// class Solution {
// private:
//     int dpcheck(int i, int j, vector<vector<int>> &dp){                  // using top-down memoization
//         if(i == 0 && j == 0) return 1;
//         if(i < 0 || j < 0) return 0;
        
//         if(dp[i][j] != -1) return dp[i][j];

//         int up = dpcheck(i-1,j,dp);
//         int left = dpcheck(i,j-1,dp);

//         return dp[i][j] = (up+left);
//     }
// public:
//     int uniquePaths(int m, int n) {
//         vector<vector<int>> dp(n,vector<int>(m,-1));
//         return dpcheck(n-1,m-1,dp);
//     }
// };

// class Solution2 {
// private:
//     int dpcheck(int i, int j,int n, int m, vector<vector<int>> &dp){                  // using bottom-up memoization
//         if(i == n-1 && j == m-1) return 1;
//         if(i >= n || j >= m) return 0;
        
//         if(dp[i][j] != -1) return dp[i][j];

//         int up = dpcheck(i+1,j,n,m,dp);
//         int left = dpcheck(i,j+1,n,m,dp);

//         return dp[i][j] = (up+left);
//     }
// public:
//     int uniquePaths(int m, int n) {
//         vector<vector<int>> dp(n,vector<int>(m,-1));
//         return dpcheck(0,0,n,m,dp);
//     }
// };

// class Solution3 {
// public:
//     int uniquePaths(int m, int n) {                                                  // using tabulation
//         vector<vector<int>> dp(n,vector<int>(m,-1));
        
        // dp[0][0] = 1;

        // for(int i=0; i<n; i++){
        //     for(int j=0; j<m; j++){
        //         if(i == 0 && j == 0){
        //             dp[i][j] = 1;
        //         }else {
        //             int up = 0; int left = 0;
        //             if(i > 0) up = dp[i-1][j];
        //             if(j > 0) left = dp[i][j-1];
        //             dp[i][j] = up+left;
        //         }
        //     }
        // }
        // return dp[n-1][m-1];
//     }
// };

// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int N, M;
// 		cin>>M>>N;
// 		Solution2 ob;
// 	    cout << ob.uniquePaths(M, N)<<endl;
// 	}
//     return 0;
// }







// #include <bits/stdc++.h>                    // total unique path from start to end point and also having abstracles
// using namespace std;

// class Solution {
// private:
//     int dpcheck(int i, int j, vector<vector<int>>& nums,vector<vector<int>>& dp){  // using top-down method
//         if(i >= 0 && j >= 0 && nums[i][j] == 1) return 0;
//         if(i == 0 && j == 0) return 1;
//         if(i < 0 || j < 0) return 0;

//         if(dp[i][j] != -1) return dp[i][j];
//         int up = dpcheck(i-1,j,nums,dp);
//         int left = dpcheck(i,j-1,nums,dp);

//         return dp[i][j] = (up + left);    
//     }
// public:
//     int uniquePathsWithObstacles(vector<vector<int>>& nums) {
//         int n = nums.size(); int m = nums[0].size();
//         vector<vector<int>> dp(n,vector<int>(m,-1));

//         return dpcheck(n-1, m-1,nums,dp);
//     }
// };

// class Solution1 {
// private:
//     int dpcheck(int i, int j, int n , int m, vector<vector<int>>& nums,vector<vector<int>>& dp){    // using bottom-up approch
//         if(i >= n || j >= m || nums[i][j] == 1) return 0;
//         if(i == n-1 && j == m-1) return 1;
//         if(i >= n || j >= m  ) return 0;

//         if(dp[i][j] != -1) return dp[i][j];
//         int up = dpcheck(i+1,j,n,m,nums,dp);
//         int left = dpcheck(i,j+1,n,m,nums,dp);

//         return dp[i][j] = (up + left);  
        
//     }
// public:
//     int uniquePathsWithObstacles(vector<vector<int>>& nums) {
//         int n = nums.size(); int m = nums[0].size();
//         vector<vector<int>> dp(n,vector<int>(m,-1));

//         return dpcheck(0,0,n,m,nums,dp);
//     }
// };

// class Solution2 {

// public:
//     int uniquePathsWithObstacles(vector<vector<int>>& nums) {
//         int n = nums.size(); int m = nums[0].size();
//         vector<vector<int>> dp(n,vector<int>(m,-1));

//         dp[0][0] = 1;

//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(i == 0 && j == 0){
//                     dp[i][j] = 1;
//                 }
//                 else if(nums[i][j] == 1) dp[i][j] = 0;
//                 else {
//                     int up = 0; int left = 0;
//                     if(i > 0) up = dp[i-1][j];
//                     if(j > 0) left = dp[i][j-1];
//                     dp[i][j] = up+left;
//                 }
//             }
//         }
//         return dp[n-1][m-1];
        
//     }
// };

// int main()
// {
// 	int n; int m; cin>>n>>m;

//     vector<vector<int>> nums;
//     for(int i=0; i<n; i++){
//         vector<int> temp; int x;
//         for(int j=0; j<m; j++){
//             cin>>x;
//             temp.push_back(x);
//         }
//         nums.push_back(temp);
//     }
//     Solution2 obj;
//     cout<<obj.uniquePathsWithObstacles(nums);
//     return 0;
// }






// #include <bits/stdc++.h>                    // you have given an matrix task to find the min or max path from start to end (0,0) to (n-1,m-1);
// using namespace std;

// class Solution {
// private:
//     int  dpcheck(int i,int j,vector<vector<int>> &nums,vector<vector<int>> &dp){             // top-down memoization
//         if(i == 0 && j == 0) return nums[i][j];

//         if(dp[i][j] != -1) return dp[i][j];
//         int up = INT_MAX; int left = INT_MAX;

//         if(i > 0) up = nums[i][j] + dpcheck(i-1,j,nums,dp);
//         if(j > 0) left = nums[i][j] + dpcheck(i,j-1,nums,dp);

//         return dp[i][j] = min(up , left);
//     }
// public:
//     int minPathSum(vector<vector<int>>& nums) {
//         int n = nums.size(); int m = nums[0].size();
//         vector<vector<int>> dp(n,vector<int> (m,-1));
//         return dpcheck(n-1,m-1,nums,dp);
//     }
// };

// class Solution1 {
// private:
//     int dpsolve(int i,int j,int n,int m,vector<vector<int>>& grid,vector<vector<int>>& dp){     // using bottom-up memoization  TIME: 0(N*M) AND SPACE: 0(N*M) + 0(N+M);
//         if(i == n-1 && j == m-1) return grid[i][j];

//         int right=INT_MAX; int down=INT_MAX;
//         if(dp[i][j] != -1) return dp[i][j];

//         if(i < n-1) right = grid[i][j] + dpsolve(i+1,j,n,m,grid,dp);
//         if(j < m-1) down=grid[i][j] + dpsolve(i,j+1,n,m,grid,dp);
        
//         return dp[i][j] = min(right,down);
//     }
// public:
//     int minPathSum(vector<vector<int>>& grid) {
//         int n=grid.size();
//         int m=grid[0].size();
//         vector<vector<int>> dp(n,vector<int> (m,-1));      
//         return dpsolve(0,0,n,m,grid,dp);
//     }
// };

// class Solution2 {
// public:
//     int minPathSum(vector<vector<int>>& nums) {                                                // using tabulation TIME: 0(N*M) AND SPACE: 0(N*M); 
//         int n = nums.size(); int m = nums[0].size();
//         vector<vector<int>> dp(n,vector<int> (m,-1));

//         dp[0][0] = nums[0][0];

//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 int up = INT_MAX; int left = INT_MAX;
//                 if(i == 0 && j == 0) dp[i][j] = nums[0][0];
//                 else {
//                     if(i > 0) up = nums[i][j] + dp[i-1][j];
//                     if(j > 0) left = nums[i][j] + dp[i][j-1];
//                     dp[i][j] = min(up,left);
//                 }
//             }
//         }
//         return dp[n-1][m-1];
//     }
// };

// int main()
// {
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
//     Solution2 obj;
//     cout<<obj.minPathSum(nums);
//     return 0;
// }









// #include <bits/stdc++.h>                    // you have given triangle task to find the min or max path from start to end (0,0) to last row (dp[n-1][j]);
// using namespace std;

// class Solution {
// private:
//     int dpcheck(int i, int j,int n, vector<vector<int>> &nums, vector<vector<int>>&dp){

//         if(i == n-1) return nums[n-1][j];
//         if(dp[i][j] != -1) return dp[i][j];

//         int down = 0; int left = 0;
//         if(i < n-1) down = nums[i][j] + dpcheck(i+1,j,n,nums,dp);
//         if(j < n-1) left = nums[i][j] + dpcheck(i+1,j+1,n,nums,dp);

//         return dp[i][j] = min(down,left);  
//     }
// public:
//     int minimumTotal(vector<vector<int>>& nums) {
//         int n = nums.size(); 
//         vector<vector<int>> dp(n,vector<int> (n,-1));
//         return dpcheck(0,0,n,nums,dp);
//     }
// };

// class Solution1 {
// public:
//     int minimumTotal(vector<vector<int>>& nums) {
//         int n = nums.size(); 
//         vector<vector<int>> dp(n,vector<int> (n,-1));

//         for(int j=0; j<n; j++){
//             dp[n-1][j] = nums[n-1][j];
//         }

//         for(int i = n-2; i>= 0; i--){
//             for(int j=i; j >=0; j--){
//                 int down = 0; int dg = 0;
//                 down = nums[i][j] + dp[i+1][j];
//                 dg = nums[i][j] + dp[i+1][j+1];
//                 dp[i][j] = min(down,dg);
//             }
//         }
//         return dp[0][0];
//     }
// };

// int main()
// {
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
//     Solution1 obj;
//     cout<<obj.minimumTotal(nums);
//     return 0;
// }






// #include <bits/stdc++.h>                    // you have given an matrix task to find the min or max pathsum from starting row to last coloumn (min/max falling problem)
// using namespace std;

// class Solution {
// private:
//     int dpcheck(int i, int j , vector<vector<int>>& nums, vector<vector<int>>& dp,int n,int m){  // code is correct but time-limit-exceeded
//         if(i == 0) return nums[i][j];

//         if(dp[i][j] != -1) return dp[i][j];
//         int dgleft = INT_MAX; int dgright = INT_MAX; int up = INT_MAX;

//         if(i > 0) up = nums[i][j] + dpcheck(i-1,j,nums,dp,n,m);
//         if(i > 0 && j < m-1) dgright = nums[i][j] + dpcheck(i-1,j+1,nums,dp,n,m);
//         if(j > 0 && i > 0) dgleft  = nums[i][j] + dpcheck(i-1,j-1,nums,dp,n,m);

//         return dp[i][j] = min(up,min(dgright,dgleft));
        
//     }
// public:
//     int minFallingPathSum(vector<vector<int>>& nums) {
//         int n = nums.size(); int m = nums[0].size();
//         vector<vector<int>> dp (n,vector<int> (m,-1));
//         int ans = INT_MAX;
//         for(int j=0; j<m; j++) ans = min(ans,dpcheck(n-1,j,nums,dp,n,m));
//         return ans;
//     }
// };

// class Solution1 {
// public:
//     int minFallingPathSum(vector<vector<int>>& nums) {
//         int n = nums.size(); int m = nums[0].size();
//         vector<vector<int>> dp (n,vector<int> (m,-1));
       
//         for(int j=0; j<m; j++) dp[0][j] = nums[0][j];

//         for(int i=1; i<n; i++){
//             for(int j=0; j<m; j++){
//                 int down = INT_MAX; int dgleft = INT_MAX; int dgright = INT_MAX;

//                 down = nums[i][j] + dp[i-1][j];

//                 if(j > 0) dgleft = nums[i][j] + dp[i-1][j-1];
//                 else dgleft = INT_MAX;
            
//                 if(j < m-1) dgright = nums[i][j] + dp[i-1][j+1];
//                 else dgright = INT_MAX;

//                 dp[i][j] = min(down,min(dgleft,dgright));
//             }
//         }
//         int ans = INT_MAX;
//         for(int j=0; j<m; j++) ans = min(ans,dp[n-1][j]);
//         return ans;
//     }
// };

// int main()
// {
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
//     Solution1 obj;
//     cout<<obj.minFallingPathSum(nums);
//     return 0;
// }




















// class Solution {
// public:
//     int minFallingPathSum(vector<vector<int>>& grid) {     //A falling path with non-zero shifts is a choice of exactly one element from each row of grid such that no two elements chosen in adjacent rows are in the same column.
//         int ans = INT_MAX;
//         int n = grid.size();
//         int m = grid[0].size();
//         vector<vector<int>> dp(n, vector<int>(m, -1));

//         for(int i=0;i<n;i++){
//             dp[0][i]=grid[0][i];
//         }
//         for(int i=1;i<n;i++){
//             for(int j=0;j<n;j++){
//                 int mn=INT_MAX;
//                 for(int k=0;k<n;k++){
//                     if(k!=j) mn=min(mn,grid[i][j]+dp[i-1][k]);
//                     dp[i][j]=mn;
//                 }
//             }
//         }
//         for(int i=0;i<n;i++){
//             ans=min(ans,dp[n-1][i]);
//         }

//         return ans;
//     }
// };