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






#include <bits/stdc++.h>
using namespace std;
class Solution {
  private:
  void dpcheck(string &s1,string &s2, int n, int m, vector<vector<int>> &dp, set<string> &result, 
  string current , unordered_map<string ,bool> & mapp){
    if (n == 0 || m == 0) {
        reverse(current.begin(), current.end());
        if (!current.empty() && current.size() == dp[s1.size()][s2.size()])
            result.insert(current);
        return;
    }
    
    string key = to_string(n) + "," + to_string(m) + "," + current;
    if(mapp.find(key) != mapp.end()) return;
    mapp[key] = true;
        
        
    if (s1[n-1] == s2[m-1]) {
        current.push_back(s1[n-1]);
        dpcheck(s1, s2, n-1, m-1, dp, result, current,mapp);
        current.pop_back();
    } else {
        if (dp[n-1][m] == dp[n][m]) 
            dpcheck(s1, s2, n-1, m, dp, result, current,mapp);
        if (dp[n][m-1] == dp[n][m])
            dpcheck(s1, s2, n, m-1, dp, result, current,mapp);
    }
}
  public:
    vector<string> all_longest_common_subsequences(string s1, string s2) {
        int n = s1.size(); int m = s2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        
        for(int i=0; i<=n; i++) dp[i][0] = 0;
        for(int j=0; j<=m; j++) dp[0][j] = 0;
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        set<string> sans;
        unordered_map<string ,bool> mapp;
        dpcheck(s1,s2,n,m,dp,sans,"",mapp);
        
        vector<string> ans;
        for(auto it : sans) ans.push_back(it);
        
        return ans;
    }
};
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        vector<string> ans = ob.all_longest_common_subsequences(s, t);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}




#include <bits/stdc++.h>

using namespace std;

void lcs(string s1, string s2) {
  int n = s1.size(); int m = s2.size();

  vector<vector<int>>dp(n+1,vector<int> (m + 1, 0));
  for (int i = 0; i <= n; i++) {dp[i][0] = 0;}
  for (int i = 0; i <= m; i++) {dp[0][i] = 0;}

  for (int ind1 = 1; ind1 <= n; ind1++) {
    for (int ind2 = 1; ind2 <= m; ind2++) {
      if (s1[ind1 - 1] == s2[ind2 - 1])
        dp[ind1][ind2] = 1 + dp[ind1 - 1][ind2 - 1];
      else
        dp[ind1][ind2] = 0 + max(dp[ind1 - 1][ind2], dp[ind1][ind2 - 1]);
    }
  }

  int len = dp[n][m];
  int i = n;
  int j = m;

  int index = len - 1;
  string str = "";
  for (int k = 1; k <= len; k++) {
    str += "$"; 
  }

  while (i > 0 && j > 0) {
    if (s1[i - 1] == s2[j - 1]) {
      str[index] = s1[i - 1];
      index--;
      i--;
      j--;
    } else if (s1[i - 1] > s2[j - 1]) {
      i--;
    } else j--;
  }
  cout << str;
}

int main() {

  string s1 = "abcde";
  string s2 = "bdgek";

  cout << "The Longest Common Subsequence is ";
  lcs(s1, s2);
}






#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestCommonSubstr(string s1, string s2) {
        int n = s1.size(); int m = s2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        
        for(int i=0; i<=n; i++) dp[i][0] = 0;
        for(int j=0; j<=m; j++) dp[0][j] = 0;
        int ans = 0;
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                    ans = max(ans,dp[i][j]);
                }
                else{
                    dp[i][j] = 0;
                }
            }
        }
        return ans;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr(s1, s2) << endl;

        cout << "~"
             << "\n";
    }
}