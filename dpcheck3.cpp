class Solution {
private:
    int dpcheck(int n, int index, int preindex, vector<int> &nums, vector<vector<int>> &dp){
        if(index == n) {
            return 0;
        }
        if(dp[index][preindex + 1] != -1) return dp[index][preindex + 1];

        int notcount = dpcheck(n, index + 1, preindex, nums, dp);
        int count = 0;
        if (preindex == -1 || nums[index] > nums[preindex]) {
            count = 1 + dpcheck(n, index + 1, index, nums, dp);
        }
        dp[index][preindex + 1] = max(count, notcount);
        return dp[index][preindex + 1];
    }
    
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));
        return dpcheck(n, 0, -1, nums, dp);
    }
};




class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

        for (int i = n - 1; i >= 0; i--) {
            for (int j = i - 1; j >= -1; j--) {
                int notcount = dp[i + 1][j + 1];
                int count = 0;
                if (j == -1 || nums[i] > nums[j]) {
                    count = 1 + dp[i + 1][i + 1];
                }
                dp[i][j + 1] = max(count, notcount);
            }
        }
        return dp[0][0];
    }
};




class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.empty()) {
            return 0;
        }
        int ans = 1;
        vector<int> dp(nums.size(), 1);
        for(int i=0;i<nums.size();i++) {
            for(int j=0;j<i;j++) {
                if(nums[i] > nums[j]) {
                    dp[i] = max(dp[i], dp[j]+1);
                }
            }
            ans = max(ans,dp[i]);
        }
        sort(dp.begin(),dp.end());
        return ans;
    }
};







#include <bits/stdc++.h>
using namespace std;
class Solution {
  private:
    int dpcheck(int n,int index,int preindex,vector<int> &nums,
    vector<vector<int>> &dp){
        if(index == n) return 0;
        if(dp[index][preindex+1] != -1) return dp[index][preindex+1];
        
        int notcount = 0 + dpcheck(n,index+1,preindex,nums,dp);
        int count = 0;
        if(preindex == -1 || nums[index] > nums[preindex]){
            count = 1 + dpcheck(n,index+1,index,nums,dp);
        }
        return dp[index][preindex+1] = max(count,notcount);
    }
  public:
    // Function to find length of longest increasing subsequence.
    int longestSubsequence(vector<int>& nums) {
        // int n = nums.size();
        // vector<vector<int>> dp(n,vector<int>(n+1,-1));
        // return dpcheck(n,0,-1,nums,dp);
        
        int n = nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

        for (int i = n - 1; i >= 0; i--) {
            for (int j = i - 1; j >= -1; j--) {
                int notcount = dp[i + 1][j + 1];
                int count = 0;
                if (j == -1 || nums[i] > nums[j]) {
                    count = 1 + dp[i + 1][i + 1];
                }
                dp[i][j + 1] = max(count, notcount);
            }
        }
        return dp[0][0];
    }
};
int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input

    while (t--) {
        int n;
        vector<int> arr;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            arr.push_back(num);

        Solution obj;
        cout << obj.longestSubsequence(arr) << endl;
    }

    return 0;
}






#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int maxLength(string S)
    {
        vector<int> nums;
        for(auto it : S) nums.push_back(it-'0');
        int n = nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

        for (int i = n - 1; i >= 0; i--) {
            for (int j = i - 1; j >= -1; j--) {
                int notcount = dp[i + 1][j + 1];
                int count = 0;
                if (j == -1 || nums[i] > nums[j]) {
                    count = 1 + dp[i + 1][i + 1];
                }
                dp[i][j + 1] = max(count, notcount);
            }
        }
        return dp[0][0];
    }
};
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout << ob.maxLength(S) << endl;
    
cout << "~" << "\n";
}
    return 0; 
}





#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> longestIncreasingSubsequence(int n, vector<int>& arr) {
        vector<int> dp(n,1);
        vector<int> check(n);
        int lastindex = 0; int maxi = 0;
        
        for(int i=0; i<n; i++){
            check[i] = i;
            for(int j=0; j<i; j++){
                if(arr[i] > arr[j] && dp[i] < 1 + dp[j]){
                    dp[i] = 1 + dp[j];
                    check[i] = j;
                }
            }
            if(dp[i] > maxi){
                maxi = dp[i];
                lastindex = i;
            }
        }
        vector<int> ans;
        ans.push_back(arr[lastindex]);
        
        while(check[lastindex] != lastindex){
            lastindex = check[lastindex];
            ans.push_back(arr[lastindex]);
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        vector<int> res = obj.longestIncreasingSubsequence(N, arr);
        for (auto x : res)
            cout << x << " ";
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}







#include <bits/stdc++.h>
using namespace std;
class Solution{
private:
    int dpcheck(int n,int index,int preindex,int nums[],vector<vector<int>> &dp){
        if(index == n) return 0;
        if(dp[index][preindex+1] != -1) return dp[index][preindex+1];
        
        int notcount = 0 + dpcheck(n,index+1,preindex,nums,dp);
        int count = 0;
        if(preindex == -1 || nums[index] > nums[preindex]){
            count = nums[index] + dpcheck(n,index+1,index,nums,dp);
        }
        int ans = max(count,notcount);
        return dp[index][preindex+1] = ans;
    }
public:
    //Max Sum Increasing Subsequence
	int maxSumIS(int nums[], int n){  
	    
	    vector<vector<int>> dp(n,vector<int> (n+1,-1));
	    
	    return dpcheck(n,0,-1,nums,dp);
	}  
};
int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];
	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
cout << "~" << "\n";
}
    return 0;
}






#include <bits/stdc++.h>
using namespace std;
class Solution {
  public: 
    // Maximum sum of elements not part of LIS
    int maxSumLis(int arr[], int n) {
        int totalsum = 0;
        
        vector<int> dp(n,1);
        vector<int> check(n);
        int lastindex = 0; int maxi = 1;
        
        for(int i=0; i<n; i++){
            totalsum += arr[i];
            check[i] = i;
            for(int j=0; j<i; j++){
                if(arr[i] > arr[j] && dp[i] <= 1 + dp[j]){
                    dp[i] = 1 + dp[j];
                    check[i] = j;
                }
            }
            if(dp[i] >= maxi){
                maxi = dp[i];
                lastindex = i;
            }
        }
        int ans = 0;
        ans += arr[lastindex];
        
        while(check[lastindex] != lastindex){
            lastindex = check[lastindex];
            ans += arr[lastindex];
            
        }
        return totalsum - ans;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int Arr[n];
        for (int i = 0; i < n; i++) cin >> Arr[i];
        Solution obj;
        cout << obj.maxSumLis(Arr, n) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
