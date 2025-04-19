*/
class Solution {
    private:
        void dfscheck(TreeNode* root, vector<int> &nums){
            if(root == NULL) return;
            dfscheck(root->left,nums);
            nums.push_back(root->val);
            dfscheck(root->right,nums);
        }
    // int findceil(vector<int> &nums, int temp){
    //     int ans = -1;
    //     int minCeil = INT_MAX;
    //     for(auto it : nums){
    //         if(it >= temp && it < minCeil){
    //             minCeil = it;
    //             ans = it;
    //         }
    //     }
    //     return ans;
    // }
    
    // int findfloor(vector<int> &nums, int temp){
    //     int ans = -1;
    //     int maxFloor = INT_MIN;
    //     for(auto it : nums){
    //         if(it <= temp && it > maxFloor){
    //             maxFloor = it;
    //             ans = it;
    //         }
    //     }
    //     return ans;
    // }
    
    int findfloor(const vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int floor = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                return nums[mid];
            }
            else if (nums[mid] < target) {
                floor = nums[mid];
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        
        return floor;
    }
    int findceil(const vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int ceil = INT_MAX;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                return nums[mid];
            }
            else if (nums[mid] > target) {
                ceil = nums[mid];
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        
        return ceil;
    }
    
    // int findceil(vector<int> &nums, int temp) {
    //     auto it = lower_bound(nums.begin(), nums.end(), temp);
    //     return it != nums.end() ? *it : -1;
    // }
    
    // int findfloor(vector<int> &nums, int temp) {
    //     auto it = upper_bound(nums.begin(), nums.end(), temp);
    //     return it != nums.begin() ? *(it - 1) : -1;
    // }
    
    public:
        vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
            vector<vector<int>> ans;
            if(root == NULL) return ans;
            vector<int> nums;
            dfscheck(root,nums);
    
            for(auto it : queries){
                int x = findceil(nums,it);
                if(x == INT_MAX) x = -1;
                ans.push_back({findfloor(nums,it),x});
            }
            return ans;
        }
    };