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