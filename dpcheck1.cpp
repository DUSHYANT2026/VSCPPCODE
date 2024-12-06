// #include <bits/stdc++.h>
// using namespace std;

// class Solution{ 
// private:
//     void dpcheck(vector<int> &temp,vector<int> & nums, int index,int n,unordered_map<int,int> &mapp){        // this solution is check all the subset one by one (time limit)
//         if(index == n){
//             int total = 0;
//             for(auto it : temp){
//                 total += it;
//             }
//             mapp[total]++;
//             return;
//         }
//         dpcheck(temp,nums,index+1,n,mapp);
//         temp.push_back(nums[index]);
//         dpcheck(temp,nums,index+1,n,mapp);
//         temp.pop_back();
//     }
// public:
//     bool isSubsetSum(vector<int>nums, int sum){
//         vector<int> temp;
//         unordered_map<int,int> mapp;
//         dpcheck(temp,nums,0,nums.size(),mapp);
        
//         if(mapp.find(sum) != mapp.end()){
//             return true;
//         }
//         return false;
//     }
// };

// class Solution1{ 
// private:
//     bool dpcheck(int index,vector<int> &nums,int sum,vector<vector<int>> &dp){                     //  using memoization top-down  
//         if(sum == 0) return true;
//         if(index == 0 ) return sum == nums[0];
        
//         if(dp[index][sum] != -1) return dp[index][sum];
        
//         bool notcount = dpcheck(index-1,nums,sum,dp);
        
//         bool count = false;
//         if(sum >= nums[index])
//         count = dpcheck(index-1,nums,sum-nums[index],dp);
        
//         return dp[index][sum] = count || notcount;
//     }
// public:
//     bool isSubsetSum(vector<int>nums, int sum){
//         int n = nums.size();
//         vector<vector<int>> dp(n,vector<int>(sum+1,-1));
//         return dpcheck(n-1,nums,sum,dp);
//     }
// };

// class Solution2{                                                                 //  using tabulation bottom up
// public:
//     bool isSubsetSum(vector<int>nums, int sum){
//         int n = nums.size();
//         vector<vector<bool>> dp(n,vector<bool>(sum+1,false));
        
//         for(int i=0; i<n; i++){
//             dp[i][0] = true;
//         }
//         if(nums[0] <= sum) dp[0][nums[0]] = true;
        
//         for(int i=1; i<n; i++){
//             for(int j=1; j<=sum; j++){
//                 bool notcount = false; bool count = false;
                
//                 notcount = dp[i-1][j];
                
//                 if(nums[i] <= j){
//                     count = dp[i-1][j-nums[i]];
//                 }
//                 dp[i][j] = count || notcount;
//             }
//         }
//         return dp[n-1][sum];
//     }
// };

// int main() {
//     int t;
//     cin >> t;
//     cin.ignore();
//     while (t--) {
//         vector<int> arr;
//         string input;
//         getline(cin, input);
//         stringstream ss(input);
//         int number;
//         while (ss >> number) {
//             arr.push_back(number);
//         }
//         int sum;
//         cin >> sum;
//         cin.ignore();

//         Solution2 ob;
//         if (ob.isSubsetSum(arr, sum))
//             cout << "true" << endl;
//         else
//             cout << "false" << endl;
//     }
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// private:
//     bool dpcheck(vector<int>&nums, vector<vector<int>> &dp,int sum, int index){                  //  Partition Equal Subset Sum
//         if(sum == 0) return true; 
//         if(index == 0) return sum==nums[index];

//         if(dp[index][sum] != -1) return dp[index][sum];
//         bool notcount = dpcheck(nums,dp,sum,index-1);
//         bool count = false;
//         if(nums[index] <= sum){
//             count = dpcheck(nums,dp,sum-nums[index],index-1);
//         } 
//         return dp[index][sum] = count || notcount;
//     }
// public:
//     bool canPartition(vector<int>& nums) {
//         int sum = 0;
//         for(auto it : nums) sum += it;
//         if(sum%2 != 0) return false;
//         int newsum = sum/2;

//         vector<vector<int>> dp(nums.size(),vector<int>(newsum+1,-1));
//         return dpcheck(nums,dp,newsum,nums.size()-1);
//     }
// };
// int main(){
//     int n,x;
//     cin>>n;
//     vector<int> nums;
//     for(int i=0; i<n; i++){
//         cin>>x;
//         nums.push_back(x);
//     }    
//     Solution s;
//     cout<<s.canPartition(nums);
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// int minSubsetSumDifference(vector<int>& nums, int n){
// 	    int sum = 0;
//         for(auto it : nums) sum += it;

//         vector<vector<bool>> dp(n,vector<bool>(sum+1,false));

//         for(int i=0; i<n; i++) dp[i][0] = true;

//         if(nums[0] <= sum) dp[0][nums[0]] = true;
        
//         for(int i=1; i<n; i++){
//             for(int j=1; j<=sum; j++){
//                 bool notcount = false; bool count = false;
                
//                 notcount = dp[i-1][j];

//                 if(nums[i] <= j){
//                     count = dp[i-1][j-nums[i]];
//                 }
//                 dp[i][j] = count || notcount;
//             }
//         }

//         int ans = INT_MAX;
//         for(int i=0; i<=sum/2; i++){
//             if(dp[n-1][i] == true){
//                 ans = min(ans,abs((sum-i)-i));
//             }
//         }
//         return ans;
// }
// int main(){
//     int n,x;
//     cin>>n;
//     vector<int> nums;
//     for(int i=0; i<n; i++){
//         cin>>x;
//         nums.push_back(x);
//     }    
//     cout<<minSubsetSumDifference(nums,n);
//     return 0;
// }






// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// // private:
// //     void dpcheck(int index,int n,vector<int>& nums,vector<int> temp,set<int> &ans){
// //         if(index == n){
// //             int sum = 0;
// //             for(auto it : temp) sum += it;
// //             ans.insert(sum);
// //             return;
// //         }
// //         temp.push_back(nums[index]);
// //         dpcheck(index+1,n,nums,temp,ans);
// //         temp.pop_back();
// //         dpcheck(index+1,n,nums,temp,ans);
// //     }
// private:
//     bool dpcheck(int index,vector<int> &nums,int sum,vector<vector<int>> &dp){                     //  using memoization top-down  
//         if(sum == 0) return true;
//         if(index == 0 ) return sum == nums[0];
        
//         if(dp[index][sum] != -1) return dp[index][sum];
        
//         bool notcount = dpcheck(index-1,nums,sum,dp);
        
//         bool count = false;
//         if(sum >= nums[index])
//         count = dpcheck(index-1,nums,sum-nums[index],dp);
        
//         return dp[index][sum] = count || notcount;
//     }
// public:
// 	vector<int> DistinctSum(vector<int>nums){
	  
// 	   // set<int> ans; int n = nums.size();
// 	   // vector<int> temp;
// 	   // dpcheck(0,n,nums,temp,ans);
// 	   // vector<int> v;
// 	   // for(auto it : ans) v.push_back(it);
// 	   // return v;
	   
// 	   int n = nums.size(); int sum = 0;
// 	   for(auto it : nums) sum += it;
// 	   vector<vector<int>> dp(n,vector<int>(sum+1,-1));
// 	   vector<int> ans;
	
// 	   for(int i=0; i<=sum; i++){
// 	       if(dpcheck(n-1,nums,i,dp) == true){
// 	           ans.push_back(i);
// 	       }
// 	   }
// 	   return ans;
// 	}
// };
// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		int n;
// 		cin >> n;
// 		vector<int>nums(n);
// 		for(int i = 0; i < n; i++)cin >> nums[i];
// 		Solution obj;
// 		vector<int> ans = obj.DistinctSum(nums);
// 		for(auto i: ans)cout << i << " ";
// 		cout << "\n";
	
// cout << "~" << "\n";
// }
// 	return 0;
// }







// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
// private:
// int mod = 1e9+7;
// int dpcheck(int index,int nums[],vector<vector<int>> &dp,int k){
// 	if(index == 0) {
// 		if(k == 0 && nums[0] == 0) return 2;
// 		if(k == 0 || nums[0] == k) return 1;
// 		return 0;
// 	}

// 	if(dp[index][k] != -1) return dp[index][k];
// 	int notcount = dpcheck(index-1,nums,dp,k);
// 	int count = 0;
// 	if(nums[index] <= k){
// 		count = dpcheck(index-1,nums,dp,k-nums[index]);
// 	}
// 	return dp[index][k] = (count + notcount)%mod;
// }
// 	public:
// 	int perfectSum(int arr[], int n, int sum)
// 	{
         
// 	    vector<vector<int>> dp(n,vector<int> (sum+1,-1));
// 	    return dpcheck(n-1,arr,dp,sum);
// 	}
	  
// };
// int main() 
// {
//    	int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, sum;

//         cin >> n >> sum;

//         int a[n];
//         for(int i = 0; i < n; i++)
//         	cin >> a[i];

// 	    Solution ob;
// 	    cout << ob.perfectSum(a, n, sum) << "\n";   
    
// cout << "~" << "\n";
// }
//     return 0;
// }








// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   int mod = 1e9+7;
//   private:
//     int dpcheck(int index, vector<int> &nums, int sum, vector<vector<int>> &dp) {                    
//         if (index == 0) {
//             if (sum == 0 && nums[0] == 0) return 2; 
//             if (sum == 0 || sum == nums[0]) return 1; 
//             return 0;
//         }
        
//         if (dp[index][sum] != -1) return dp[index][sum];
        
//         int notcount = dpcheck(index - 1, nums, sum, dp) % mod;
        
//         int count = 0;
//         if (sum >= nums[index])
//             count = dpcheck(index - 1, nums, sum - nums[index], dp) % mod;
        
//         return dp[index][sum] = (count + notcount) % mod;
//     }

//   public:
//     int countPartitions(int n, int d, vector<int>& arr) {
//         int sum = accumulate(arr.begin(), arr.end(), 0);
        
//         if((sum - d) % 2 != 0 || (sum - d) < 0) return 0;
//         int newsum = (sum - d) / 2;
        
//         vector<vector<int>> dp(n, vector<int>(newsum + 1, -1));
//         return dpcheck(n - 1, arr, newsum, dp);
//     } 
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, d;
//         cin >> n >> d;
//         vector<int> arr;

//         for (int i = 0; i < n; ++i) {
//             int x;
//             cin >> x;
//             arr.push_back(x);
//         }

//         Solution obj;
//         cout << obj.countPartitions(n, d, arr) << "\n";
    
// cout << "~" << "\n";
// }
//     return 0;
// }





// #include <bits/stdc++.h> 
// using namespace std;

// int dpcheck(int index,vector<int> weight, vector<int> value,int maxWeight,vector<vector<int>> &dp){

//     if(index == 0) return weight[0] <= maxWeight ? value[0] : 0;
    
//     if(dp[index][maxWeight] != -1) return dp[index][maxWeight];
//     int notcount = dpcheck(index-1,weight,value,maxWeight,dp);
//     int count = INT_MIN;
//     if(weight[index] <= maxWeight){
//         count = value[index] + dpcheck(index-1,weight,value,maxWeight-weight[index],dp);
//     } 
//     return dp[index][maxWeight] = max(count,notcount);
// }
// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
// {
// 	vector<vector<int>> dp(n,vector<int>(maxWeight+1,0));
//     // return dpcheck(n-1,weight,value,maxWeight,dp);                            // using memoization (top - down)

    // for(int j = weight[0]; j <= maxWeight; j++) {dp[0][j] = value[0];}          // using tabulation (bottom - up)

    // for(int i=1; i<n; i++){
    //     for(int j=0; j<=maxWeight; j++){
    //         int notcount = 0 + dp[i-1][j];
    //         int count = INT_MIN;
    //         if (weight[i] <= j) {
    //             count = value[i] + dp[i-1][j-weight[i]];
    //         }
    //         dp[i][j] = max(count,notcount);
    //     }
    // }
    // return dp[n-1][maxWeight];
// }
// int main(){
//     int n;
//     cin>>n;
//     int x;
//     vector<int> weight,value;
//     for(int i=0; i<n; i++){
//         cin>>x;
//         weight.push_back(x);
//     }
//     int y;
//     for(int i=0; i<n; i++){
//         cin>>y;
//         value.push_back(y);
//     }
//     int maxWeight;
//     cin>>maxWeight;

//     cout<<knapsack(weight,value,n,maxWeight);

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
// private:
// int dpcheck(int index,vector<int> weight, vector<int> value,int maxWeight,vector<vector<int>> &dp){

//     if(index == 0) return weight[0] <= maxWeight ? value[0] : 0;
    
//     if(dp[index][maxWeight] != -1) return dp[index][maxWeight];
//     int notcount = dpcheck(index-1,weight,value,maxWeight,dp);
//     int count = INT_MIN;
//     if(weight[index] <= maxWeight){
//         count = value[index] + dpcheck(index-1,weight,value,maxWeight-weight[index],dp);
//     } 
//     return dp[index][maxWeight] = max(count,notcount);
// }
//   public:
//     // Function to return max value that can be put in knapsack of capacity.
//     int knapSack(int maxWeight, vector<int> &value, vector<int> &weight) {
//         int n = value.size();
//         vector<vector<int>> dp(n,vector<int> (maxWeight+1,0));
//         // return dpcheck(n,weight,value,maxWeight,dp);
        
//     for(int j = weight[0]; j <= maxWeight; j++) {dp[0][j] = value[0];}          
//     for(int i=1; i<n; i++){
//         for(int j=0; j<=maxWeight; j++){
//             int notcount = 0 + dp[i-1][j];
//             int count = INT_MIN;
//             if (weight[i] <= j) {
//                 count = value[i] + dp[i-1][j-weight[i]];
//             }
//             dp[i][j] = max(count,notcount);
//         }
//     }
//     return dp[n-1][maxWeight];
//     }
// };

// int main() {
//     // Taking total test cases
//     int testCases;
//     cin >> testCases;
//     cin.ignore();
//     while (testCases--) {
//         // Reading number of items and capacity
//         int numberOfItems, capacity;
//         vector<int> weights, values;
//         string input;
//         int number;

//         // Read capacity and number of items
//         getline(cin, input);
//         stringstream ss(input);
//         ss >> capacity;      // The first number is the capacity
//         ss >> numberOfItems; // The second number is the number of items

//         // Read values
//         getline(cin, input);
//         ss.clear();
//         ss.str(input);
//         while (ss >> number) {
//             values.push_back(number);
//         }

//         // Read weights
//         getline(cin, input);
//         ss.clear();
//         ss.str(input);
//         while (ss >> number) {
//             weights.push_back(number);
//         }

//         Solution solution;
//         cout << solution.knapSack(capacity, values, weights) << endl;
//         cout << "~" << endl;
//     }
//     return 0;
// }



 


// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// private:
//     int dpcheck(int index,vector<int> &nums,int amount,vector<vector<int>>&dp){                      // using memoization (top - down)
//         if(index == 0){
//             if(amount%nums[0] == 0) return amount/nums[0];
//             return 1e9;
//         }
//         if(dp[index][amount] != -1) return dp[index][amount];
//         int notcount = 0 + dpcheck(index-1,nums,amount,dp);
//         int count = INT_MAX;
//         if(nums[index] <= amount){
//             count = 1 + dpcheck(index,nums,amount-nums[index],dp);
//         }
//         return dp[index][amount] = min(count,notcount);
//     }
// public:
//     int coinChange(vector<int>& nums, int amount) {
//         int n = nums.size();
//         vector<vector<int>> dp(n,vector<int>(amount+1,-1));

//         int ans = dpcheck(n-1,nums,amount,dp);
//         if(ans >= 1e9) return -1;
//         return ans;
//     }
// };
// int main(){
//     int n;
//     cin>>n;
//     int x; vector<int> nums;
//     for(int i=0; i<n; i++){
//         cin>>x;
//         nums.push_back(x);
//     }
//     int amount;
//     cin>>amount;
//     Solution s;
//     cout<<s.coinChange(nums,amount);
//     return 0;
// }






// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// private:
//     int dpcheck(int index,vector<int> &nums,int amount,vector<vector<int>> &dp){
//         if(index == 0){
//             if(amount%nums[0] == 0) return 1;
//             else return 0;
//         }
//         if(dp[index][amount] != -1) return dp[index][amount];
//         int notcount = dpcheck(index-1,nums,amount,dp);
//         int count = 0;
//         if(nums[index] <= amount){
//             count = dpcheck(index,nums,amount-nums[index],dp);
//         }
//         return dp[index][amount] = notcount + count;
//     }
// public:
//     int change(int amount, vector<int>& coins) {
//         int n = coins.size(); 
//         vector<vector<int>> dp(n,vector<int>(amount+1,-1));
//         return dpcheck(n-1,coins,amount,dp);
//     }
// };
// int main(){
//     int n;
//     cin>>n;
//     int x; vector<int> nums;
//     for(int i=0; i<n; i++){
//         cin>>x;
//         nums.push_back(x);
//     }
//     int amount;
//     cin>>amount;
//     Solution s;
//     cout<<s.change(amount,nums);
//     return 0;
// }



 


// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// private:
//     int dpcheck(int index, vector<int> &nums, int sum, vector<vector<int>> &dp) {                    
//         if (index == 0) {
//             if (sum == 0 && nums[0] == 0) return 2; 
//             if (sum == 0 || sum == nums[0]) return 1; 
//             return 0;
//         }
//         if (dp[index][sum] != -1) return dp[index][sum];
//         int notcount = dpcheck(index - 1, nums, sum, dp);
//         int count = 0;
//         if (sum >= nums[index])
//             count = dpcheck(index - 1, nums, sum - nums[index], dp);   
//         return dp[index][sum] = (count + notcount);
//     }
// public:
//     int findTargetSumWays(vector<int>& nums, int target) {
//         int sum = 0;
//         for(auto it : nums) sum += it;

//         if((sum-target)%2 != 0 || sum < target) return 0;

//         int newsum = (sum-target)/2;
//         int n = nums.size();

//         vector<vector<int>> dp(n,vector<int>(newsum+1,-1));
//         return dpcheck(n-1,nums,newsum,dp);
//     }
// };
// int main(){
//     int n;
//     cin>>n;
//     int x; vector<int> nums;
//     for(int i=0; i<n; i++){
//         cin>>x;
//         nums.push_back(x);
//     }
//     int target;
//     cin>>target;
//     Solution s;
//     cout<<s.findTargetSumWays(nums,target);
//     return 0;
// }



 




// #include <bits/stdc++.h>
// using namespace std;
// class Solution{
// private:
//     int dpcheck(int index,int val[], int wt[], int W,vector<vector<int>> dp){
//         if(index == 0){
//             return (W/wt[0])*val[0];
//         }
//         if(dp[index][W] != -1) return dp[index][W];
        
//         int notcount = 0 + dpcheck(index-1,val,wt,W,dp);
//         int count = INT_MIN;
//         if(wt[index] <= W){
//             count = val[index] + dpcheck(index,val,wt,W-wt[index],dp);
//         }
//         return dp[index][W] = max(count,notcount);
//     }
// public:
//     int knapSack(int N, int W, int val[], int wt[])
//     {
//         vector<vector<int>> dp(N,vector<int>(W+1,0));
//         // return dpcheck(N-1,val,wt,W,dp);
        
//         for(int j=wt[0]; j<=W; j++) {dp[0][j] = (j/wt[0]) * val[0];}
        
//         for(int i=1; i<N; i++){
//             for(int j=0; j<=W; j++){
//                 int notcount = 0 + dp[i-1][j];
//                 int count = INT_MIN;
//                 if(wt[i] <= j){
//                     count = val[i] + dp[i][j-wt[i]];
//                 }
//                 dp[i][j] = max(count,notcount);
//             }
//         }
//         return dp[N-1][W];
//     }
// };
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int N, W;
//         cin>>N>>W;
//         int val[N], wt[N];
//         for(int i = 0;i < N;i++)
//             cin>>val[i];
//         for(int i = 0;i < N;i++)
//             cin>>wt[i];
        
//         Solution ob;
//         cout<<ob.knapSack(N, W, val, wt)<<endl;
    
// cout << "~" << "\n";
// }
//     return 0;
// }






// #include <bits/stdc++.h>
// using namespace std;
// class Solution{
//   private:
//     int dpcheck(int index,int price[],vector<vector<int>> &dp,int n){
//         if(index == 0){
//             return n*price[0];
//         }
//         if(dp[index][n] != -1) return dp[index][n];
        
//         int notcount = 0 + dpcheck(index-1,price,dp,n);
//         int count = INT_MIN;
//         if(index+1 <= n){
//             count = price[index] + dpcheck(index,price,dp,n-(index+1));
//         }
//         return dp[index][n] = max(count,notcount);
//     }
//   public:
//     int cutRod(int price[], int n) {
//         vector<vector<int>> dp(n,vector<int> (n+1,-1));
//         return dpcheck(n-1,price,dp,n);
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++) 
//             cin >> a[i];
            
//         Solution ob;

//         cout << ob.cutRod(a, n) << endl;
    
// cout << "~" << "\n";
// }
//     return 0;
// }









// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// private:
//     int dpcheck(int i, int target, vector<int> &nums, vector<vector<int>> &dp){
//         if(target == 0){
//             return 0;
//         }
//         if(i < 0) return INT_MIN;
//         if(dp[i][target] != -1) return dp[i][target];
//         int notcount = 0 + dpcheck(i-1,target,nums,dp);
//         int count = INT_MIN;
//         if(nums[i] <= target){
//             count = 1 + dpcheck(i-1,target-nums[i],nums,dp);
//         }
//         return dp[i][target] = max(count,notcount);
//     }
// public:
//     int lengthOfLongestSubsequence(vector<int>& nums, int target) {
//         int n = nums.size();
//         vector<vector<int>>dp (n , vector<int> (target+1,-1));
//         int ans = dpcheck(n-1,target,nums,dp);
//         return ans < 0 ? -1 : ans;
//     }
// };
// int main(){
//     int n;
//     cin>>n;
//     int x; vector<int> nums;
//     for(int i=0; i<n; i++){
//         cin>>x;
//         nums.push_back(x);
//     }
//     int target;
//     cin>>target;
//     Solution s;
//     cout<<s.lengthOfLongestSubsequence(nums,target);
//     return 0;
// }
