#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node *left;
node *right;
node(){
data=0;
left=NULL;
right=NULL;}
node(int d){
data=d;
left=NULL;
right=NULL;}};

class traversal{
public:
node *root;
traversal(){
root=NULL;}
traversal(node *n){
root=n;}

void insert(node *n){
if(root==NULL){
root=n;
cout<<"DATA INSERTED IN THE FIRST PLACE IN THE ROOT NODE: "<<endl;}
else{
node *temp=root;
while(temp!=NULL){
if(temp->data==n->data){
cout<<"YOU CANNOT ADD THIS DATA BECAUSE IT ALREADY ADDED:"<<endl;
return ;}
else if(temp->data>n->data && temp->left==NULL){
temp->left=n;
cout<<"DATA ENTERED IN THE LEFT CHILD OF THE PARENT NODE: "<<endl; 
break;}
else if(temp->data>n->data)
temp=temp->left;
else if(temp->data<n->data && temp->right==NULL){
temp->right=n;
cout<<"DATA ENETRED IN THE RIGHT CHILD OF THE PARENT NODE:"<<endl; 
break;}
else
temp=temp->right;}}}

// void insert(node* n){
// if(root==NULL){
// root=n;
// cout<<"vlaue insert at the root position:"<<endl;}
// else{
// node* temp=root;
// while(temp!=NULL){
// if(temp->data==n->data){
// cout<<"you can't add same vlaue to the tree: "<<endl;
// return ;}
// else if(temp->data>n->data && temp->left==NULL){
// temp->left=n;
// break;}
// else if(temp->data>n->data){
// temp=temp->left;}
// else if(temp->data<n->data && temp->right==NULL){
// temp->right=n;
// break;}
// else
// temp=temp->right;}}}


void preorder(node *n){
if(n==NULL)
return;
cout<<n->data<<" ";
preorder(n->left);
preorder(n->right);}

void inorder(node *n){
if(n==NULL)
return;
inorder(n->left);
cout<<n->data<<" ";
inorder(n->right);}

void postorder(node *n){
if(n==NULL)
return;
postorder(n->left);
postorder(n->right);
cout<<n->data<<" ";}

void bfslevelorder(node* n){
vector<int> ans;
if(n==nullptr)
return ;
queue<node*>q;
q.push(n);
while(!q.empty()){
node*  temp=q.front();
q.pop();
ans.push_back(temp->data);
if(temp->left!=NULL)
q.push(temp->left);
if(temp->right!=NULL)
q.push(temp->right);}
for(int i=0;i<ans.size();i++)
cout<<ans[i]<<" ";
cout<<endl;}

void breadthfirst(node* n){
vector<vector<int>> ans;
if(n==NULL)
return;
queue<node*>q;
q.push(n);
while(!q.empty()){
int level=q.size();
vector<int>v;
for(int i=0;i<level;i++){
node* temp=q.front();
q.pop();
v.push_back(temp->data);
if(temp->left!=NULL)
q.push(temp->left);
if(temp->right!=NULL)
q.push(temp->right);}
ans.push_back(v);}
for(int i=0;i<ans.size();i++){
for(int j=0;j<ans[i].size();j++){
cout<<ans[i][j]<<" ";}}}

void zigzagbfs(node* n){
vector<vector<int>> ans;
if(n==NULL)
return;
queue<node*>q;
q.push(n);
while(!q.empty()){
int level=q.size();
vector<int>v;
for(int i=0;i<level;i++){
node* temp=q.front();
q.pop();
v.push_back(temp->data);
if(temp->left!=NULL)
q.push(temp->left);
if(temp->right!=NULL)
q.push(temp->right);}
ans.push_back(v);}
for(int i=0;i<ans.size();i++){
    if((i+1)%2 == 0){
        reverse(ans[i].begin(),ans[i].end());
    }
}
for(int i=0;i<ans.size();i++){
for(int j=0;j<ans[i].size();j++){
cout<<ans[i][j]<<" ";}cout<<endl;}}

void stackpreorder(node* n){
vector<int> ans;
if(n==NULL)
return;
stack<node*> s;
s.push(n);
while(!s.empty()){
node* temp=s.top();
ans.push_back(temp->data);
s.pop();
if(temp->right!=NULL)
s.push(temp->right);
if(temp->left!=NULL)
s.push(temp->left);}
for(int i=0;i<ans.size();i++)
cout<<ans[i]<<" ";
cout<<endl;}

void stackinorder(node* root){
 if(root == NULL) return;
vector<int> ans;
stack<node*>s;
node* temp=root;
while(temp!=NULL || !s.empty()){
if(temp!=NULL){
s.push(temp);
temp=temp->left;}
else{
temp=s.top();
s.pop();
ans.push_back(temp->data);
temp=temp->right;}}
for(int i=0;i<ans.size();i++)
cout<<ans[i]<<" ";
cout<<endl;}

void flattenright(node* root){
    if(root == NULL) return;
    stack<node*> s;
    s.push(root);
    while(!s.empty()){
        auto temp=s.top(); s.pop();
        if(temp->right != NULL) s.push(temp->right);
        if(temp->left != NULL) s.push(temp->left);
        if(!s.empty()) temp->right=s.top();
        temp->left = NULL;
    }
}

void flattenleft(node* root){
    if(root == NULL) return;
    stack<node*> s;
    s.push(root);
    while(!s.empty()){
        auto temp=s.top(); s.pop();
        if(temp->left != NULL) s.push(temp->left);
        if(temp->right != NULL) s.push(temp->right);
        if(!s.empty()) temp->left=s.top();
        temp->right = NULL;
    }
}

void maxelement(node* n){
if(n==NULL)
return;
node*  temp=n;
while(temp->right!=NULL)
temp=temp->right;
cout<<temp->data<<""<<endl;}

void minelement(node* n){
if(n==NULL)
return;
node*  temp=n;
while(temp->left!=NULL)
temp=temp->left;
cout<<temp->data<<""<<endl;}

int height(node* root ,int& diameter){
if(root==NULL)
return 0;
int left=height(root->left,diameter);
int right=height(root->right,diameter);
diameter=max(diameter,left+right);
return max(left,right)+1;}
int diameterfind(node* root){
int diameter=0;
height(root,diameter);
return diameter;}

int sumpath(node* root,int& maxi){
if(root==NULL)
return 0;
int left=max(0,sumpath(root->left,maxi));
int right=max(0,sumpath(root->right,maxi));
maxi=max(maxi,(left+right)+root->data);
return max(left,right)+root->data;}
int maxPathSum(node* root) {
int maxi=INT_MIN;
sumpath(root,maxi);
return maxi;}

// bool sametree(node* p ,node* q){
// if(p==NULL && q==NULL)
// return true;
// if(p==NULL || q==NULL)
// return false;
// return (p->data==q->data && sametree(p->left,q->left) && sametree(p->right,q->right));}

// bool issame(TreeNode* p,TreeNode* q){
// if(p==NULL || q==NULL)
// return p==q;
// return (p->val==q->val && issame(p->right,q->left) && issame(p->left,q->right));}  
// bool isSymmetric(TreeNode* root) {
// if(root==NULL)
// return true;
// return issame(root->left,root->right);}


bool leafnode(node* root){
return !root->left && !root->right;}

void addingleafnode(node* root,vector<int> &nums){
if(leafnode(root)){
nums.push_back(root->data);
return;}
if(root->left!=NULL)
addingleafnode(root->left,nums);
if(root->right!=NULL)
addingleafnode(root->right,nums);}

void addingleft(node* root,vector<int> &nums){
node* temp=root->left;
while(temp!=NULL){
if(!leafnode(temp))
nums.push_back(temp->data);
if(temp->left!=NULL)
temp=temp->left;
else 
temp=temp->right;}}

void addingright(node* root,vector<int>& nums){
node* temp=root->right;
vector<int> res;
while(temp!=NULL){
if(!leafnode(temp))
res.push_back(temp->data);
if(temp->right!=NULL)
temp=temp->right;
else 
temp=temp->left;}
for(int i=res.size()-1;i>=0;i--)
nums.push_back(res[i]); }

void bounderytraversalanticlockwise(node* root){
vector<int> nums;
if(root==NULL)
return ;
if(leafnode(root))
nums.push_back(root->data);
addingleft(root,nums);
addingleafnode(root,nums);
addingright(root,nums);
for(int i=0;i<nums.size();i++)
cout<<nums[i]<<" ";}



void rightadding(node* root,vector<int> &nums){
node* temp=root->right;
while(temp!=NULL){
if(!leafnode(temp))
nums.push_back(temp->data);
if(temp->right!=NULL)
temp=temp->right;
else
temp=temp->left;}}

void leftadding(node* root,vector<int>&nums){
node* temp=root->left;
vector<int> res;
while(temp!=NULL){
if(!leafnode(temp))
res.push_back(temp->data);
if(temp->left!=NULL)
temp=temp->left;
else 
temp=temp->right;}
for(int i=res.size()-1;i>=0;i--)
nums.push_back(res[i]);}

void leafnodeadding(node* root,vector<int>&nums){ 
if(leafnode(root)){
nums.push_back(root->data);
return;}
if(root->right!=NULL)
leafnodeadding(root->right,nums);
if(root->left!=NULL)
leafnodeadding(root->left,nums);}

void bounderytraversalclockwise(node* root){
vector<int> nums;
if(root==NULL)
return ;
if(leafnode(root))
nums.push_back(root->data);
rightadding(root,nums);
leafnodeadding(root,nums);
leftadding(root,nums);
for(int i=0;i<nums.size();i++)
cout<<nums[i]<<" ";}


void leftside(node* root,vector<int> &nums,int level){
if(root==NULL)
return;
if(nums.size()==level)
nums.push_back(root->data);
leftside(root->left,nums,level+1);
leftside(root->right,nums,level+1);}

void leftview(node* root){
vector<int> nums;
leftside(root,nums,0);
for(int i=0;i<nums.size();i++)
cout<<nums[i]<<" ";}


void rightside(node* root,vector<int> &nums,int level){
if(root==NULL)
return;
if(nums.size()==level)
nums.push_back(root->data);
rightside(root->right,nums,level+1);
rightside(root->left,nums,level+1);}

void rightview(node* root){
vector<int> nums;
rightside(root,nums,0);
for(int i=0;i<nums.size();i++)
cout<<nums[i]<<" ";}

};
int main(){
traversal t;
int data,option;
do{
cout<<"ALL THE TREE TRAVERSL TECHNIQUES: SELECT THE OPTION GIVEN BELOW TO IMPLEMENT :"<<endl;
cout<<"0) TO EXIST THE SCREEN:"<<endl;
cout<<"1) TO INSERT DATA IN THE TREE"<<endl;
cout<<"2) PREOREDR:"<<endl;
cout<<"3) INORDER : "<<endl;
cout<<"4) POSTORDER:"<<endl;
cout<<"5) BREADTH-FIST-SEARCH USING QUEUE:"<<endl;
cout<<"15) BREADTH-FIST-SEARCH USING QUEUE:LEVEL WISE:"<<endl;
cout<<"16) BREADTH-FIST-SEARCH USING QUEUE:ZIG ZAG:"<<endl;
cout<<"17) BOUNDARY SEARCH ANTI CLOCK WISE: "<<endl;
cout<<"18) BOUNDARY SEARCH  CLOCK WISE: "<<endl;
cout<<"19) RIGHT AND LEFT VIEW OF THE BINARY TREE:"<<endl;
cout<<"6) PREORDER USING STACK DSA: "<<endl;
cout<<"7) INORDER USING STACK DSA: "<<endl;
cout<<"8) POSTORDER USING STACK DSA: "<<endl;
cout<<"9) MAX AND THE MIN ELEMENT IN BST:"<<endl;
cout<<"11) FIND DIAMETER OF BINARY TREE:"<<endl;
cout<<"12) FLATTEN TREE RIGHT AND LEFT SIDE:"<<endl;
cout<<"10) TO CLEAR THE SCREEN:"<<endl;

cin>>option;
node* newnode=new node();
switch(option){
case 0:
break;
case 1:
cin>>data;
newnode->data=data;
t.insert(newnode);
cout<<endl;
break;
case 2:
cout<<"DFS: PREORDER CALLED USING RECUSION: "<<endl;
t.preorder(t.root);
cout<<endl;
break;
case 3:
cout<<"DFS: INORDER CALLED USING RECUSION: "<<endl;
t.inorder(t.root);
cout<<endl;
break;
cout<<"DFS: POSTORDER CALLED USING RECUSION: "<<endl;
case 4:
t.postorder(t.root);
cout<<endl;
break;
case 5:
t.bfslevelorder(t.root);
cout<<endl;
break;
case 15:
t.breadthfirst(t.root);
cout<<endl;
break;
case 16:
t.zigzagbfs(t.root);
cout<<endl;
break;
case 17:
t.bounderytraversalanticlockwise(t.root);
cout<<endl;
break;
case 18:
t.bounderytraversalclockwise(t.root);
cout<<endl;
break;
case 19:
cout<<"RIGHT VIEW OF THE BINARY TREE:"<<endl;
t.rightview(t.root);
cout<<"\nLEFT VIE OF THE NUMARY TREE:"<<endl;
t.leftview(t.root);
cout<<endl;
break;
case 6:
t.stackpreorder(t.root);
cout<<endl;
break;
case 7:
t.stackinorder(t.root);
cout<<endl;
break;
case 8:
t.stackpreorder(t.root);
cout<<endl;
break;
case 9:
cout<<"MAX: ELEMENT IN THE BINARY SEARCH TREE: ";
t.maxelement(t.root);
cout<<"\nMIN: ELEMENT IN THE BINARY SEARCH TREE: ";
t.minelement(t.root);
cout<<endl;
break;
case 11:
cout<<"DIAMETER :LONGEST DISTANCE BETWEEN TWO NODES:"<<endl;
t.diameterfind(t.root);
cout<<endl;
case 12:
cout<<"\n FLATTEN TREE IN RIGHT SIDE LIKE TREE TO LINKED LIST:"<<endl;
t.flattenright(t.root);
cout<<endl;
cout<<"\n FLATTEN TREE IN LEFT SIDE LIKE TREE TO LINKED LIST:"<<endl;
t.flattenleft(t.root);
cout<<endl;
break;
case 10:
system("cls");
break;
default:
cout<<"ENTER PROPER OPTION THAT GIVEN: "<<endl;
break;
}}while(option!=0);
return 0;}