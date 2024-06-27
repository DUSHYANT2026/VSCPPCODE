// #include<bits/stdc++.h>
// using namespace std;
// int fab(int n, vector<int> &dp){
// if(n<=1) return n;
// if(dp[n] != -1) return dp[n];
// return dp[n] = fab(n-1,dp) + fab(n-2,dp); }
// int main(){
// int n;
// cin>>n;
// vector<int> dp(n+1,-1);
// cout<<"FABONACCI CONVERT RECURSION TO DP CALLED MEMOIZATION: "<<fab(n,dp)<<endl;
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// if(n<=1) return n;
// vector<int> dp(n+1,-1);
// dp[0]=0;
// dp[1]=1;
// for(int i=2;i<=n;i++){
// dp[i]=dp[i-1]+dp[i-2]; }
// cout<<"FABONACCI CONVERT USING TABULATION :"<<dp[n]<<endl;
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// if(n<=1) return n;
// vector<int> dp(n+1,-1);
// dp[0]=0;
// dp[1]=1;
// dp[2]=1;
// for(int i=3;i<=n;i++){
// dp[i]=dp[i-1]+dp[i-2]+dp[i-3]; }
// cout<<"TRIBONACCI CONVERT USING TABULATION :"<<dp[n]<<endl;
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// int minCostClimbingStairs(vector<int>& cost) {
// int n=cost.size();
// vector<int> dp(n+2,0);
// for(int i=n-1;i>=0;i--){
// dp[i]=cost[i]+min(dp[i+1],dp[i+2]);  }
// return min(dp[0],dp[1]);  }
// int main(){
// int n,x;
// cin>>n;
// vector<int> nums;
// for(int i=0;i<n;i++){
// cin>>x;
// nums.push_back(x);}
// cout<<minCostClimbingStairs(nums)<<endl;
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// int dpsolve(int n, vector<int> &heights,vector<int> &dp){
//     if(n == 0) return 0;
//     if(dp[n] != -1) return dp[n];
//     int left= dpsolve(n-1, heights, dp) +abs(heights[n] - heights[n-1]);
//     int right=INT_MAX;
//     if(n>1)
//     right= dpsolve(n-2, heights, dp) +abs(heights[n] - heights[n-2]);
//     return dp[n]=min(left,right);
// }
// int main(){
// int n,x;
// cin>>n;
// vector<int> nums;
// for(int i=0;i<n;i++){
// cin>>x;
// nums.push_back(x);}
// vector<int> dp(n+1,-1);
// cout<<"FROG JUMPE USING DP MEMOIZATION:  "<<dpsolve(n-1,nums,dp)<<endl;
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// int frogJump(int n, vector<int> &heights)
// {
//     vector<int> dp(n+1,-1);
//     dp[0]=0;

//     for(int i=1;i<n;i++){
//         int onestep = dp[i-1] + abs(heights[i]-heights[i-1]);
//         int twostep = INT_MAX;
//         if(i>1) twostep = dp[i-2] + abs(heights[i]-heights[i-2]);
//         dp[i] = min(onestep,twostep);
//     }
//     return dp[n-1];
// }
// int main(){
// int n,x;
// cin>>n;
// vector<int> nums;
// for(int i=0;i<n;i++){
// cin>>x;
// nums.push_back(x);}
// cout<<"FROG JUMPE USING DP TABULATION:  "<<frogJump(n,nums)<<endl;
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// int dpsolve(int n,vector<int> & height,vector<int> &dp,int k){
//     if(n == 0) return 0;
//     if( dp[n] != -1) return dp[n];
//     int minstep=INT_MAX;
//     for(int j=1;j<=k;j++){
//         if(n-j >= 0){
//             int kstep=dpsolve(n-j, height, dp, k) + abs(height[n] - height[n-j]);
//             minstep=min(minstep,kstep);
//         }
//     }
//     return dp[n]=minstep;
// }
// int main(){
// int n,x,k;
// cin>>n;
// vector<int> nums;
// for(int i=0;i<n;i++){
// cin>>x;
// nums.push_back(x);}
// cout<<"ENTER THE DISTANCE:"<<endl;
// cin>>k;
// vector<int> dp(n+1 ,-1);
// cout<<"FROG JUMPE WITH K DISTANCE USING DP MEMOIZATION:  "<<dpsolve(n-1,nums,dp,k)<<endl;
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// int dpsolve(int n,vector<int> & height,vector<int> &dp,int k){
//     dp[0]=0;
//     for(int i=0;i<n;i++){
//         int minstep=INT_MAX;
//         for(int j=1;j<=k;j++){
//             if(i-j >= 0){
//                 int kstep=dp[i-j] + abs(height[i] - height[i-j]);
//                 minstep=min(minstep,kstep);
//             }
//         }
//         dp[i]=minstep;
//     }
//     return dp[n-1];
// }
// int main(){
// int n,x,k;
// cin>>n;
// vector<int> nums;
// for(int i=0;i<n;i++){
// cin>>x;
// nums.push_back(x);}
// cout<<"ENTER THE DISTANCE:"<<endl;
// cin>>k;
// vector<int> dp(n+1 ,-1);
// cout<<"FROG JUMPE WITH K DISTANCE USING DP TABULATION:  "<<dpsolve(n-1,nums,dp,k)<<endl;
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// int  dpsolve(int index ,vector<int> &nums,vector<int> &dp){
//     if(index < 0) return 0;
//     if(index == 0) return nums[index];
//     if(dp[index] != -1) return dp[index];
//     int pick= nums[index] + dpsolve(index - 2, nums, dp);
//     int notpick = 0 + dpsolve(index -1, nums, dp);
//     return dp[index] =  max(pick,notpick);
// }
// int main(){
// int n,x;
// cin>>n;
// vector<int> nums;
// for(int i=0;i<n;i++){
// cin>>x;
// nums.push_back(x);}
// vector<int> dp(n,-1);
// cout<<"HOUSE ROBBER: / MAX SUM OF NON ADJ ELEMENTS: USING MEMOIZATION: "<<dpsolve(n-1,nums,dp)<<endl;
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// int dpsolve(vector<int>& temp) {
//     int n = temp.size();
//     vector<int> dp(n);;
//     dp[0] = temp[0];
//     int neg = 0;
//     for(int i =1;i<n;i++)
//     {
//         int take = temp[i];
//         if(i>1) take += dp[i-2];
//         int nottake = 0 + dp[i-1];
//         dp[i] = max(take,nottake);
//     }
//     return dp[n-1];
// }
// int main(){
// int n,x;
// cin>>n;
// vector<int> nums;
// for(int i=0;i<n;i++){
// cin>>x;
// nums.push_back(x);}
// cout<<"HOUSE ROBBER: / MAX SUM OF NON ADJ ELEMENTS: USING TABULATION: "<<dpsolve(nums)<<endl;
// return 0;}


#include<bits/stdc++.h>
using namespace std;
int dpsolve(vector<int>& temp) {
    int n = temp.size();
    vector<int> dp(n);;
    dp[0] = temp[0]; 
    int neg = 0;
    for(int i =1;i<n;i++)
    {
        int take = temp[i];
        if(i>1) take += dp[i-2];
        int nottake = 0 + dp[i-1];
        dp[i] = max(take,nottake);
    }
    return dp[n-1];
}
int main(){
int n,x;
cin>>n;
vector<int> nums;
for(int i=0;i<n;i++){
cin>>x;
nums.push_back(x);}
cout<<"HOUSE ROBBER: / MAX SUM OF NON ADJ ELEMENTS: AND FIRST AND LAST ELEMENT ARE ALSO ADJCENT USING TABULATION: "<<endl;
vector<int> nums1,nums2;
for(int i=0;i<n;i++){
    if(i != 0) nums1.push_back(nums[i]);
    if(i != n-1) nums2.push_back(nums[i]);
}
int ans= max(dpsolve(nums1) ,dpsolve(nums2));
cout<<ans<<endl;
return 0;}

