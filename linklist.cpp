#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class node {
public:
int data;
node* next;
node(int value){
data=value;
next = NULL;}};
  
void insertathead(node*& head, int val){
node* n = new node(val);
n->next = head;
head = n;}

void insertafter(node* head, int key, int val){
node* n = new node(val);
if (key == head->data) {
n->next = head->next;
head->next = n;
return;}
node* temp = head;
while (temp->data != key) {
temp = temp->next;
if (temp == NULL) {
return;}}
n->next = temp->next;
temp->next = n;}

void insertattail(node*& head, int val){
node* n = new node(val);
if (head == NULL) {
head = n;
return;}
node* temp = head;
while (temp->next != NULL) {
temp = temp->next;}
temp->next = n;}

void reversenode()

void print(node*& head){
node* temp = head;
while (temp != NULL) {
cout << temp->data << " -> ";
temp = temp->next;}
cout << "NULL" << endl;}
  
int main(){
node* head = NULL;
insertathead(head, 1);
insertathead(head, 2);
cout << "After insertion at head: ";
print(head);
insertattail(head, 4);
insertattail(head, 5);
cout << "After insertion at tail: ";
print(head);
insertafter(head, 1, 2);
insertafter(head, 5, 6);
cout << "After insertion at a given position: ";
print(head);
return 0;}

#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

void deleteNode(ListNode* node) {
    ListNode* nextNode = node->next;
    node->val = nextNode->val;
    node->next = nextNode->next;
    delete nextNode;
}
void printLinkedList(ListNode* head) {
    ListNode* curr = head;
    while (curr != nullptr) {
        cout << curr->val << " -> ";
        curr = curr->next;
    }
    cout << "nullptr" << endl;
}

int main() {

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original linked list: ";
    printLinkedList(head);
    ListNode* nodeToDelete = head->next->next;
    deleteNode(nodeToDelete);

    cout << "Linked list after deletion: ";
    printLinkedList(head);
    ListNode* curr = head;
    while (curr != nullptr) {
        ListNode* temp = curr;
        curr = curr->next;
        delete temp;
    }
    return 0;
}




// #include <iostream>
// #include <algorithm>
// using namespace std;
// struct TreeNode {
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}};

// int height(TreeNode* root) {
//     if (root == NULL) {
//         return 0; }
//     int left_height = height(root->left);
//     int right_height = height(root->right);
//     return max(left_height, right_height) + 1; }

// int largeheight(TreeNode* root) {
//     if (root == NULL) {
//         return 0; }
//     int leftheight = height(root->left);
//     int rightheight = height(root->right);
//     if(leftheight>rightheight)
//     return leftheight+1;
//     else 
//     return rightheight+1; }

// int main() {
//     TreeNode* root = new TreeNode(1);
//     root->left = new TreeNode(2);
//     root->right = new TreeNode(3);
//     root->left->left = new TreeNode(4);
//     root->left->right = new TreeNode(5);
//     int h = height(root);
//     int lh=largeheight(root);
//     cout << "Height of the binary tree is: " << h << endl;
//     cout<< "HEIGHT OF THE BINARY TREE IS: "<<lh<<endl;
//     return 0;}





// #include <iostream>
// #include <climits>
// using namespace std;
// struct TreeNode {
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}};

// int findSmallest(TreeNode* root) {
//     if (root == NULL) {
//         return INT_MAX;  }
//     int smallest = root->val;
//     int leftSmallest = findSmallest(root->left);
//     int rightSmallest = findSmallest(root->right);
//     if (leftSmallest < smallest) {
//         smallest = leftSmallest;}
//     if (rightSmallest < smallest) {
//         smallest = rightSmallest;}
//     return smallest; }

// void inorder(TreeNode* root){
// if(root==NULL)
// return ;
// inorder(root->left);
// cout<<root->val<<" ";
// inorder(root->right);}

// int main() {
//     TreeNode* root = new TreeNode(5);
//     root->left = new TreeNode(3);
//     root->right = new TreeNode(7);
//     root->left->left = new TreeNode(2);
//     root->left->right = new TreeNode(4);
//     root->right->left = new TreeNode(6);
//     root->right->right = new TreeNode(8);
//     root->left->right->left=new TreeNode(1);
//     cout << "Smallest element in binary tree: " << findSmallest(root) << endl;
//     cout<<"DISPLAY THE NODES IN THE TREE"<<endl;
//     inorder(root);
//     return 0;}


// #include <iostream>
// #include <climits>
// using namespace std;
// struct TreeNode {
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}};

// int findlargest(TreeNode* root) {
//     if (root == NULL) {
//         return INT_MIN;  }
//     int largest = root->val;
//     int leftlargest = findlargest(root->left);
//     int rightlargest = findlargest(root->right);
//     largest=max(largest,(leftlargest,rightlargest));
//     return largest; }

// int largestnode(TreeNode* root){
//   if(root==NULL)
//   return INT_MIN;
//   int largest=root->val;
//   int left=largestnode(root->left);
//   int right=largestnode(root->right);
//   largest=max(largest,(left,right));
//   return largest;
// }

// int smallest(TreeNode* root){
//   if(root==NULL)
//   return INT_MAX;
//   int small=root->val;
//   int left=smallest(root->left);
//   int right=smallest(root->right);
//   small=min(small,(left,right));
//   return small;
// }

// int heightoftree(TreeNode* root){
//   if(root==NULL)
//   return 0;
//   int left=heightoftree(root->left);
//   int right=heightoftree(root->right);
//   return max(left,right);
// }

// int smallheight(TreenNode* root){
//     if(root==NULL)
//     return 0;
//     int left=smallheight(root->left);
//     int right=smallheight(root->right);
//     if(left>right)
//     return right;
//     else 
//     return left;
// }

// int smallelementinbinary(TreeNode* root){
//     if(root==NULL)
//     return 0;
//     TreeNode* temp=root->left;
//     while(temp->left!=NULL){
//         temp=temp->left;
//     }
//     return temp->val;
// }

// int largeelementinbinary(TreeNode* root){
//     if(root==NULL)
//     return 0;
//     TreeNode* temp=temp->right;
//     while(temp->right!=NULL)
//     temp=temp->right;
//     return temp->val;
// }

// void inorder(TreeNode* root){
// if(root==NULL)
// return ;
// inorder(root->left);
// cout<<root->val<<" ";
// inorder(root->right);}

// int main() {
//     TreeNode* root = new TreeNode(5);
//     root->left = new TreeNode(3);
//     root->right = new TreeNode(7);
//     root->left->left = new TreeNode(2);
//     root->left->right = new TreeNode(4);
//     root->right->left = new TreeNode(6);
//     root->right->right = new TreeNode(8);
//     root->left->right->left=new TreeNode(1);
//     cout << "largest element in binary tree: " << findlargest(root) << endl;
//     cout<<"DISPLAY THE NODES IN THE TREE"<<endl;
//     inorder(root);
//     return 0;}





// #include <bits/stdc++.h>
// #include<iostream>
// using namespace std;
// struct node {
//   int data;
//   struct node * left, * right; };

// int findMaxPathSum(node * root, int & maxi) {
//   if (root == NULL) return 0;
//   int leftMaxPath = max(0, findMaxPathSum(root -> left, maxi));
//   int rightMaxPath = max(0, findMaxPathSum(root -> right, maxi));
//   int val = root -> data;
//   maxi = max(maxi, (leftMaxPath + rightMaxPath) + val);
//   return max(leftMaxPath, rightMaxPath) + val; }

// int maxPathSum(node * root) {
//   int maxi = INT_MIN;
//   findMaxPathSum(root, maxi);
//   return maxi; }

// struct node * newNode(int data) {
//   struct node * node = (struct node * ) malloc(sizeof(struct node));
//   node -> data = data;
//   node -> left = NULL;
//   node -> right = NULL;
//   return (node);}

// int main() {
//   struct node * root = newNode(-10);
//   root -> left = newNode(9);
//   root -> right = newNode(20);
//   root -> right -> left = newNode(15);
//   root -> right -> right = newNode(7);
//   int answer = maxPathSum(root);
//   cout << "The Max Path Sum for this tree is " << answer;
//   return 0; }


// #include <bits/stdc++.h>
// #include<iostream>
// using namespace std;
// struct node {
//   int data;
//   struct node * left, * right; };

// int diameteroftree(node * root, int & diameter) {
//   if (root == NULL) return 0;
//   int leftMaxPath = max(0, diameteroftree(root -> left, diameter));
//   int rightMaxPath = max(0, diameteroftree(root -> right, diameter));
//   diameter = max(diameter, (leftMaxPath + rightMaxPath) );
//   return max(leftMaxPath, rightMaxPath) + 1; }

// int diameter(node * root) {
//   int diameter = INT_MIN;
//   diameteroftree(root, diameter);
//   return diameter; }

// struct node * newNode(int data) {
//   struct node * node = (struct node * ) malloc(sizeof(struct node));
//   node -> data = data;
//   node -> left = NULL;
//   node -> right = NULL;
//   return (node);}

// int main() {
//   struct node * root = newNode(-10);
//   root -> left = newNode(9);
//   root -> right = newNode(20);
//   root -> right -> left = newNode(15);
//   root -> right -> right = newNode(7);
//   int answer = diameter(root);
//   cout << "The diameter for this tree is " << answer;
//   return 0; }



// #include <iostream>
// struct TreeNode {
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {} };

// bool hasPathSum(TreeNode* root, int targetSum) {
//     if (root == NULL)
//         return false;
//     if (root->left == nullptr && root->right == nullptr) {
//         return root->val == targetSum;}
//     int remainingSum = targetSum - root->val;
//  return hasPathSum(root->left, remainingSum) || hasPathSum(root->right, remainingSum);}

// int main() {
   
//     TreeNode* root = new TreeNode(5);
//     root->left = new TreeNode(4);
//     root->right = new TreeNode(8);
//     root->left->left = new TreeNode(11);
//     root->left->left->left = new TreeNode(7);
//     root->left->left->right = new TreeNode(2);
//     root->right->left = new TreeNode(13);
//     root->right->right = new TreeNode(4);
//     root->right->right->right = new TreeNode(1);
//     int targetSum = 22;
//     bool hasPath = hasPathSum(root, targetSum);
//     std::cout << "Path with sum " << targetSum << (hasPath ? " exists." : " does not exist.") << std::endl;
//     delete root->right->right->right;
//     delete root->right->right;
//     delete root->right->left;
//     delete root->left->left->right;
//     delete root->left->left->left;
//     delete root->left->left;
//     delete root->right;
//     delete root->left;
//     delete root;
//     return 0;}





// #include <bits/stdc++.h>
// using namespace std;
// struct node {
//   int data;
//   struct node * left, * right;
// };
// bool isLeaf(node * root) {
//   return !root -> left && !root -> right;
// }
// void addLeftBoundary(node * root, vector < int > & res) {
//   node * cur = root -> left;
//   while (cur) {
//     if (!isLeaf(cur)) res.push_back(cur -> data);
//     if (cur -> left) cur = cur -> left;
//     else cur = cur -> right;
//   }
// }
// void addRightBoundary(node * root, vector < int > & res) {
//   node * cur = root -> right;
//   vector < int > tmp;
//   while (cur) {
//     if (!isLeaf(cur)) tmp.push_back(cur -> data);
//     if (cur -> right) cur = cur -> right;
//     else cur = cur -> left;
//   }
//   for (int i = tmp.size() - 1; i >= 0; --i) {
//     res.push_back(tmp[i]);
//   }
// }

// void addLeaves(node * root, vector < int > & res) {
//   if (isLeaf(root)) {
//     res.push_back(root -> data);
//     return;
//   }
//   if (root -> left) addLeaves(root -> left, res);
//   if (root -> right) addLeaves(root -> right, res);
// }

// vector < int > printBoundary(node * root) {
//   vector < int > res;
//   if (!root) return res;

//   if (!isLeaf(root)) res.push_back(root -> data);

//   addLeftBoundary(root, res);

//   addLeaves(root, res);

//   addRightBoundary(root, res);
//   return res;
// }

// struct node * newNode(int data) {
//   struct node * node = (struct node * ) malloc(sizeof(struct node));
//   node -> data = data;
//   node -> left = NULL;
//   node -> right = NULL;

//   return (node);
// }

// int main() {

//   struct node * root = newNode(1);
//   root -> left = newNode(2);
//   root -> left -> left = newNode(3);
//   root -> left -> left -> right = newNode(4);
//   root -> left -> left -> right -> left = newNode(5);
//   root -> left -> left -> right -> right = newNode(6);
//   root -> right = newNode(7);
//   root -> right -> right = newNode(8);
//   root -> right -> right -> left = newNode(9);
//   root -> right -> right -> left -> left = newNode(10);
//   root -> right -> right -> left -> right = newNode(11);

//   vector < int > boundaryTraversal;
//   boundaryTraversal = printBoundary(root);

//   cout << "The Boundary Traversal is : ";
//   for (int i = 0; i < boundaryTraversal.size(); i++) {
//     cout << boundaryTraversal[i] << " ";
//   }
//   return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;
// struct node {
//   int data;
//   struct node * left, * right;
// };
// bool isLeaf(node * root) {
//   return !root -> left && !root -> right;
// }
// void addrightBoundary(node * root, vector < int > & nums) {
//   node * temp = root -> right;
//   while (temp) {
//     if (!isLeaf(temp)) 
//     nums.push_back(temp -> data);
//     if (temp-> right)
//      temp = temp -> right;
//     else temp = temp -> left;
//   }
// }
// void addleftBoundary(node * root, vector < int > & nums) {
//   node * temp = root -> left;
//   vector < int > res;
//   while (temp) {
//     if (!isLeaf(temp)) ;res.push_back(temp -> data);
//     if (temp -> left) temp = temp-> left;
//     else temp = temp -> right;
//   }
//   for (int i = res.size() - 1; i >= 0; --i) {
//     nums.push_back(res[i]);
//   }
// }

// void addLeaves(node * root, vector < int > & nums) {
//   if (isLeaf(root)) {
//     nums.push_back(root -> data);
//     return;
//   }
//   if (root -> right) addLeaves(root -> right, nums);
//   if (root -> left) addLeaves(root -> left, nums);
// }

// vector < int > printBoundary(node * root) {
//   vector < int > nums;
//   if (!root) return nums;

//   if (!isLeaf(root)) nums.push_back(root -> data);

//   addrightBoundary(root, nums);

//   addLeaves(root, nums);

//   addleftBoundary(root, nums);
//   return nums;
// }

// struct node * newNode(int data) {
//   struct node * node = (struct node * ) malloc(sizeof(struct node));
//   node -> data = data;
//   node -> left = NULL;
//   node -> right = NULL;
//   return (node);
// }
// int main() {
//   struct node * root = newNode(1);
//   root -> left = newNode(2);
//   root -> left -> left = newNode(3);
//   root -> left -> left -> right = newNode(4);
//   root -> left -> left -> right -> left = newNode(5);
//   root -> left -> left -> right -> right = newNode(6);
//   root -> right = newNode(7);
//   root -> right -> right = newNode(8);
//   root -> right -> right -> left = newNode(9);
//   root -> right -> right -> left -> left = newNode(10);
//   root -> right -> right -> left -> right = newNode(11);

//   vector < int > boundaryTraversal;
//   boundaryTraversal = printBoundary(root);

//   cout << "The Boundary Traversal is : ";
//   for (int i = 0; i < boundaryTraversal.size(); i++) {
//     cout << boundaryTraversal[i] << " ";
//   }
//   return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;
// struct node {
//   int data;
//   struct node * left, * right;
// };

// bool getPath(node * root, vector < int > & arr, int x) {
//   if (!root)
//     return false;
//   arr.push_back(root -> data);

//   if (root -> data == x)
//     return true;
//   if (getPath(root -> left, arr, x) || getPath(root -> right, arr, x))
//     return true;

//   arr.pop_back();
//   return false;
// }

// struct node * newNode(int data) {
//   struct node * node = (struct node * ) malloc(sizeof(struct node));
//   node -> data = data;
//   node -> left = NULL;
//   node -> right = NULL;

//   return (node);
// }
// int main() {
//   struct node * root = newNode(1);
//   root -> left = newNode(2);
//   root -> left -> left = newNode(4);
//   root -> left -> right = newNode(5);
//   root -> left -> right -> left = newNode(6);
//   root -> left -> right -> right = newNode(7);
//   root -> right = newNode(3);
//   vector < int > arr;
//   bool res;
//   res = getPath(root, arr, 7);
//   cout << "The path is ";
//   for (auto it: arr) {
//     cout << it << " ";
//   }
//   return 0;}


// #include <bits/stdc++.h>
// using namespace std;
// struct node {
//   int data;
//   struct node * left, * right;
// };
// void reorder(node * root) {
//   if (root == NULL) return;
//   int child = 0;
//   if (root -> left) {
//     child += root -> left -> data;
//   }
//   if (root -> right) {
//     child += root -> right -> data;
//   }

//   if (child < root -> data) {
//     if (root -> left) root -> left -> data = root -> data;
//     else if (root -> right) root -> right -> data = root -> data;
//   }

//   reorder(root -> left);
//   reorder(root -> right);

//   int tot = 0;
//   if (root -> left) tot += root -> left -> data;
//   if (root -> right) tot += root -> right -> data;
//   if (root -> left || root -> right) root -> data = tot;
// }
// void changeTree(node * root) {
//   reorder(root);
// }
// struct node * newNode(int data) {
//   struct node * node = (struct node * ) malloc(sizeof(struct node));
//   node -> data = data;
//   node -> left = NULL;
//   node -> right = NULL;

//   return (node);
// }
// int main() {
//   struct node * root = newNode(2);
//   root -> left = newNode(35);
//   root -> left -> left = newNode(2);
//   root -> left -> right = newNode(3);
//   root -> right = newNode(10);
//   root -> right -> left = newNode(5);
//   root -> right -> right = newNode(2);
//   changeTree(root);
//   return 0;
// }


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// void selectionsort(int n,int a[]){
// for(int i=0;i<n-1;i++){
// for(int j=i+1;j<n;j++){
// if(a[i]>a[j]){
// int temp=a[i];
// a[i]=a[j];
// a[j]=temp;}}}}

// void bubblesort(int n,int a[]){
// for(int i=0;i<n-1;i++){
// for(int j=i+1;j<n;j++){
// if(a[j]>a[j+1]){
// int temp=a[j];
// a[j]=a[j+1];
// a[j+1]=temp;}}}}

// void insertionsort1(int n,int a[]){
// for(int i=0;i<n;i++){
// for(int j=i;j>0;j--){
// if(a[j-1]>a[j]){
// int temp=a[j];
// a[j]=a[j-1];
// a[j-1]=temp;}}}}

// void insertionsort2(int n,int a[]){
// for(int i=0;i<n;i++){
// int j=i;
// while(j!=0 && a[j-1]>a[j]){
// int temp=a[j];
// a[j]=a[j-1];
// a[j-1]=temp;
// j--;}}}

// void merge(int a[],int s,int m,int e){
// int i=s;
// int j=m+1;
// int k=s;
// int temp[e-s+1];
// while(i<=m && j<=e){
// if(a[i]<a[j]){
// temp[k++]=a[i++];}
// else{
// temp[k++]=a[j++];}}
// while(i<=m){
// temp[k++]=a[i++];}
// while(j<=e){
// temp[k++]=a[j++];}
// for(int i=s;i<=e;i++)
// a[i]=temp[i];}
// void mergesort(int s,int e,int a[]){
// if(s<e){
// int m=(s+e)/2;
// mergesort(s,m,a);
// mergesort(m+1,e,a);
// merge(a,s,m,e);}}

// int partition(int a[],int s,int e){
// int povit=a[e];
// int pindex=s;
// for(int i=s;i<e;i++){
// if(a[i]<povit){
// int temp=a[i];
// a[i]=a[pindex];
// a[pindex]=temp;}}
// int temp=a[e];
// a[e]=a[pindex];
// a[pindex]=temp;
// return pindex;}
// void quicksort(int a[],int s,int e){
// if(s<e){
// int pivot=partition(a,s,e);
// quicksort(a,s,pivot-1);
// quicksort(a,pivot+1,e);}}
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF THE ARRAY:"<<endl;
// cin>>n;
// int a[n];
// cout<<"ENTER THE ELEMENTS IN THE ARRAY:"<<endl;
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"ARRAY BEFORE USING ANY SORTING ALGORITHMS:"<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// // sort(a,a+n);
// // selectionsort(n,a);
// // bubblesort(n,a);
// // insertionsort1(n,a);
// // insertionsort2(n,a);
// // mergesort(0,n-1,a);
// quicksort(a,0,n-1);
// cout<<"\nARRAY AFTER USING SORTING ALGORITHMS:"<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}







// pair<int, int> predecessorSuccessor(TreeNode *root, int key)
// {
//     TreeNode* successor=NULL;
//     TreeNode* predecessor=NULL;
//     while(root != NULL){
//         if(key>=root->data){
//             root=root->right;
//         }
//         else{
//             successor=root->data;
//             root=root->left;
//         }
//     }
//     while(root != NULL){
//         if(key<=root->data){
//             root=root->left;
//         }
//         else{
//             predecessor=root->data;
//             root=root->right;
//         }
//     }
//     return ({predecessor,successor});
// }






// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;
// #define MAX_HEIGHT 100000

// // Tree Node
// struct Node {
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };
// // Function to Build Tree
// Node* buildTree(string str)
// {
//    // Corner Case
//    if(str.length() == 0 || str[0] == 'N')
//        return NULL;

//    // Creating vector of strings from input
//    // string after spliting by space
//    vector<string> ip;

//    istringstream iss(str);
//    for(string str; iss >> str; )
//        ip.push_back(str);

//    // Create the root of the tree
//    Node* root = new Node(stoi(ip[0]));

//    // Push the root to the queue
//    queue<Node*> queue;
//    queue.push(root);

//    // Starting from the second element
//    int i = 1;
//    while(!queue.empty() && i < ip.size()) {

//        // Get and remove the front of the queue
//        Node* currNode = queue.front();
//        queue.pop();

//        // Get the current node's value from the string
//        string currVal = ip[i];

//        // If the left child is not null
//        if(currVal != "N") {

//            // Create the left child for the current node
//            currNode->left = new Node(stoi(currVal));

//            // Push it to the queue
//            queue.push(currNode->left);
//        }

//        // For the right child
//        i++;
//        if(i >= ip.size())
//            break;
//        currVal = ip[i];

//        // If the right child is not null
//        if(currVal != "N") {

//            // Create the right child for the current node
//            currNode->right = new Node(stoi(currVal));

//            // Push it to the queue
//            queue.push(currNode->right);
//        }
//        i++;
//    }

//    return root;
// }
// // } Driver Code Ends
// /*
// struct Node {
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };
// */
// class Solution
// {
//     private:
//     void inorder(Node* root,vector<int> &ans){
//         if(root == NULL) return;
//         inorder(root->left,ans);
//         ans.push_back(root->data);
//         inorder(root->right,ans);
//     } 
//     public:
//     vector<int> merge(Node *root1, Node *root2)
//     {
//        vector<int> nums1;
//        vector<int> nums2;
//        inorder(root1,nums1);
//        inorder(root2,nums2);
//         vector<int> merged;
//         // int i = 0, j = 0;
//         // while (i < nums1.size() && j < nums2.size())
//         // {
//         //     if (nums1[i] < nums2[j])
//         //         merged.push_back(nums1[i++]);
//         //     else
//         //         merged.push_back(nums2[j++]);
//         // }
//         // while (i < nums1.size())
//         //     merged.push_back(nums1[i++]);
//         // while (j < nums2.size())
//         //     merged.push_back(nums2[j++]);

//         // return merged;
//         for(auto it : nums1)
//         merged.push_back(it);
//         for(auto it: nums2)
//         merged.push_back(it);
//         sort(merged.begin(),merged.end());
//         return merged;
//     }
// };
// int main() {
//    int t;
//    string tc;
//    getline(cin, tc);
//    t=stoi(tc);
//    while(t--)
//    {
//         string s; 
//        getline(cin, s);
//        Node* root1 = buildTree(s);
//        getline(cin, s);
//        Node* root2 = buildTree(s);
//        Solution obj;
//        vector<int> vec = obj.merge(root1, root2);
//        for(int i=0;i<vec.size();i++)
//             cout << vec[i] << " ";
//         cout << endl;
//    }
//    return 0;
// }





// #include<iostream>
// using namespace std;
// struct Node
// {
//     int data;
//     struct Node *next;    
//     Node(int x)
//     {
//         data = x;
//         next = NULL;
//     }
// };
// Node* sortedMerge(struct Node* a, struct Node* b);
// void printList(struct Node *n)
// {
//     while (n!=NULL)
//     {
//         cout << n->data << " ";
//         n = n->next;
//     }
//     cout << endl;
// }
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,m;
//         cin>>n>>m;

//         int data;
//         cin>>data;
//         struct Node *head1 = new Node(data);
//         struct Node *tail1 = head1;
//         for (int i = 1; i < n; ++i)
//         {
//             cin>>data;
//             tail1->next = new Node(data);
//             tail1 = tail1->next;
//         }

//         cin>>data;
//         struct Node *head2 = new Node(data);
//         struct Node *tail2 = head2;
//         for(int i=1; i<m; i++)
//         {
//             cin>>data;
//             tail2->next = new Node(data);
//             tail2 = tail2->next;
//         }

//         Node *head = sortedMerge(head1, head2);
//         printList(head);
//     }
//     return 0;
// }
// Node* sortedMerge(Node* head1, Node* head2)  
// {  
//     if(head1 == NULL && head2 == NULL) return NULL;
//     if(head1 == NULL) return head2;
//     if(head2 == NULL) return head1;
    
//     vector<int> v1;
//     vector<int> v2;
//     Node* temp1=head1;
//     while(temp1 != NULL){
//         v1.push_back(temp1->data);
//         temp1=temp1->next;
//     }
//     Node* temp2=head2;
//     while(temp2 != NULL){
//         v2.push_back(temp2->data);
//         temp2=temp2->next;
//     }
    
//     vector<int> nums;
//     for(auto it : v1) nums.push_back(it);
//     for(auto it : v2) nums.push_back(it);
//     sort(nums.begin(),nums.end());
    
//     Node* dummy = new Node(-1);
//     Node* current = dummy;
//     for (int num : nums) {
//         current->next = new Node(num);
//         current = current->next;
//     }
//      return dummy->next;
// }  






// #include <bits/stdc++.h>
// using namespace std;
// struct Node {
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };
// Node *buildTree(string str) {
//     // Corner Case
//     if (str.length() == 0 || str[0] == 'N') return NULL;

//     // Creating vector of strings from input
//     // string after spliting by space
//     vector<string> ip;

//     istringstream iss(str);
//     for (string str; iss >> str;) ip.push_back(str);

//     // Create the root of the tree
//     Node *root = new Node(stoi(ip[0]));

//     // Push the root to the queue
//     queue<Node *> queue;
//     queue.push(root);

//     // Starting from the second element
//     int i = 1;
//     while (!queue.empty() && i < ip.size()) {

//         // Get and remove the front of the queue
//         Node *currNode = queue.front();
//         queue.pop();

//         // Get the current Node's value from the string
//         string currVal = ip[i];

//         // If the left child is not null
//         if (currVal != "N") {

//             // Create the left child for the current Node
//             currNode->left = new Node(stoi(currVal));

//             // Push it to the queue
//             queue.push(currNode->left);
//         }

//         // For the right child
//         i++;
//         if (i >= ip.size()) break;
//         currVal = ip[i];

//         // If the right child is not null
//         if (currVal != "N") {

//             // Create the right child for the current Node
//             currNode->right = new Node(stoi(currVal));

//             // Push it to the queue
//             queue.push(currNode->right);
//         }
//         i++;
//     }

//     return root;
// }
// class Solution
// {
//     public:
//     bool hasPathSum(Node *root, int s) {
//         if(root  == NULL) return false;
//         if(root->data == s && root->left == NULL && root->right == NULL){
//             return true;
//         }
//         return  hasPathSum(root->left,s-root->data) ||  hasPathSum(root->right,s-root->data);
// }
// };
// int main() {
//     int tc;
//     scanf("%d ", &tc);
//     while (tc--) {
//         string treeString;
//         getline(cin, treeString);
//         Node *root = buildTree(treeString);
//         int sum;
//         scanf("%d ", &sum);
//         Solution ob;
//         cout << ob.hasPathSum(root, sum) << "\n";
//     }
//     return 0;
// }








// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     int data;
//     struct Node *left;
//     struct Node *right;
// };
// Node* newNode(int val)
// {
//     Node* temp = new Node;
//     temp->data = val;
//     temp->left = NULL;
//     temp->right = NULL;
    
//     return temp;
// }
// Node* buildTree(string str)
// {   
//     // Corner Case
//     if(str.length() == 0 || str[0] == 'N')
//             return NULL;
    
//     // Creating vector of strings from input 
//     // string after spliting by space
//     vector<string> ip;
    
//     istringstream iss(str);
//     for(string str; iss >> str; )
//         ip.push_back(str);
        
//     // Create the root of the tree
//     Node* root = newNode(stoi(ip[0]));
        
//     // Push the root to the queue
//     queue<Node*> queue;
//     queue.push(root);
        
//     // Starting from the second element
//     int i = 1;
//     while(!queue.empty() && i < ip.size()) {
            
//         // Get and remove the front of the queue
//         Node* currNode = queue.front();
//         queue.pop();
            
//         // Get the current node's value from the string
//         string currVal = ip[i];
            
//         // If the left child is not null
//         if(currVal != "N") {
                
//             // Create the left child for the current node
//             currNode->left = newNode(stoi(currVal));
                
//             // Push it to the queue
//             queue.push(currNode->left);
//         }
            
//         // For the right child
//         i++;
//         if(i >= ip.size())
//             break;
//         currVal = ip[i];
            
//         // If the right child is not null
//         if(currVal != "N") {
                
//             // Create the right child for the current node
//             currNode->right = newNode(stoi(currVal));
                
//             // Push it to the queue
//             queue.push(currNode->right);
//         }
//         i++;
//     }
    
//     return root;
// }
// long long treePathsSum(Node *root);

// int main()
// {
//     int t;
// 	scanf("%d ",&t);
//     while(t--)
//     {
//         string s;
// 		getline(cin,s);
// 		Node* root = buildTree(s);
		
//         cout<<treePathsSum(root);
//    		cout<<endl;
//   }
//   return 0;
// }

// // } Driver Code Ends


// /* Tree node structure  used in the program
//  struct Node
//  {
//      int data;
//      Node* left, *right;
// }; */

// /*You are required to complete below method */
// void dfscheck(Node* root,long long &sum,int node){
//     if(root == NULL) return ;
//     node=node*10+root->data;
//     if(root->left == NULL && root->right == NULL){
//         sum+=node;
//     }
//     dfscheck(root->left,sum,node);
//     dfscheck(root->right,sum,node);
// }
// long long treePathsSum(Node *root)
// {
//     if(root == NULL) return 0;
//     long long sum=0;
//     int node=0;
//     dfscheck(root,sum,node);
//     return sum;
// }




// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public: 
//     node* left;
//     node* right;
//     int val;
//     node(int x){
//         val=x;
//         left = NULL;
//         right = NULL;
//     }
// };
// class Solution {
// private:
//     node* dfscheck(vector<int> &nums,int left,int right){
//         if(left > right) return NULL;
//         int mid = (left+right)/2;
//         node*  root = new node(nums[mid]);
//         root->left = dfscheck(nums,left,mid-1);
//         root->right = dfscheck(nums,mid+1,right);
//         return root;
//     }
// private:
//     node* bst(vector<int> &nums){
//         return dfscheck(nums,0,nums.size()-1);
//     } 
// private:
//     void preorder(node* root,vector<int> &ans){
//         if(root == NULL) return;
//         ans.push_back(root->val);
//         preorder(root->left,ans);
//         preorder(root->right,ans);
//     }
// public:
//     vector<int> sortedArrayToBST(vector<int>& nums) {
//         node* root = bst(nums);
//         vector<int> ans;
//         preorder(root,ans);
//         return ans;
//     }
// };
// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		int n;
// 		cin >> n;
// 		vector<int>nums(n);
// 		for(int i = 0; i < n; i++)cin >> nums[i];
// 		Solution obj;
// 		vector<int>ans = obj.sortedArrayToBST(nums);
// 		for(auto i: ans)
// 			cout << i <<" ";
// 		cout << "\n";
// 	}
// 	return 0;
// }









// #include <bits/stdc++.h> 
// using namespace std; 
// struct LNode
// {
//     int data;
//     struct LNode* next;
    
//     LNode(int x){
//         data = x;
//         next = NULL;
//     }
// };
// struct TNode  
// {  
    
//     int data;  
//     struct TNode* left;  
//     struct TNode* right; 
//     TNode(int x)
//     {
//         data=x;
//         left=right=NULL;
//     }
// }; 
// void preOrder(TNode* node)  
// {  
//     if (node == NULL)  
//         return;  
//     cout<<node->data<<" ";  
//     preOrder(node->left);  
//     preOrder(node->right);  
// } 
// class Solution{
//   private:
//     TNode* dfscheck(vector<int> &nums,int left,int right){
//         if(left > right) return NULL;
//         int mid= (left+right)/2;
//         TNode * root = new TNode(nums[mid]);
//         root->left = dfscheck(nums,left,mid-1);
//         root->right = dfscheck(nums,mid+1,right);
//         return root;
//     }
//   public:
//     TNode* sortedListToBST(LNode *head) {
//         if(head == NULL) return NULL;
//         vector<int> nums;
//         while(head != NULL){
//             nums.push_back(head->data);
//             head = head->next;
//         }
//         return dfscheck(nums,0,nums.size()-1);
//     }
// };
// int main() 
// { 
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         int data;
//         cin>>data;
//         LNode *head = new LNode(data);
//         LNode *tail = head;
//         for (int i = 0; i < n-1; ++i)
//         {
//             cin>>data;
//             tail->next = new LNode(data);
//             tail = tail->next;
//         }
//         Solution ob;
//         TNode* Thead = ob.sortedListToBST(head);
//         preOrder(Thead);
//         cout<<"\n";   
//     }
//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;

// // Tree Node
// struct Node
// {
//     int data;
//     Node* left;
//     Node* right;
// };

// // Utility function to create a new Tree Node
// Node* newNode(int val)
// {
//     Node* temp = new Node;
//     temp->data = val;
//     temp->left = NULL;
//     temp->right = NULL;

//     return temp;
// }

// // Function to Build Tree
// Node* buildTree(string str)
// {
//     // Corner Case
//     if (str.length() == 0 || str[0] == 'N')
//         return NULL;

//     // Creating vector of strings from input
//     // string after spliting by space
//     vector<string> ip;

//     istringstream iss(str);
//     for (string str; iss >> str; )
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

// /*
// struct Node
// {
//     int data;
//     Node* left;
//     Node* right;
// };
// */
// class Solution
// {
//     public:
//     vector<int> topView(Node *root)
//     {
//        vector<int> ans;
//        if(root == NULL) return ans;
//        map<int,int> mapp;
//        queue<pair<Node*,int>> q;
//        q.push({root,0});
       
//        while(!q.empty()){
//            auto it = q.front(); q.pop();
//            Node* node = it.first;
//            int line = it.second;
           
//            if(mapp.find(line) == mapp.end()){
//                mapp[line] = node->data;
//            }
//            if(node->left != NULL) q.push({node->left,line-1});
//            if(node->right != NULL) q.push({node->right,line+1});
//        }
//        for(auto it : mapp){
//            ans.push_back(it.second);
//        }
//        return ans;
//     }

// };
// int main() {
//     int tc;
//     cin>>tc;
//     cin.ignore(256, '\n');
//     while (tc--) {
//         string treeString;
//         getline(cin, treeString);
//         Solution ob;
//         Node *root = buildTree(treeString);
//         vector<int> vec = ob.topView(root);
//         for(int x : vec)
//             cout<<x<<" ";
//         cout<<endl;
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// #define MAX_HEIGHT 100000

// // Tree Node
// struct Node
// {
//     int data;
//     Node* left;
//     Node* right;
// };

// // Utility function to create a new Tree Node
// Node* newNode(int val)
// {
//     Node* temp = new Node;
//     temp->data = val;
//     temp->left = NULL;
//     temp->right = NULL;

//     return temp;
// }

// vector <int> bottomView(Node *root);

// // Function to Build Tree
// Node* buildTree(string str)
// {
//     // Corner Case
//     if(str.length() == 0 || str[0] == 'N')
//         return NULL;

//     // Creating vector of strings from input
//     // string after spliting by space
//     vector<string> ip;

//     istringstream iss(str);
//     for(string str; iss >> str; )
//         ip.push_back(str);

//     // Create the root of the tree
//     Node* root = newNode(stoi(ip[0]));

//     // Push the root to the queue
//     queue<Node*> queue;
//     queue.push(root);

//     // Starting from the second element
//     int i = 1;
//     while(!queue.empty() && i < ip.size()) {

//         // Get and remove the front of the queue
//         Node* currNode = queue.front();
//         queue.pop();

//         // Get the current node's value from the string
//         string currVal = ip[i];

//         // If the left child is not null
//         if(currVal != "N") {

//             // Create the left child for the current node
//             currNode->left = newNode(stoi(currVal));

//             // Push it to the queue
//             queue.push(currNode->left);
//         }

//         // For the right child
//         i++;
//         if(i >= ip.size())
//             break;
//         currVal = ip[i];

//         // If the right child is not null
//         if(currVal != "N") {

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
//   public:
//     vector <int> bottomView(Node *root) {
//         vector<int> ans;
//         map<int,int> mapp;
//         queue<pair<Node*,int>> q;
//         q.push({root,0});
        
//         while(!q.empty()){
//             auto it = q.front(); q.pop();
//             Node* node = it.first;
//             int line = it.second;
//             mapp[line] = node->data;
            
//             if(node->left != NULL) q.push({node->left,line-1});
//             if(node->right != NULL) q.push({node->right,line+1});
//         }
//         for(auto  it : mapp){
//             ans.push_back(it.second);
//         }
//         return ans;
//     }
// };
// int main() {
//     int t;
//     string tc;
//     getline(cin, tc);
//     t=stoi(tc);
//     while(t--)
//     {
//         string s ,ch;
//         getline(cin, s);
//         Node* root = buildTree(s);
//         Solution ob;
//         vector <int> res = ob.bottomView(root);
//         for (int i : res) cout << i << " ";
//         cout << endl;
//     }
//     return 0;
// }






// #include <bits/stdc++.h>
// #define MAXN 2000
// using namespace std;

// struct Node
// {
//     int data, height;
//     Node *left, *right;
    
//     Node(int x)
//     {
//         data=x;
//         left=right=NULL;
//         height=1;
//     }
// };

// bool isBST(Node *n, int lower, int upper)
// {
// 	if(!n) return 1;
// 	if( n->data <= lower || n->data >= upper ) return 0;
// 	return isBST(n->left, lower, n->data) && isBST(n->right, n->data, upper) ;
// }

// pair<int,bool> isBalanced(Node* n)
// {
// 	if(!n) return pair<int,bool> (0,1);

// 	pair<int,bool> l = isBalanced(n->left);
// 	pair<int,bool> r = isBalanced(n->right);

// 	if( abs(l.first - r.first) > 1 ) return pair<int,bool> (0,0);

// 	return pair<int,bool> ( 1 + max(l.first , r.first) , l.second && r.second );
// }

// bool isBalancedBST(Node* root)
// {
// 	if( !isBST(root, INT_MIN, INT_MAX) )
// 		cout<< "BST voilated, inorder traversal : ";

// 	else if ( ! isBalanced(root).second )
// 		cout<< "Unbalanced BST, inorder traversal : ";

// 	else return 1;
// 	return 0;
// }

// void printInorder(Node* n)
// {
// 	if(!n) return;
// 	printInorder(n->left);
// 	cout<< n->data << " ";
// 	printInorder(n->right);
// }

// class Solution{
// int height(Node* root){
//     if(root == NULL) return -1;
//     int left = height(root->left);
//     int right = height(root->right);
//     return max(left,right)+1;
// }
// int balancefactor(Node* root){
//     if(root == NULL) return 0;
//     return height(root->left)-height(root->right);
// }
// Node* leftrotate(Node* root){
//     Node* y = root->right;
//     Node* ty = y->left;
//     y->left = root;
//     root->right = ty;
//     return y;
// }
// Node* rightrotate(Node* root){
//     Node* y = root->left;
//     Node* ty = y->right;
//     y->right = root;
//     root->left = ty;
//     return y;
// }
//   public:
//     Node* insertToAVL(Node* root, int data)
//     {
//         if (root == NULL) return new Node(data);

//         if (data < root->data) {
//             root->left = insertToAVL(root->left, data);
//         }
//         else if (data > root->data) {
//             root->right = insertToAVL(root->right, data);
//         }
//         else {
//             return root;
//         }

//         int bf = balancefactor(root);

//         if (bf > 1) {
//             if (data < root->left->data) {
//                 return rightrotate(root);
//             }
//             else {
//                 root->left = leftrotate(root->left);
//                 return rightrotate(root);
//             }
//         }
//         if (bf < -1) {
//             if (data > root->right->data) {
//                 return leftrotate(root);
//             }
//             else {
//                 root->right = rightrotate(root->right);
//                 return leftrotate(root);
//             }
//         }

//         return root;
//     }
// };
// int main()
// {
// 	int ip[MAXN];
    
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
        
//         for(int i=0; i<n; i++)
//             cin>> ip[i];
        
//         Node* root = NULL;
//         Solution obj;
//         for(int i=0; i<n; i++)
//         {
//             root = obj.insertToAVL( root, ip[i] );
            
//             if ( ! isBalancedBST(root) )
//                 break;
//         }
        
//         printInorder(root);
//         cout<< endl;
//     }
//     return 0;
// }




// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;

// /* Link list Node */
// struct Node
// {
//     int data;
//     struct Node* next;
// };

// void print(struct Node *Node)
// {
//     while (Node!=NULL)
//     {
//         cout << Node->data << " ";
//         Node = Node->next;
//     }
// }


// Node *newNode(int data)
// {
//     Node *temp = new Node;
//     temp->data = data;
//     temp->next = NULL;
//     return temp;
// }


// // } Driver Code Ends
// /*




// */
// class Solution
// {
//     public:
//     struct Node * mergeResult(Node *node1,Node *node2)
//     {
//         vector<int> nums;
//         while(node1 != NULL){
//             nums.push_back(node1->data);
//             node1 = node1->next;
//         }
//         while(node2 != NULL){
//             nums.push_back(node2->data);
//             node2 = node2->next;
//         }
//         sort(nums.rbegin(),nums.rend());
        
    //     Node * ans = newNode(-1);
    //     Node* temp = ans;
    //     for(auto it: nums){
    //         temp->next = newNode(it);
    //         temp = temp->next;
    //     }
    //     return ans->next;
    // }  
// };



// //{ Driver Code Starts.

// int main()
// {
//     int T;
//     cin>>T;
//     while(T--)
//     {
//         int nA;
//         cin>>nA;
//         int nB;
//         cin>>nB;

//         struct Node* headA=NULL;
//         struct Node* tempA = headA;

//         for(int i=0;i<nA;i++)
//         {
//             int ele;
//             cin>>ele;
//             if(headA==NULL)
//             {
//                 headA=tempA=newNode(ele);

//             }else{
//                 tempA->next = newNode(ele);
// 				tempA=tempA->next;
//             }
//         }

//         struct Node* headB=NULL;
//         struct Node* tempB = headB;


//         for(int i=0;i<nB;i++)
//         {
//             int ele;
//             cin>>ele;
//             if(headB==NULL)
//             {
//                 headB=tempB=newNode(ele);

//             }else{
//                 tempB->next = newNode(ele);
// 				tempB=tempB->next;
//             }
//         }
        
//         Solution ob;
//         struct Node* result = ob.mergeResult(headA,headB);

//         print(result);
//         cout<<endl;


//     }
// }

// // } Driver Code Ends




// //{ Driver Code Starts
// //Initial Template for C++

// #include<bits/stdc++.h>
// using namespace std;

// /* Link list node */
// struct Node {
// 	int data;
// 	struct Node *next;
// 	Node(int x) {
// 		data = x;
// 		next = NULL;
// 	}
// };

// /* Function to print linked list */
// void printList(struct Node *head)
// {
// 	struct Node *temp = head;
// 	while (temp != NULL)
// 	{
// 		printf("%d ", temp->data);
// 		temp = temp->next;
// 	}
// }




// // } Driver Code Ends
// //User function Template for C++

// /*Link list node
// struct Node {
// 	int data;
// 	struct Node *next;
// 	Node(int x) {
// 		data = x;
// 		next = NULL;
// 	}
// };*/

// class Solution
// {
//     public:
//     Node* insertionSort(struct Node* head)
//     {
//        vector<int> nums;
//        while(head != NULL){
//            nums.push_back(head->data);
//            head = head->next;
//        }
       
//     sort(nums.begin(),nums.end());
    
      
//      Node* ans = new Node(-1);
//      Node* temp = ans;

//     for (auto it : nums) {
//         temp->next = new Node(it);
//         temp = temp->next;
//     }
//     return ans->next;
//     }   
// };

// //{ Driver Code Starts.
// int main()
// {
// 	int T;
// 	cin >> T;

// 	while (T--)
// 	{
// 		int n;
// 		cin >> n;

// 		Node *head = NULL;
// 		Node *temp = head;

// 		for (int i = 0; i < n; i++) {
// 			int data;
// 			cin >> data;
// 			if (head == NULL)
// 				head = temp = new Node(data);
// 			else
// 			{
// 				temp->next = new Node(data);
// 				temp = temp->next;
// 			}
// 		}

//         Solution ob;

// 		head = ob.insertionSort(head);
// 		printList(head);

// 		cout << "\n";



// 	}
// 	return 0;
// }
// // } Driver Code Ends











// //{ Driver Code Starts
// // driver

// #include <bits/stdc++.h>
// using namespace std;

// /* Linked list Node */
// struct Node {
//     int data;
//     struct Node* next;
//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// struct Node* buildList(int size)
// {
//     int val;
//     cin>> val;
    
//     Node* head = new Node(val);
//     Node* tail = head;
    
//     for(int i=0; i<size-1; i++)
//     {
//         cin>> val;
//         tail->next = new Node(val);
//         tail = tail->next;
//     }
    
//     return head;
// }

// void printList(Node* n)
// {
//     while(n)
//     {
//         cout<< n->data << " ";
//         n = n->next;
//     }
//     cout<< endl;
// }


// // } Driver Code Ends
// /* node for linked list:

// struct Node {
//     int data;
//     struct Node* next;
//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// */



// class Solution
// {
//     // private:
//     // long long listonum(struct Node* root){
//     //     long long num = 0;
//     //     if(root == NULL) return 0;
//     //     while(root != NULL){
//     //         num = num*10 + root->data;
//     //         root = root->next;
//     //     }
//     //     return num;
//     // }
//     // void numtonums(vector<long long>& nums,long long &sum){
//     //     if(sum == 0) return ;
//     //     while(sum != 0){
//     //         nums.push_back(sum%10);
//     //         sum = sum/10;
//     //     }
//     //     reverse(nums.begin(),nums.end());
//     // }
//     public:
//     Node* reverse(Node* head){
//     Node* prev=NULL;
//     Node* curr=head;
//     Node* after;
//     while(curr!=NULL){
//          after=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=after;
       
//     }
//     return prev;
//     }
//     struct Node* addTwoLists(struct Node* first, struct Node* second){
//     // {
//     //     long long sum = 0;
//     //     sum = listonum(first) + listonum(second);
//     //     vector<long long> ans;
//     //     numtonums(ans,sum);
        
//     //     struct Node* head = new Node(0);
//     //     struct Node* temp = head;
//     //     for(auto it : ans){
//     //         temp->next = new Node(it);
//     //         temp = temp->next;
//     //     }
//     //     return head->next;
//     // }
       
       
       
//     int add=0,carry=0;
//     Node* temp1=reverse(first);
//     Node* temp2=reverse(second);
//     stack<int> s;
//     while(temp1!=NULL&&temp2!=NULL){
//     add=temp1->data+temp2->data+carry;
//     carry=0;
//     if(add<=9){
//         s.push(add);
//     }
//     else{
//         s.push(add%10);
//         carry=add/10;
//     }
//        temp1=temp1->next;
//        temp2=temp2->next;
//     }
    
//   while(temp1!=NULL){
//         add=temp1->data+carry;
//     if(add<=9){
//         s.push(add);
//            carry=0;
//     }
//     else{
//         s.push(add%10);
//         carry=add/10;
//     }

//         temp1=temp1->next;
//     }
    
    
//      while(temp2!=NULL){
//              add=temp2->data+carry;
//     if(add<=9){
//         s.push(add);
//            carry=0;
//     }
//     else{
//         s.push(add%10);
//         carry=add/10;
//     }
 
//             temp2=temp2->next;
//         }
//     if(carry!=0){
//         s.push(carry);
//     }
//     Node* sum=new Node(s.top());
//     Node*ans=sum;
//     s.pop();
//     while(!s.empty()){
//         sum->next=new Node(s.top());
//         s.pop();
//         sum=sum->next;
//     }
//     return ans;
//     }
// };


// //{ Driver Code Starts.

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n, m;
        
//         cin>>n;
//         Node* first = buildList(n);
        
//         cin>>m;
//         Node* second = buildList(m);
//         Solution ob;
//         Node* res = ob.addTwoLists(first,second);
//         printList(res);
//     }
//     return 0;
// }
