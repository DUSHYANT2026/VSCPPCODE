// //  CONVERT A BINARY TREE INTO THE LISKED LIST OR DOUBLY LINKED LIST
// #include <bits/stdc++.h>
// using namespace std;

// // Tree Node
// struct Node {
//     int data;
//     Node* left;
//     Node* right;

//     Node()
//         : data(0)
//         , left(NULL)
//         , right(NULL) {}

//     Node(int x)
//         : data(x)
//         , left(NULL)
//         , right(NULL) {}
// };

// // Utility function to create a new Tree Node
// Node* newNode(int val) {
//     Node* temp = new Node(val);
//     return temp;
// }

// // Function to Build Tree
// Node* buildTree(string str) {
//     // Corner Case
//     if (str.length() == 0 || str[0] == 'N')
//         return NULL;

//     // Creating vector of strings from input string after splitting by space
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
//         Node* currNode = queue.front();
//         queue.pop();
//         string currVal = ip[i];

//         // If the left child is not null
//         if (currVal != "N") {
//             currNode->left = newNode(stoi(currVal));
//             queue.push(currNode->left);
//         }

//         // For the right child
//         i++;
//         if (i >= ip.size())
//             break;
//         currVal = ip[i];

//         // If the right child is not null
//         if (currVal != "N") {
//             currNode->right = newNode(stoi(currVal));
//             queue.push(currNode->right);
//         }
//         i++;
//     }

//     return root;
// }

// void printList(Node* node) {
//     Node* prev = NULL;
//     while (node != NULL) {
//         cout << node->data << " ";
//         prev = node;
//         node = node->right;
//     }
//     cout << endl;
//     while (prev != NULL) {
//         cout << prev->data << " ";
//         prev = prev->left;
//     }
//     cout << endl;
// }

// void inorder(Node* root) {
//     if (root != NULL) {
//         inorder(root->left);
//         cout << root->data;
//         inorder(root->right);
//     }
// }
//  /*
// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int x){
//         data = x;
//         left = right = NULL;
//     }
// };
//  */

// class Solution {
//   private:
//     void dfscheck(Node* root,vector<int> &nums){
//         if(root == NULL) return;
//         dfscheck(root->left,nums);
//         nums.push_back(root->data);
//         dfscheck(root->right,nums);
//     }
//   public:
//     Node* bToDLL(Node* root) {
//         vector<int> nums;
//         dfscheck(root,nums);
        
//         Node* ans = new Node(nums[0]);
//         Node* temp = ans;
//         for(int i=1; i<nums.size(); i++){
//             Node* x = new Node(nums[i]);
//             temp->left = x;
//             x->right= temp;
//             temp = x;
//         }
//         return ans;
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     getchar();

//     while (t--) {
//         string inp;
//         getline(cin, inp);
//         Node* root = buildTree(inp);

//         Solution ob;
//         Node* head = ob.bToDLL(root);
//         printList(head);
//     }
//     return 0;
// }
    






// #include <bits/stdc++.h>
// using namespace std;

// // Tree Node
// struct Node {
//     int data;
//     Node* left;
//     Node* right;

//     Node()
//         : data(0)
//         , left(NULL)
//         , right(NULL) {}

//     Node(int x)
//         : data(x)
//         , left(NULL)
//         , right(NULL) {}
// };

// // Utility function to create a new Tree Node
// Node* newNode(int val) {
//     Node* temp = new Node(val);
//     return temp;
// }

// // Function to Build Tree
// Node* buildTree(string str) {
//     // Corner Case
//     if (str.length() == 0 || str[0] == 'N')
//         return NULL;

//     // Creating vector of strings from input string after splitting by space
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
//         Node* currNode = queue.front();
//         queue.pop();
//         string currVal = ip[i];

//         // If the left child is not null
//         if (currVal != "N") {
//             currNode->left = newNode(stoi(currVal));
//             queue.push(currNode->left);
//         }

//         // For the right child
//         i++;
//         if (i >= ip.size())
//             break;
//         currVal = ip[i];

//         // If the right child is not null
//         if (currVal != "N") {
//             currNode->right = newNode(stoi(currVal));
//             queue.push(currNode->right);
//         }
//         i++;
//     }

//     return root;
// }

// void printList(Node* node) {
//     Node* prev = NULL;
//     while (node != NULL) {
//         cout << node->data << " ";
//         prev = node;
//         node = node->right;
//     }
//     cout << endl;
//     while (prev != NULL) {
//         cout << prev->data << " ";
//         prev = prev->left;
//     }
//     cout << endl;
// }

// void inorder(Node* root) {
//     if (root != NULL) {
//         inorder(root->left);
//         cout << root->data;
//         inorder(root->right);
//     }
// }

// /*
// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int x){
//         data = x;
//         left = right = NULL;
//     }
// };
// */

// class Solution {
//   private:
//     void dfscheck(Node* root,vector<int> &nums){
//         if(root == NULL) return;
//         dfscheck(root->left,nums);
//         nums.push_back(root->data);
//         dfscheck(root->right,nums);
//     }
//   public:
//     Node* bToDLL(Node* root) {
//         vector<int> nums;
//         dfscheck(root,nums);
        
//         Node* ans = new Node(0);        // convert a binary to vector then convert a vector to single linked list (binary tree to linked list)
//         Node* next = NULL;
//         Node* temp = ans;
//         for(auto it : nums){
//             temp->left = new Node(it);
//             temp = temp->left;
//         }
//         return ans->left;
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     getchar();

//     while (t--) {
//         string inp;
//         getline(cin, inp);
//         Node* root = buildTree(inp);

//         Solution ob;
//         Node* head = ob.bToDLL(root);
//         printList(head);
//     }
//     return 0;
// }







IN THIS QUESTION SPLIT VECTOR INTO K PARTS AFTER THAT CONVERTED INTO LINKED LIST
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     vector<ListNode*> splitListToParts(ListNode* head, int k) {
//         vector<int> nums;

//         while(head != NULL) {
//             nums.push_back(head->val);
//             head = head->next;
//         }

//         vector<vector<int>> ans;
//         int size = nums.size()/k;
//         int extrasize = nums.size()%k;

//         int index = 0;
//         for(int i=0; i<k; i++){
//             vector<int> temp;
//             int part = 0;
//             if(extrasize > 0){
//                 part = size + 1;
//                 extrasize--;
//             }
//             else{
//                 part = size;
//             }
//             for(int j=0; j<part; j++){
//                 temp.push_back(nums[index]);
//                 index++;
//             }
//             ans.push_back(temp);
//         }
//         vector<ListNode*> listans;
//         for(auto it : ans){
//             ListNode* newhead = new ListNode(0);
//             ListNode* temp = newhead;
//             for(auto i : it){
//                 temp->next = new ListNode(i);
//                 temp = temp->next;
//             }
//             listans.push_back(newhead->next);
//         }
//         return listans;
//     }
// };