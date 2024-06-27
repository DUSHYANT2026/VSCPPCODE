#include<iostream>
#include<bits/stdc++.h>
#define SPACE 10
using namespace std;
class treenode{
public:
treenode* right;
treenode* left;
int data;
treenode(){
data=0;
right=NULL;
left=NULL;}
treenode(int d){
data=d;
right=NULL;
left=NULL;}};

class avltree{
public:
treenode* root;
avltree(){
root=NULL;}
avltree(treenode* n){
root=n;}

bool isempty(){
if(root==NULL)
return true;
else
return false;}

int height(treenode* n){
if(n==NULL)
return -1;
else{
int leftheight=height(n->left);
int rightheight=height(n->right);
if(leftheight>rightheight)
return (leftheight+1);
else
return (rightheight+1);}}

int balancefactor(treenode* n){
if(n==NULL)
return -1;
else
return (height(n->left)-height(n->right));}

treenode* rightrotate(treenode* x){
treenode* y=x->left;
treenode* ty=y->right;
y->right=x;
x->left=ty;
return y;}

treenode* leftrotate(treenode* x){
treenode* y=x->right;
treenode* ty=y->left;
y->left=x; 
x->right=ty;
return y;}

// void insertnodetraversal(treenode* n){
// if(root==NULL){
// root=n;
// cout<<"NODE INSERTED AFTER THE ROOT NODE SO THIS IS THE FIRST NODE THAT YOU INSERTED"<<endl;}
// else{
// treenode* temp=root;
// while(temp!=NULL){
// if(temp->data==n->data){
// cout<<"ENTER ANOTHER DATA BACAUSE DUPLICATE CAN'T ADDED IN THE AVLL TREE:"<<endl;}
// else if(temp->data>n->data && temp->left==NULL){
// temp->left=n;
// cout<<"NODE INSERTED AS THE LEFT CHILD OF THE PARENT NODE: IN THE AVL TREE: "<<endl;
// break;}
// else if(temp->data>n->data){
// temp=temp->left;}
// else if(temp->data<n->data && temp->right==NULL){
// temp->right=n;
// cout<<"NODE INSERTED AS THE RIGHT CHILD OF THE PARENT NODE: IN THE AVL TREE: "<<endl;
// break;}
// else{
// temp=temp->right;}
// }}}

treenode* insertrecursive(treenode* r,treenode* n){
if(r==NULL){
r=n;
return r;}
else{
if(r->data>n->data)
r->left=insertrecursive(r->left,n);
else if(r->data<n->data)
r->right=insertrecursive(r->right,n);
else{
cout<<"YOU CAN-NOT ADD THE SAME NODE S0 ENTER THE NODE WITH DIFFERENT DATA:";
return r;}
int bf=balancefactor(r);
if(bf>1 && r->left->data > n->data )
return rightrotate(r); 
if(bf<-1 && r->right->data <n->data)
return leftrotate(r);
if(bf>1 && r->left->data < n->data){
r->left=leftrotate(r->left);
return rightrotate(r);}
if(bf<-1 && r->left->data > n->data){
r->right=rightrotate(r->right);
return leftrotate(r);}
return r;}}

void display2D(treenode* n,int space){
if(n==NULL)
return ; 
space+=SPACE;
display2D(n->right,space);
cout<<endl;
for(int i=SPACE;i<space;i++)
cout<<" "; 
cout<<n->data<<endl;
display2D(n->left,space);}

void preorder(treenode* n){
if(n==NULL)
return;
cout<<n->data<<" ";
preorder(n->left);
preorder(n->right);}

void inorder(treenode* n){
if(n==NULL)
return;
inorder(n->left);
cout<<n->data<<" ";
inorder(n->right);}

void postorder(treenode* n){
if(n==NULL)
return;
postorder(n->left);
postorder(n->right);
cout<<n->data<<" ";}

treenode* searchtraversal(int data){
if(root==NULL)
return root;
else{
treenode* temp=root;
while(temp!=NULL){
if(temp->data==data)
return temp;
else if(temp->data>data)
temp=temp->left;
else
temp=temp->right;}
return NULL;}}

treenode* recursivesearch(treenode* root,int data){
if(root==NULL || root->data==data)
return root;
else if(data<root->data)
return recursivesearch(root->left,data);
else
return recursivesearch(root->right,data);}

void smallestdata(treenode* n){
treenode* temp=n;
while(temp->left!=NULL){
temp=temp->left;}
cout<<temp->data<<" ";}

int findBottomLeftValue(treenode* root) {
if(root == NULL) return 0;
queue<treenode*> q;
q.push(root);
treenode* temp;    
while(!q.empty()){
temp=q.front(); q.pop();
if(temp->right!=NULL) q.push(temp->right);
if(temp->left!=NULL) q.push(temp->left);}
return temp->data;}

int findBottomrightValue(treenode* root) {
if(root == NULL) return 0;
queue<treenode*> q;
q.push(root);
treenode* temp;    
while(!q.empty()){
temp=q.front(); q.pop();
if(temp->left!=NULL) q.push(temp->left);
if(temp->right!=NULL) q.push(temp->right);}
return temp->data;}

void largestdata(treenode* n){
treenode* temp=n;
while(temp->right!=NULL){
temp=temp->right;}
cout<<temp->data<<" ";}

void printBFSlevel(treenode *n,int level){
if(n==NULL)
return ;
else if(level==0)
cout<<n->data<<" ";
else{
printBFSlevel(n->left,level-1);
printBFSlevel(n->right,level-1);}}

void printBFSORDER(treenode* n){
int h=height(n);
for(int i=0;i<=h;i++){
printBFSlevel(n,i);}}

treenode* minvalue(treenode* n){
treenode* temp=n;
while(temp->left!=NULL){
temp=temp->left;}
return temp;}

treenode* maxvalue(treenode* n){
treenode* temp=n;
while(temp->right!=NULL){
temp=temp->right;}
return temp;}

treenode* deletenode(treenode* r,int data){
if(r==NULL)
return NULL;
else if(r->data>data)
r->left=deletenode(r->left,data);
else if(r->data<data)
r->right=deletenode(r->right,data);
else{
if(r->right==NULL){
treenode* temp=r->left;
delete r;
return temp;}
else if(r->left==NULL){
treenode* temp=r->right;
delete r;
return temp;}
else{
treenode* temp=minvalue(r->right);
r->data=temp->data;
r->right=deletenode(r->right,temp->data);}}
int bf=balancefactor(r);
if(bf==2 && balancefactor(r->left)>=0)
return rightrotate(r);
if(bf==2 && balancefactor(r->left)==-1){
r->left=leftrotate(r->left);
return rightrotate(r);}
if(bf==-2 && balancefactor(r->right)<=0)
return leftrotate(r);
if(bf==-2 && balancefactor(r->right)==1){
r->right=leftrotate(r->right);
return leftrotate(r);}
return r;}

};
using namespace std;
int main(){
avltree a;
int option,data;
do{
cout<<"IMPELEMENT OF THE AVL TREE: SELECT OPTION THAT IS GIVEN BELOW TO USE FUNCTION OF THE AVL TREE:"<<endl;
cout<<"0) TO EXIST FROM THE PROGRAME: "<<endl;
cout<<"1) TO INSERT NODE USING RECURSION: "<<endl;
cout<<"2) TO DELETE NODE FROM THE AVL TREE: "<<endl;
cout<<"3) TO SEARCH IN AVL TREE USING TRAVERSAL OR RECURSION:"<<endl;
cout<<"4) TO PRINT IN 2D AND BREADTH FIRST SEARCH: "<<endl;
cout<<"5) TO PRINT LARGEST AND THE SMALLEST ELEMENT IN THE AVL TREE: "<<endl;
cout<<"6) TO PRINT ALL DFS  PREORDER AND INORDER AND POSTORDER"<<endl;
cout<<"7) TO FIND THAT AVL TREE IS EMPTY OR NOT:"<<endl;
cout<<"8) TO FIND THE HEIGHT OF THE AVL TREE: "<<endl;
cout<<"9) TO CLEAR THE SCREEN: "<<endl;

cin>>option;
treenode* newnode=new treenode();

switch(option){
case 0:
break;
case 1:
cout<<"INSERT FUNCTION IS CALLED USING RECURSION: "<<endl;
cout<<"ENTER NODE THAHT YOU WANT TO INSERT:"<<endl;
cin>>data;
newnode->data=data;
a.root=a.insertrecursive(a.root,newnode);
cout<<endl;
break;
case 2:
cout<<"DELETE FUNCTION IS CALLED:"<<endl;
cout<<"ENTER THE  NODE TTHAT YOU WANT TO DELTE:"<<endl;
cin>>data;
newnode=a.deletenode(a.root,data);
cout<<endl;
break;
case 3:
cout<<"SEARCH FUNCTION IS CALLED USING TRAVERSAL:"<<endl;
cout<<"ENTER THE DATA THAT YOU WANT TO SEARCH:"<<endl;
cin>>data;
if(a.searchtraversal(data)!=NULL)
cout<<"YES THIS DATA EXIST IN YOUR AVL TREE: "<<data<<endl;
else
cout<<"DATA THAT YOU ENETED IS NOT EXIST IN THE TREE: ENTER ANOTHER DATA!"<<endl;
cout<<endl;
cout<<"SEARCH FUNCTION IS CALLED USING RECCURSION:"<<endl;
cout<<"ENTER THE DATA THAT YOU WANT TO SEARCH:"<<endl;
cin>>data;
newnode=a.searchtraversal(data);
if(newnode!=NULL)
cout<<"YES THIS DATA EXIST IN YOUR AVL TREE: "<<data<<endl;
else
cout<<"DATA THAT YOU ENETED IS NOT EXIST IN THE TREE: ENTER ANOTHER DATA!"<<endl;
cout<<endl;
break;
case 4:
cout<<"DISPLAY IN 2-D FUCTION IS CALLED:"<<endl;
a.display2D(a.root,5);
cout<<endl;
cout<<"PRINT BREADTH FIRST SEARCH: "<<endl;
a.printBFSORDER(a.root);
cout<<endl<<endl;
break;
case 5:
cout<<"LARGEST NODE IN THE TREE: "<<endl;
a.largestdata(a.root);
cout<<endl;
cout<<"SMALLEST NODE IN THE TREE: "<<endl;
a.smallestdata(a.root);
cout<<endl;
break;
case 6:
cout<<"PREORDER FUNCTION IS CALLED:"<<endl;
a.preorder(a.root);
cout<<endl;
cout<<"INORDER FUNCTION IS CALLED:"<<endl;
a.inorder(a.root);
cout<<endl;
cout<<"POSTORDER FUNCTION IS CALLED:"<<endl;
a.postorder(a.root);
cout<<endl<<endl;
break;
case 7:
cout<<"EMPTY FUCTION IS CALLED:"<<endl;
if(a.isempty()==true)
cout<<"AVL TREE IS EMPTY SO THERE IS NO NODE IN IT:"<<endl;
else
cout<<"AVL TREE IS NOT EMPTY THERE IS SOME NODE IN IT:"<<endl;
cout<<endl;
break;
case 8:
cout<<"HEIGHT FUNCTION IS CALLED:"<<endl;
cout<<"HEIGHT OF THE AVL TREE: "<<a.height(a.root);
cout<<endl;
break;
case 9:
cout<<"CLEAR SCREEN FUNCTION IS CALLED:"<<endl;
system("cls");
cout<<endl;
break;
default:
cout<<"ENTER PROPER OPTION TO EXECUTES THE PROGRAME:"<<endl;
}}while(option!=0);
return 0;}