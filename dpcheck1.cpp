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
//     bool dpcheck(int index,vector<int> &nums,int sum,vector<vector<int>> &dp){                     //  using mappization top-down  
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

