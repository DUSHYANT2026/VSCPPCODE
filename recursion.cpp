#include<iostream>
#include<vector>
using namespace std;
int factorial(int n){
if(n<=1)
return n;
return (n*factorial(n-1));}
int sumofnaturalnumber(int n){
if(n<=1)
return n;
return (n+sumofnaturalnumber(n-1));}
int fabonacci(int n){
if(n<=1) return n;
return fabonacci(n-1)+fabonacci(n-2);}
int main(){
int n;
cout<<"ENTER THE NUMBER:"<<endl;
cin>>n;
cout<<factorial(n)<<endl;
cout<<sumofnaturalnumber(n)<<endl;
cout<<fabonacci(n)<<endl;
vector<int> ans;
for(int i=1; i<=n; i++){
    ans.push_back(fabonacci(i));
}
for(auto it : ans) cout<<it<<endl;
return 0;}



// #include<bits/stdc++.h>
// using namespace std;
// void recusrion(int index,int n,vector<int> &v,vector<int> &nums,vector<vector<int>> &ans){
//     if(n == index){
//         ans.push_back(v); return;
//     }
//     v.push_back(nums[index]);
//     recusrion(index+1,n,v,nums,ans);
//     v.pop_back();
//     recusrion(index+1,n,v,nums,ans);
// }
// int main(){
// int n,x;
// cin>>n;
// vector<int> nums;
// for(int i=0;i<n;i++){
// cin>>x;
// nums.push_back(x);}
// vector<vector<int>> ans;
// vector<int> v;
// cout<<"ALL POSSIBLE SUBSQUENCES / SUBSET IN ARRAY USING RECURSION:"<<endl;
// recusrion(0,n,v,nums,ans);
// for (auto it : ans) {
//     cout << "[ ";
//     for (auto num : it) {
//         cout << num << " ";
//     }
//     cout << "]" << endl;
// }
// return 0;}



// #include<bits/stdc++.h>
// using namespace std;
// void recusrion(int index,int n,vector<int> &v,vector<int> &nums,vector<vector<int>> &ans){
//     if(n == index){
//         ans.push_back(v); return;
//     }
//     recusrion(index+1,n,v,nums,ans);
//     v.push_back(nums[index]);
//     recusrion(index+1,n,v,nums,ans);
//     v.pop_back();
// }
// int main(){
// int n,x;
// cin>>n;
// vector<int> nums;
// for(int i=0;i<n;i++){
// cin>>x;
// nums.push_back(x);}
// vector<vector<int>> ans;
// vector<int> v;
// cout<<"ALL POSSIBLE SUBSET USING RECURSION:"<<endl;
// recusrion(0,n,v,nums,ans);
// for (auto it : ans) {
//     cout << "[ ";
//     for (auto num : it) {
//         cout << num << " ";
//     }
//     cout << "]" << endl;
// }
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// void recursion(int index,int n,vector<int> &v,vector<int>& nums,
// vector<vector<int>> &ans){
//     ans.push_back(v);
//     for(int i=index;i<n;++i){
//         if(i> index && nums[i] == nums[i-1]){
//             continue;
//         }
//         v.push_back(nums[i]);
//         recursion(i+1,n,v,nums,ans);
//         v.pop_back();
//     }
// }
// int main(){
// int n,x;
// cin>>n;
// vector<int> nums;
// for(int i=0;i<n;i++){
// cin>>x;
// nums.push_back(x);}
// vector<vector<int>> ans;
// vector<int> v;
// cout<<"ALL POSSIBLE SUBSET USING RECURSION: BUT REMOVE THE DUPLICATE:"<<endl;
// sort(nums.begin(),nums.end());
// recursion(0,n,v,nums,ans);
// for (auto it : ans) {
//     cout << "[ ";
//     for (auto num : it) {
//         cout << num << " ";
//     }
//     cout << "]" << endl;
// }
// return 0;}


// void recursion(int index,int n,vector<int> &nums,vector<int> &ds,
//    long long k,long long sum,vector<vector<int>> & ans){
//        if(index == n ){
//          if (sum == k) {
//            ans.push_back(ds);
//          }
//          return;
//        }
//        ds.push_back(nums[index]);
//        sum += nums[index];
//        recursion(index + 1, n, nums, ds, k, sum, ans);
//        ds.pop_back();
//        sum -= nums[index];
//        recursion(index + 1, n, nums, ds, k, sum, ans);
//    }
// vector<vector<int>> subarraysWithSumK(vector<int> a, long long k) {
//     vector<vector<int>> ans;
//     vector<int> ds;
//     int n=a.size();
//     recursion(0,n,a,ds,k,0,ans);
//     return ans;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int resolve(int n, vector<int> &height){
// if(n == 0) return n;
// int left=resolve(n-1,height) + abs(height[n] - height[n-1]);
// int right=INT_MAX;
// if(n>1){
//     right=resolve(n-2,height) + abs(height[n] - height[n-2]);}
// return min(left,right); }
// int main(){
// int n,x;
// cin>>n;
// vector<int> nums;
// for(int i=0;i<n;i++){
// cin>>x;
// nums.push_back(x);}
// cout<<"FROG JUMPE USING RECURSION:  "<<resolve(n-1,nums)<<endl;
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// int resolve(int n, vector<int> &height,int &k){
//     if(n == 0) return n;
//     int minstep=INT_MAX;
//     for(int i=1;i<=k;i++){
//         if(n-i >= 0){
//             int kstep=resolve(n-i, height, k) + abs(height[n] - height[n-i]);
//             minstep=min(minstep,kstep);
//         }
//     }
//     return minstep;
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
// cout<<"FROG JUMPE WITH K DISTANCE USING RECURSION:  "<<resolve(n-1,nums,k)<<endl;
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// int  recur(int index ,vector<int> &nums){
//     if(index < 0) return 0;
//     if(index == 0) return nums[index];
//     int pick= nums[index] + recur(index - 2, nums);
//     int notpick = 0 + recur(index -1, nums);
//     return max(pick,notpick);
// }
// int main(){
// int n,x;
// cin>>n;
// vector<int> nums;
// for(int i=0;i<n;i++){
// cin>>x;
// nums.push_back(x);}
// cout<<"HOUSE ROBBER: / MAX SUM OF NON ADJ ELEMENTS: "<<recur(n-1,nums)<<endl;
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> recurcheck(int indx,vector<int> &nums,int target){
//     vector<vector<int>> ans;
//     vector<int> ds;
//     int n=nums.size();
//     if(indx == n){
//         if(target == 0){
//             ans.push_back(ds);
//         }
//         return ans;
//     }
//     if(nums[indx] <=  target){
//     ds.push_back(nums[indx]);
//     recurcheck(indx,nums,target-nums[indx]);
//     ds.pop_back();
//     }
//     recurcheck(indx+1,nums,target-nums[indx]);
//     return ans;
// }
// int main(){
// int n,x;
// cin>>n;
// vector<int> nums;
// for(int i=0;i<n;i++){
// cin>>x;
// nums.push_back(x);}
// int target;
// cout<<"ENTER THE SUM  OT TARGET: FOR THAT YOU WANT A SUBSET:"<<endl;
// cin>>target;
// cout<<"COMBINATION SUM FIRST "<<endl;
// vector<vector<int>> ans = recurcheck(0,nums,target);
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> recurcheck(int indx,vector<int> &nums,int target){
//     vector<vector<int>> ans;
//     vector<int> ds;
//     int n=nums.size();
//     if(target == 0){
//         ans.push_back(ds);
//         return ans;
//     }
//     for(int i=indx;i<nums.size();i++){
//         if(i > indx && nums[i] == nums[i-1]) continue;
//         if(nums[i] <= target){
//             ds.push_back(nums[i]);
//             recurcheck(i+1,nums,target-nums[i]);
//             ds.pop_back();
//         }
//     }
//     return ans;
// }
// int main(){
// int n,x;
// cin>>n;
// vector<int> nums;
// for(int i=0;i<n;i++){
// cin>>x;
// nums.push_back(x);}
// int target;
// cout<<"ENTER THE SUM  OT TARGET: FOR THAT YOU WANT A SUBSET:"<<endl;
// cin>>target;
// cout<<"COMBINATION SUM II NO REPETION OF SAME NUMBER : "<<endl;
// vector<vector<int>> ans = recurcheck(0,nums,target);
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> recurcheck(int indx,int n,int k){
//     vector<vector<int>> ans;
//     vector<int> ds;
//     vector<int> nums;
//     for(int i=1;i<=9;i++){
//         nums.push_back(i);
//     }
//     if(n < 0 || indx > 9 && k == 0){
//         if(n == 0 &&  k == 0){
//             ans.push_back(ds);
//         }
//         return ans;
//     }
//     ds.push_back(nums[indx]);
//     recurcheck(indx+1,n-nums[indx],k-1);
//     ds.pop_back();
//     recurcheck(indx+1,n,k);
//     return ans;
// }
// int main(){
// int n,k;
// cout<<"ENTER THE SUM OR TARGET:"<<endl;
// cin>>n;
// cout<<"COMBINATION OF NUMBER FOR TARGET:"<<endl;
// cin>>k;
// cout<<"COMBINATION SUM III COMBINATION OF K NUMBER THAT SUM UP N : "<<endl;
// vector<vector<int>> ans = recurcheck(0,n,k);
// return 0;}

  

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> recurcheck(int indx,int sum,vector<int> &nums){
//     vector<int> ds;
//     int n=nums.size();
//     if(indx == n){
//         ds.push_back(sum);
//         return ds;
//     }
//     recurcheck(indx+1,sum+nums[indx],nums);
//     recurcheck(indx+1,sum,nums);
//     return ds;
// }
// int main(){
// int n,x,k;
// cin>>n;
// vector<int> nums;
// for(int i=0;i<n;i++){
// cin>>x;
// nums.push_back(x);}
// vector<int> ans = recurcheck(0,0,nums);
// sort(ans.begin(),ans.end());
// for(int i=0;i<ans.size();i++){
//     cout<<ans[i] <<" ";
// }
// return 0;}
