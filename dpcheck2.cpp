// class Solution {
// public:
//     int longestCommonSubsequence(string text1, string text2) {                 // tabulation (bottom-up)
//         int n = text1.size(); int m = text2.size();

//         vector<vector<int>> dp(n+1,vector<int>(m+1));

//         for(int i=0;i<n+1;i++){
//             for(int j=0;j<m+1;j++){
//                 if(i == 0 || j == 0){
//                     dp[i][j] = 0; continue;
//                 }
//                 if(text1[i-1] == text2[j-1]){
//                     dp[i][j] = 1 + dp[i-1][j-1];
//                 }else{
//                     dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
//                 }
//             }
//         }
//         return dp[n][m];
//     }
// };



class Solution {
private:
    int dpcheck(int i,int j,string nums1,string nums2,vector<vector<int>> &dp){    // memoization (top-down)
        if(i < 0 || j < 0) return 0;
        if(dp[i][j] != -1) return dp[i][j];

        if(nums1[i] == nums2[j]){
            return (1 + dpcheck(i-1,j-1,nums1,nums2,dp));
        }
        return max(dpcheck(i-1,j,nums1,nums2,dp),dpcheck(i,j-1,nums1,nums2,dp));
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size(); int m = text2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        return dpcheck(n-1,m-1,text1,text2,dp);
    }
};