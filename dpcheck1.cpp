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





class Solution {
private:
    bool dpcheck(vector<int>&nums, vector<vector<int>> &dp,int sum, int index){                  //  Partition Equal Subset Sum
        if(sum == 0) return true; 
        if(index == 0) return sum==nums[index];

        if(dp[index][sum] != -1) return dp[index][sum];
        bool notcount = dpcheck(nums,dp,sum,index-1);
        bool count = false;
        if(nums[index] <= sum){
            count = dpcheck(nums,dp,sum-nums[index],index-1);
        } 
        return dp[index][sum] = count || notcount;
    }
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(auto it : nums) sum += it;
        if(sum%2 != 0) return false;
        int newsum = sum/2;

        vector<vector<int>> dp(nums.size(),vector<int>(newsum+1,-1));
        return dpcheck(nums,dp,newsum,nums.size()-1);
    }
};






int minSubsetSumDifference(vector<int>& nums, int n)
{
	    int sum = 0;
        for(auto it : nums) sum += it;

        vector<vector<bool>> dp(n,vector<bool>(sum+1,false));

        for(int i=0; i<n; i++) dp[i][0] = true;

        if(nums[0] <= sum) dp[0][nums[0]] = true;
        
        for(int i=1; i<n; i++){
            for(int j=1; j<=sum; j++){
                bool notcount = false; bool count = false;
                
                notcount = dp[i-1][j];

                if(nums[i] <= j){
                    count = dp[i-1][j-nums[i]];
                }
                dp[i][j] = count || notcount;
            }
        }

        int ans = INT_MAX;
        for(int i=0; i<=sum/2; i++){
            if(dp[n-1][i] == true){
                ans = min(ans,abs((sum-i)-i));
            }
        }
        return ans;
}










#include<bits/stdc++.h>
using namespace std;

class Solution {
// private:
//     void dpcheck(int index,int n,vector<int>& nums,vector<int> temp,set<int> &ans){
//         if(index == n){
//             int sum = 0;
//             for(auto it : temp) sum += it;
//             ans.insert(sum);
//             return;
//         }
//         temp.push_back(nums[index]);
//         dpcheck(index+1,n,nums,temp,ans);
//         temp.pop_back();
//         dpcheck(index+1,n,nums,temp,ans);
//     }
private:
    bool dpcheck(int index,vector<int> &nums,int sum,vector<vector<int>> &dp){                     //  using memoization top-down  
        if(sum == 0) return true;
        if(index == 0 ) return sum == nums[0];
        
        if(dp[index][sum] != -1) return dp[index][sum];
        
        bool notcount = dpcheck(index-1,nums,sum,dp);
        
        bool count = false;
        if(sum >= nums[index])
        count = dpcheck(index-1,nums,sum-nums[index],dp);
        
        return dp[index][sum] = count || notcount;
    }
public:
	vector<int> DistinctSum(vector<int>nums){
	  
	   // set<int> ans; int n = nums.size();
	   // vector<int> temp;
	   // dpcheck(0,n,nums,temp,ans);
	   // vector<int> v;
	   // for(auto it : ans) v.push_back(it);
	   // return v;
	   
	   int n = nums.size(); int sum = 0;
	   for(auto it : nums) sum += it;
	   vector<vector<int>> dp(n,vector<int>(sum+1,-1));
	   vector<int> ans;
	
	   for(int i=0; i<=sum; i++){
	       if(dpcheck(n-1,nums,i,dp) == true){
	           ans.push_back(i);
	       }
	   }
	   return ans;
	}
};
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int> ans = obj.DistinctSum(nums);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	
cout << "~" << "\n";
}
	return 0;
}







//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
private:
int mod = 1e9+7;
int dpcheck(int index,int nums[],vector<vector<int>> &dp,int k){
	if(index == 0) {
		if(k == 0 && nums[0] == 0) return 2;
		if(k == 0 || nums[0] == k) return 1;
		return 0;
	}

	if(dp[index][k] != -1) return dp[index][k];
	int notcount = dpcheck(index-1,nums,dp,k);
	int count = 0;
	if(nums[index] <= k){
		count = dpcheck(index-1,nums,dp,k-nums[index]);
	}
	return dp[index][k] = (count + notcount)%mod;
}
	public:
	int perfectSum(int arr[], int n, int sum)
	{
         
	    vector<vector<int>> dp(n,vector<int> (sum+1,-1));
	    return dpcheck(n-1,arr,dp,sum);
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends







//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  int mod = 1e9+7;
  private:
    int dpcheck(int index, vector<int> &nums, int sum, vector<vector<int>> &dp) {                    
        if (index == 0) {
            if (sum == 0 && nums[0] == 0) return 2; 
            if (sum == 0 || sum == nums[0]) return 1; 
            return 0;
        }
        
        if (dp[index][sum] != -1) return dp[index][sum];
        
        int notcount = dpcheck(index - 1, nums, sum, dp) % mod;
        
        int count = 0;
        if (sum >= nums[index])
            count = dpcheck(index - 1, nums, sum - nums[index], dp) % mod;
        
        return dp[index][sum] = (count + notcount) % mod;
    }

  public:
    int countPartitions(int n, int d, vector<int>& arr) {
        int sum = accumulate(arr.begin(), arr.end(), 0);
        
        if((sum - d) % 2 != 0 || (sum - d) < 0) return 0;
        int newsum = (sum - d) / 2;
        
        vector<vector<int>> dp(n, vector<int>(newsum + 1, -1));
        return dpcheck(n - 1, arr, newsum, dp);
    } 
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends