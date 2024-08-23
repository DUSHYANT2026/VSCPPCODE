

    // string result = "";
    // for (int i = 0; i < input.size(); ++i) {
    //     int shift = (i % 2 == 0) ? 1 : -1;
    //     result += shiftChar(input[i], shift);
    // }
    // return result;




TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
TreeNode* insertLevelOrder(const vector<int>& vec, int index, int n) {
    if (index >= n) return NULL;

    TreeNode* root = new TreeNode(vec[index]);

    root->left = insertLevelOrder(vec, 2 * index + 1, n);
    root->right = insertLevelOrder(vec, 2 * index + 2, n);

    return root;
}
int maxEvenLevels(TreeNode* root) {
    if (!root) return 0;

    queue<TreeNode*> q;
    q.push(root);
    int maxcount = 0;
    int count = 0;

    while (!q.empty()) {
        int size = q.size();
        bool allEven = true;

        for (int i = 0; i < size; ++i) {
            TreeNode* node = q.front();
            q.pop();
            if (node->val % 2 != 0) {
                allEven = false;
            }
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        if (allEven) {
            count++;
            maxcount = max(maxcount, count);
        } else {
            count = 0; 
        }
    }
    return maxcount;
}
int newNode(vector<int> & list ) {
    TreeNode* node = new TreeNode(0);
    node = insertLevelOrder(list , 0, list.size());
    int ans = maxEvenLevels(node);
    return ans;
}






SELECT emp_name
FROM employee
WHERE emp_id != manager_id;
