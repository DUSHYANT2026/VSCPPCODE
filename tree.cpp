// #include <bits/stdc++.h>
// using namespace std;
// #define MAX_HEIGHT 100000
// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };

// Node* newNode(int val) {
//     Node* temp = new Node;
//     temp->data = val;
//     temp->left = NULL;
//     temp->right = NULL;

//     return temp;
// }

// // Function to Build Tree
// Node* buildTree(string str) {
//     // Corner Case
//     if (str.length() == 0 || str[0] == 'N')
//         return NULL;

//     // Creating vector of strings from input
//     // string after spliting by space
//     vector<string> ip;

//     istringstream iss(str);
//     for (string str; iss >> str;)
//         ip.push_back(str);

//     // Create the root of the tree
//     Node* root = newNode(stoi(ip[0]));

//     // Push the root to the queue
//     queue<Node*> queue;
//     queue.push(root);

//     // Starting from the second element
//     int i = 1;
//     while (!queue.empty() && i < ip.size()) {

//         // Get and remove the front of the queue
//         Node* currNode = queue.front();
//         queue.pop();

//         // Get the current node's value from the string
//         string currVal = ip[i];

//         // If the left child is not null
//         if (currVal != "N") {

//             // Create the left child for the current node
//             currNode->left = newNode(stoi(currVal));

//             // Push it to the queue
//             queue.push(currNode->left);
//         }

//         // For the right child
//         i++;
//         if (i >= ip.size())
//             break;
//         currVal = ip[i];

//         // If the right child is not null
//         if (currVal != "N") {

//             // Create the right child for the current node
//             currNode->right = newNode(stoi(currVal));

//             // Push it to the queue
//             queue.push(currNode->right);
//         }
//         i++;
//     }

//     return root;
// }

// class Solution {
//   private:
//     void leftcheck(Node* root,vector<int> &ans){
//         if(root == NULL) return;
//         Node* temp = root->left;
//         while(temp != NULL){
//             if(temp->left != NULL || temp->right != NULL){
//                 ans.push_back(temp->data);
//             }
//             temp = temp->left ? temp->left : temp->right;
//         }
//     }
//     void leafcheck(Node* root,vector<int> &ans){
//         if(root == NULL) return;
//         if(root->left == NULL && root->right == NULL){
//             ans.push_back(root->data); return;
//         }
//         leafcheck(root->left,ans);
//         leafcheck(root->right,ans);
//     }
//     void rightcheck(Node* root,vector<int> &ans){
//         if(root == NULL) return;
//         vector<int> nums;
//         Node* temp = root->right;
//         while(temp != NULL){
//             if(temp->left != NULL || temp->right != NULL){
//                 nums.push_back(temp->data);
//             }
//             temp = temp->right ? temp->right : temp->left;
//         }
//         reverse(nums.begin(),nums.end());
//         for(auto it : nums) ans.push_back(it);
//     }
//   public:
//     vector<int> boundaryTraversal(Node *root) {
//         vector<int> ans;
//         ans.push_back(root->data);
//         leftcheck(root,ans);
//         if(root->left != NULL || root->right != NULL)
//             leafcheck(root,ans);
//         rightcheck(root,ans);
//         return ans;
//     }
// };

// int main() {
//     int t;
//     string tc;
//     getline(cin, tc);
//     t = stoi(tc);
//     while (t--) {
//         string s, ch;
//         getline(cin, s);
//         Node* root = buildTree(s);
//         Solution ob;
//         vector<int> ans = ob.boundaryTraversal(root);
//         for (int i : ans)
//             cout << i << " ";
//         cout << endl;
//     }
//     return 0;
// }



struct DSU {
    vector<int> parent, sz;
    DSU(int n) : parent(n), sz(n,1) {
        for (int i = 0; i < n; i++) parent[i] = i;
    }
    int checkset(int v) { return parent[v] == v ? v : (parent[v] = checkset(parent[v])); }
    void checkunioin(int a, int b) {
        a = checkset(a); b = checkset(b);
        if (a != b) {
            if (sz[a] < sz[b]) swap(a,b);
            parent[b] = a;
            sz[a] += sz[b];
        }
    }
};
class Solution {
public:
    int countcomponentes(vector<int>& nums, int lastk) {
        vector<int> tempcheck = nums;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        if (nums[0] > lastk) {
            return n;
        }
        unordered_map<int,int> mapp;
        mapp.reserve(n*2);
        mapp.max_load_factor(0.7);
        for (int i = 0; i < n; i++) {
            mapp[nums[i]] = i;
        }
        DSU dsu(n);
        for (int d = 1; d <= lastk; d++) {
            int checkbaseidx = -1;
            for (int m = d; m <= lastk; m += d) {
                auto it = mapp.find(m);
                if (it != mapp.end()) {
                    int idx = it->second;
                    if (checkbaseidx == -1) { checkbaseidx = idx;
                    } else {
                        long long a = (long long)nums[checkbaseidx], b = (long long)nums[idx];
                        long long g = gcd(a,b);
                        long long l = (a/g)*b; 
                        if (l <= lastk) {
                            dsu.checkunioin(checkbaseidx, idx);
                        }
                    }
                }
            }
        }
        unordered_set<int> mappset;
        for(int i = 0; i < n; i++){ mappset.insert(dsu.checkset(i));}
        return mappset.size();
    }
};