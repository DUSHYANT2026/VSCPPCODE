#include<bits/stdc++.h>
using namespace std;
int dpcheck(int n, vector<int> &nums){
    if(n <= 1) return n;

    if(nums[n] != -1) return nums[n];
    return nums[n] = dpcheck(n-1,nums) + dpcheck(n-2,nums);
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n+1,-1);
    cout<<dpcheck(n,nums);
    return 0;
}