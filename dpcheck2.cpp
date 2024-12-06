// check that the subsequence of the t is exist in s

// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// private:
//     bool dpcheck(string &s, int i, int j, string &t) {
//         if (j < 0) return true;  
//         if (i < 0) return false; 

//         if (s[i] == t[j]) {
//             return dpcheck(s, i - 1, j - 1, t); 
//         }
//         return dpcheck(s, i - 1, j, t);
//     }

// public:
//     int numMatchingSubseq(string s, string t) {
//         int count = 0;
//         int n = s.size(); int m = t.size();

//         // for (int i = 0; i < words.size(); i++) {
//         //     string temp = words[i];
//         //     int m = temp.size();
//         //     if (dpcheck(s, n - 1, m - 1, temp)) {
//         //         count++;
//         //     }
//         // }

//         return dpcheck(s,n-1,m-1,t);
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string str1, str2;
//         cin >> str1 >> str2; 
//         Solution1 ob;
//         cout << ob.numMatchingSubseq(str1, str2) << endl;
// cout << "~" << "\n";
// }
//     return 0;
// }


// #include <bits/stdc++.h>
// const int mod = 1e9 + 7;
// using namespace std;

// class Solution1 {
// private:
//     int dpcheck(int i,int j,string nums1,string nums2,vector<vector<int>> &dp){    // memoization (top-down)
//         if(i < 0 || j < 0) return 0;
//         if(dp[i][j] != -1) return dp[i][j];

//         if(nums1[i] == nums2[j]){
//             return (1 + dpcheck(i-1,j-1,nums1,nums2,dp));
//         }
//         return max(dpcheck(i-1,j,nums1,nums2,dp),dpcheck(i,j-1,nums1,nums2,dp));
//     }
// public:
//     int longestCommonSubsequence(string text1, string text2) {
//         int n = text1.size(); int m = text2.size();
//         vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
//         return dpcheck(n-1,m-1,text1,text2,dp);
//     }
// };

// class Solution2 {
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
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string str1, str2;
//         cin >> str1 >> str2; 
//         Solution1 ob;
//         cout << ob.longestCommonSubsequence(str1, str2) << endl;
    
// cout << "~" << "\n";
// }
//     return 0;
// }






// #include <bits/stdc++.h>
// const int mod = 1e9 + 7;
// using namespace std;

// class Solution {
//     int dpcheck(int i,int j,string nums1,string nums2,vector<vector<int>> &dp){    
//         if(i < 0 || j < 0) return 0;
//         if(dp[i][j] != -1) return dp[i][j];

//         if(nums1[i] == nums2[j]){
//             return (1 + dpcheck(i-1,j-1,nums1,nums2,dp));
//         }
//         return max(dpcheck(i-1,j,nums1,nums2,dp),dpcheck(i,j-1,nums1,nums2,dp));
//     }
//     // Function to find the length of longest common subsequence in two strings.
//     public:
//     int lcs(int n, int m, string str1, string str2) {
//         // your code here
//         vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= m; j++) {
//                 if (str1[i - 1] == str2[j - 1]) {
//                     dp[i][j] = 1 + dp[i - 1][j - 1];
//                 } else {
//                     dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//                 }
//             }
//         }
//         return dp[n][m];
//     }
// };
// int main() {
//     int t, n, m;
//     cin >> t;
//     while (t--) {
//         cin >> n >> m; 
//         string str1, str2;
//         cin >> str1 >> str2;
//         Solution ob;
//         cout << ob.lcs(n, m, str1, str2) << endl;
    
// cout << "~" << "\n";
// }
//     return 0;
// }






// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//     //Function to find length of shortest common supersequence of two strings.
//     int shortestCommonSupersequence(string str1, string str2, int n, int m)
//     {
//         vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= m; j++) {
//                 if (str1[i - 1] == str2[j - 1]) {
//                     dp[i][j] = 1 + dp[i - 1][j - 1];
//                 } else {
//                     dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//                 }
//             }
//         }
//         return n+m - dp[n][m];
//     }
// };
// int main()
// {    
//     int t; 
//     cin >> t;
//     while(t--){
//     string X, Y;
// 	cin >> X >> Y;
	
// 	Solution obj;
// 	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    
// cout << "~" << "\n";
// }
// 	return 0;
// }






// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   private:
//   void dpcheck(string &s1,string &s2, int n, int m, vector<vector<int>> &dp, set<string> &result, 
//   string current , unordered_map<string ,bool> & mapp){
//     if (n == 0 || m == 0) {
//         reverse(current.begin(), current.end());
//         if (!current.empty() && current.size() == dp[s1.size()][s2.size()])
//             result.insert(current);
//         return;
//     }
    
//     string key = to_string(n) + "," + to_string(m) + "," + current;
//     if(mapp.find(key) != mapp.end()) return;
//     mapp[key] = true;
        
        
//     if (s1[n-1] == s2[m-1]) {
//         current.push_back(s1[n-1]);
//         dpcheck(s1, s2, n-1, m-1, dp, result, current,mapp);
//         current.pop_back();
//     } else {
//         if (dp[n-1][m] == dp[n][m]) 
//             dpcheck(s1, s2, n-1, m, dp, result, current,mapp);
//         if (dp[n][m-1] == dp[n][m])
//             dpcheck(s1, s2, n, m-1, dp, result, current,mapp);
//     }
// }
//   public:
//     vector<string> all_longest_common_subsequences(string s1, string s2) {
//         int n = s1.size(); int m = s2.size();
//         vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        
//         for(int i=0; i<=n; i++) dp[i][0] = 0;
//         for(int j=0; j<=m; j++) dp[0][j] = 0;
        
//         for(int i=1; i<=n; i++){
//             for(int j=1; j<=m; j++){
//                 if(s1[i-1] == s2[j-1]){
//                     dp[i][j] = 1 + dp[i-1][j-1];
//                 }
//                 else{
//                     dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
//                 }
//             }
//         }
//         set<string> sans;
//         unordered_map<string ,bool> mapp;
//         dpcheck(s1,s2,n,m,dp,sans,"",mapp);
        
//         vector<string> ans;
//         for(auto it : sans) ans.push_back(it);
        
//         return ans;
//     }
// };
// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         string s, t;
//         cin >> s >> t;
//         Solution ob;
//         vector<string> ans = ob.all_longest_common_subsequences(s, t);
//         for (auto i : ans)
//             cout << i << " ";
//         cout << "\n";
//         cout << "~" << endl;
//     }
//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;

// void lcs(string s1, string s2) {
//   int n = s1.size(); int m = s2.size();

//   vector<vector<int>>dp(n+1,vector<int> (m + 1, 0));
//   for (int i = 0; i <= n; i++) {dp[i][0] = 0;}
//   for (int i = 0; i <= m; i++) {dp[0][i] = 0;}

//   for (int ind1 = 1; ind1 <= n; ind1++) {
//     for (int ind2 = 1; ind2 <= m; ind2++) {
//       if (s1[ind1 - 1] == s2[ind2 - 1])
//         dp[ind1][ind2] = 1 + dp[ind1 - 1][ind2 - 1];
//       else
//         dp[ind1][ind2] = 0 + max(dp[ind1 - 1][ind2], dp[ind1][ind2 - 1]);
//     }
//   }

//   int len = dp[n][m];
//   int i = n;
//   int j = m;

//   int index = len - 1;
//   string str = "";
//   for (int k = 1; k <= len; k++) {
//     str += "$"; 
//   }

//   while (i > 0 && j > 0) {
//     if (s1[i - 1] == s2[j - 1]) {
//       str[index] = s1[i - 1];
//       index--;
//       i--;
//       j--;
//     } else if (s1[i - 1] > s2[j - 1]) {
//       i--;
//     } else j--;
//   }
//   cout << str;
// }

// int main() {

//   string s1 = "abcde";
//   string s2 = "bdgek";

//   cout << "The Longest Common Subsequence is ";
//   lcs(s1, s2);
// }






// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     int longestCommonSubstr(string s1, string s2) {
//         int n = s1.size(); int m = s2.size();
//         vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        
//         for(int i=0; i<=n; i++) dp[i][0] = 0;
//         for(int j=0; j<=m; j++) dp[0][j] = 0;
//         int ans = 0;
        
//         for(int i=1; i<=n; i++){
//             for(int j=1; j<=m; j++){
//                 if(s1[i-1] == s2[j-1]){
//                     dp[i][j] = 1 + dp[i-1][j-1];
//                     ans = max(ans,dp[i][j]);
//                 }
//                 else{
//                     dp[i][j] = 0;
//                 }
//             }
//         }
//         return ans;
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string s1, s2;
//         cin >> s1 >> s2;
//         Solution ob;
//         cout << ob.longestCommonSubstr(s1, s2) << endl;
//         cout << "~"
//              << "\n";
//     }
// }







// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// private:
//     int dpcheck(int i, int j,string s, vector<vector<int>> &dp,int n){           // memoization
//         if(i < 0 || j > n-1){
//             return 0;
//         }
//         if(dp[i][j] != -1) return dp[i][j];
//         if(s[i] == s[j]){
//             return dp[i][j] = 1 + dpcheck(i-1,j+1,s,dp,n); 
//         }
//         else{
//             return dp[i][j] = 0 + max(dpcheck(i-1,j,s,dp,n),dpcheck(i,j+1,s,dp,n));
//         }
//     }
// public:
//     int longestPalindromeSubseq(string s) {
//         int n = s.size();
//         vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
//         return dpcheck(n-1,0,s,dp,n);
//     }
// };
// int main()
// {
//     int t; cin >> t;
//     while (t--){
//         string s; cin >> s;
//         Solution ob;
//         cout << ob.longestPalindromeSubseq(s) << endl;
//        cout << "~" << "\n";
//     }
// }






// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
// private:
//     int dpcheck(int i, int j,string s, vector<vector<int>> &dp,int n){  
//         if(i < 0 || j > n-1){
//             return 0;
//         }
//         if(dp[i][j] != -1) return dp[i][j];
//         if(s[i] == s[j]){
//             return dp[i][j] = 1 + dpcheck(i-1,j+1,s,dp,n); 
//         }
//         else{
//             return dp[i][j] = 0 + max(dpcheck(i-1,j,s,dp,n),dpcheck(i,j+1,s,dp,n));
//         }
//     }
//   public:
//     int longestPalinSubseq(string s) {
//         int n = s.size();
//         vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
//         return dpcheck(n-1,0,s,dp,n);
//     }
// };
// int32_t main()
// {
//     int t; cin >> t;
//     while (t--)
//     {
//         string s; cin >> s;
//         Solution ob;
//         cout << ob.longestPalinSubseq(s) << endl;
    
// cout << "~" << "\n";
// }
// }





// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// private:
//     int longestCommonSubsequence(string text1, string text2) {
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
// public:
//     int longestPalindromeSubseq(string s) {
        
//         string news = s;
//         reverse(news.begin(),news.end());
//         return longestCommonSubsequence(s,news);
        
//     }
// };
// int main()
// {
//     int t; cin >> t;
//     while (t--){
//         string s; cin >> s;
//         Solution ob;
//         cout << ob.longestPalindromeSubseq(s) << endl;
//        cout << "~" << "\n";
//     }
// }





// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// private:
//     int longestCommonSubsequence(string text1, string text2) {
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
// public:
//     int minDistance(string word1, string word2) {
//         int longestcommon = longestCommonSubsequence(word1,word2);
//         int add = (word2.size() - longestcommon);
//         int sub = (word1.size() - longestcommon);

//         return (add + sub);
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string str1, str2;
//         cin >> str1 >> str2; 
//         Solution ob;
//         cout << ob.minDistance(str1, str2) << endl; 
// cout << "~" << "\n";
// }
//     return 0;
// }





// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// private:
//     int longestCommonSubsequence(string text1, string text2) {
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
// public:
//     int minDistance(string word1, string word2) {
//         int longestcommon = longestCommonSubsequence(word1,word2);
//         int add = (word2.size() - longestcommon);
//         int sub = (word1.size() - longestcommon);

//         return (add + sub);
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string str1, str2;
//         cin >> str1 >> str2; 
//         Solution ob;
//         cout << ob.minDistance(str1, str2) << endl; 
// cout << "~" << "\n";
// }
//     return 0;
// }






// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     string shortestCommonSupersequence(string text1, string text2) {
//         int n = text1.size(); int m = text2.size();
//         vector<vector<int>> dp(n+1,vector<int>(m+1,0));

//         for(int i=0;i<n+1;i++){
//             for(int j=0;j<m+1;j++){
//                 if(i == 0 || j == 0){
//                     dp[i][j] = 0; continue;
//                 }
//                 if(text1[i-1] == text2[j-1]){
//                     dp[i][j] = 1 + dp[i-1][j-1];
//                 }else{
//                     dp[i][j] = 0 + max(dp[i-1][j],dp[i][j-1]);
//                 }
//             }
//         }
//         string ans = "";

//         int i = n; int j = m;  
//         while(i > 0 && j > 0){
//             if(text1[i-1] == text2[j-1]){
//                 ans += text1[i-1];
//                 i--; j--;
//             }
//             else if(dp[i-1][j] > dp[i][j-1]){
//                 ans += text1[i-1]; 
//                 i--;
//             }
//             else{
//                 ans += text2[j-1];
//                 j--;
//             }
//         }  
//         while(i > 0){
//             ans += text1[i-1]; i--;
//         }
//         while(j > 0){
//             ans += text2[j-1]; j--;
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string str1, str2;
//         cin >> str1 >> str2; 
//         Solution ob;
//         cout << ob.shortestCommonSupersequence(str1, str2) << endl; 
// cout << "~" << "\n";
// }
//     return 0;
// }







// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// private:
//     int mod = 1e9 + 7;
//     int dpcheck(int i, int j, string &s, string &t, vector<vector<int>> &dp){
//         if(j == 0) return 1;
//         if(i == 0) return 0;

//         if(dp[i][j] != -1) return dp[i][j];

//         if(s[i-1] == t[j-1]){
//             return dp[i][j] = (dpcheck(i-1,j-1,s,t,dp) + dpcheck(i-1,j,s,t,dp))%mod;
//         }else{
//             return dp[i][j] = dpcheck(i-1,j,s,t,dp);
//         }
//     }
// public:
//     int numDistinct(string s, string t) {
//         int n = s.size(); int m = t.size();
//         vector<vector<int>> dp(n+1,vector<int> (m+1,0));
//         // return dpcheck(n,m,s,t,dp);
//         for(int i=0; i<n; i++) {dp[i][0] = 1;}
//         for(int j=1; j<m; j++) {dp[0][j] = 0;}

//         for(int i=1; i<=n; i++){
//             for(int j=1; j<=m; j++){
//                 if(s[i-1] == t[j-1]){
//                     dp[i][j] = (dp[i-1][j-1] + dp[i-1][j])%mod;
//                 }else{
//                     dp[i][j] = dp[i-1][j];
//                 }
//             }
//         }
//         return dp[n][m];
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string str1, str2;
//         cin >> str1 >> str2; 
//         Solution ob;
//         cout << ob.numDistinct(str1, str2) << endl; 
// cout << "~" << "\n";
// }
//     return 0;
// }







// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// private:
//     int dpcheck(int i, int j, string &s, string & t, vector<vector<int>> &dp){
//         if(i == 0) return j;
//         if(j == 0) return i;

//         if(dp[i][j] != -1) return dp[i][j];
//         if(s[i-1] == t[j-1]){
//             return dp[i][j] = 0 + dpcheck(i-1,j-1,s,t,dp);
//         }else{
//             return dp[i][j] = 1 + min({dpcheck(i-1,j-1,s,t,dp),dpcheck(i-1,j,s,t,dp),dpcheck(i,j-1,s,t,dp)});
//         }
//     }
// public:
//     int minDistance(string word1, string word2) {
//         int n = word1.size(); int m = word2.size(); 
//         vector<vector<int>> dp(n+1,vector<int> (m+1,0));

//         // return dpcheck(n,m,word1,word2,dp);
//         for(int i=0; i<=n; i++) dp[i][0] = i; 
//         for(int j=0; j<=m; j++) dp[0][j] = j;

//         for(int i=1; i<=n; i++){
//             for(int j=1; j<=m; j++){
//                 if(word1[i-1] == word2[j-1]){
//                     dp[i][j] = 0 + dp[i-1][j-1];
//                 }else{
//                     dp[i][j] = 1 + min({dp[i-1][j-1],dp[i-1][j],dp[i][j-1]});
//                 }
//             }
//         }
//         return dp[n][m];
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string str1, str2;
//         cin >> str1 >> str2; 
//         Solution ob;
//         cout << ob.minDistance(str1, str2) << endl; 
// cout << "~" << "\n";
// }
//     return 0;
// }






// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// private:
//     bool dpcheck(int i, int j, string &s, string &t,vector<vector<int>>&dp){
//         if(i == 0 && j == 0) return true;
//         if(i == 0) return false;
//         if(j == 0){
//             for(int x=1; x<=i; x++){
//                 if(s[x-1] != '*') return false;
//             }
//             return true;
//         }
//         if(dp[i][j] !=  -1) return dp[i][j];

//         if(s[i-1] == t[j-1] || s[i-1] == '?'){
//             return dp[i][j] = dpcheck(i-1,j-1,s,t,dp);
//         }else if(s[i-1] == '*'){
//             return dp[i][j] = dpcheck(i,j-1,s,t,dp) || dpcheck(i-1,j,s,t,dp);
//         }
//         return false;
//     }
// public:
//     bool isMatch(string s, string p) {
//         int m = s.size(); 
//         int n = p.size();
//         vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
//         return dpcheck(n,m,p,s,dp);
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string str1, str2;
//         cin >> str1 >> str2; 
//         Solution ob;
//         cout << ob.isMatch(str1, str2) << endl; 
// cout << "~" << "\n";
// }
//     return 0;
// }





// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     int dp[21][31];
//     bool func(int i,int j,string &s,string &p){
//         if(dp[i][j] != -1) return dp[i][j];
//         if(i >= s.size()){
//             if(j == p.size()) return dp[i][j] = true;
//             if(j + 1 < p.size() && p[j + 1] == '*') return dp[i][j] = func(i,j + 2,s,p);
//             return dp[i][j] = false;
//         }
//         else if(j == p.size()) return dp[i][j] = false;
//         bool match = (s[i] == p[j] || p[j] == '.');
//         bool ans = false;
//         if(match){
//             if(j + 1 < p.size() && p[j + 1] == '*') ans = func(i+1,j,s,p);
//             if(!ans) ans = func(i + 1,j + 1,s,p);
//         }
//         if(!ans && j + 1 < p.size() && p[j + 1] == '*') ans = func(i,j + 2,s,p);
//         return dp[i][j] = ans;
//     }
//     bool isMatch(string s, string p) {
//         memset(dp,-1,sizeof dp);
//         return func(0,0,s,p);
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string str1, str2;
//         cin >> str1 >> str2; 
//         Solution ob;
//         cout << ob.isMatch(str1, str2) << endl; 
// cout << "~" << "\n";
// }
//     return 0;
// }