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





#include<bits/stdc++.h>
using namespace std;

int climbStairs1(int n) {
    if(n <= 1) return 1;   // using recursion(time limit)
    return climbStairs1(n-1) + climbStairs1(n-2);
}

int climbStairs2(int n) {           // using memoization (memory limit)
    vector<int> nums(n+1,-1); 

    if(n <= 1) return 1;
    if(nums[n] != -1) return nums[n];

    return nums[n] = climbStairs2(n-1) + climbStairs2(n-2);
}

int climbStairs3(int n) {          // using tabulation
    vector<int> dp(n+1,-1);
    dp[0] = 1;  dp[1] = 1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int climbStairs4(int n) {              // optimized space complexcity
    if(n == 1) return 1;
    int ans = 0;  int first = 1;  int second = 1;

    for(int i=2;i<=n;i++){
        ans = first + second;
        second = first;
        first = ans;
    }
    return ans;
}
int main(){
    int n;
    cout<<"ENTER THE NUMBER "<< endl; cin>>n;
    
    cout<<climbStairs1(n);
    return 0;
}