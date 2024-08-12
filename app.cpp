#include<iostream>
using namespace std;
int fact(int n){
int factorial=1;
for(int i=1;i<=n;i++){
factorial*=i;}
return factorial;}
int main(){
int n;
cin>>n;
cout<<fact(n)<<endl;
return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=1;i<=100;i++)
// cout<<n<<"*"<<i<<"="<<n*i<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// bool pytha(int a,int b,int c){
// int x=max(a,max(b,c));
// int y,z;
// if (x==a){
// y=b;
// z=c;}
// else if(x==b){
// y=c;
// z=a;}
// else{
// y=a;
// z=b;}
// if (x*x=y*y+z*z)
// return true;
// else 
// return false;}
// int main(){
// int a,b,c;
// cin>>a>>b>>c;
// cout<<"PAYTHAGORUS THEORME:"<<endl;
// cout<<pytha(a,b,c)<<endl;
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// string s;
// cin>>s;
// string s1;
// cin>>s1;
// int n=s.length();
// for(int i=0;i<n;i++){
// if(s[i]==s1[i])
// cout<<s[i]<<endl;}
// return 0;}

// #include<iostream>
// using namespace std;
// int total(int a, int b, int c ){
// int sum=a+b+c;
// return sum;}
// int main(){
// int a,b,c;
// cin>>a>>b>>c;
// cout<<total(a,b,c)<<endl;
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// class midterm{
// public:
// string name;
// string subject;
// int marks;};
// int main(){
// midterm x;
// x.name;
// cin>>x.name;
// cout<<"student report card: "<<endl;
// cout<<"Name of student: "<<x.name<<endl;
// cout<<"Subject"<<"  \t"<<"marks"<<endl;
// for(auto i=0;i<5;i++){
// cin>>x.subject>>x.marks;
// cout<<x.subject<<"  \t"<<x.marks<<endl;}
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// class midterm{
// public:
// string name;
// string subject;
// int marks;
// void reportcard(){
// cin>>name;
// cout<<name<<endl;
// cout<<"Subject"<<"    \t"<<"Mark"<<endl;
// for(auto i=0;i<4;i++){
// cin>>subject>>marks;
// cout<<subject<<"\t"<<marks<<endl;}}};
// int main(){
// midterm x;
// cout<<"Reprot card of student in vit bhopal:"<<endl;
// cout<<"Name of the student:"<<endl;
// x.reportcard();
// return 0;}

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<int>v;
// int n;
// cin>>n;
// for(int i=10;i<n;i++){
// v.push_back(i);}
// for(auto j=v.begin();j!=v.end();j++)
// if(*j%2==0||*j%3==0||*j%5==0||*j%7==0){
// v.erase(j);
// j--;	}
// for(auto j=v.begin();j!=v.end();j++)
// cout<<*j<<" ";	
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n,x;
// cin>>n;
// vector<int>v;
// for(int i=0;i<n;i++){
// cin>>x;
// v.push_back(x);}
// cout<<"MAXIMUM ELEMENTS IN THE ARRAY:"<<endl;
// cout<<*max_element(v.begin(),v.end());
// cout<<endl;
// cout<<"MINMUM ELEMENTS IN THE ARRAY:"<<endl;
// cout<<*min_element(v.begin(),v.end());
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n,x;
// cin>>n;
// vector<int> nums;
// for(int i=0;i<n;i++){
// cin>>x;
// nums.push_back(x);}
// sort(nums.begin(),nums.end());
// next_permutation(nums.begin(),nums.end());
// for(int i=0;i<nums.size();i++)
// cout<<nums[i]<< " ";
// return 0;}

// vector<vector<int>> permuteUnique(vector<int>& nums){
// vector<vector<int>> ans;
// sort(nums.begin(),nums.end());
// do{
// ans.push_back(nums);}
// while(next_permutation(nums.begin(),nums.end()));
// return ans;}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n,x;
// cin>>n;
// vector<int> nums;
// for(int i=0;i<n;i++){
// cin>>x;
// nums.push_back(x);}
// vector<vector<int>> ans;
// sort(nums.begin(),nums.end());
// do{
// ans.push_back(nums);}
// while(next_permutation(nums.begin(),nums.end()));
// cout<<"TO FIND ALL POSSIBLE COMBINATION OF ARRAY THAT YOU ENTERED: "<<endl;
// for(int i=0;i<ans.size();i++){
// for(int j=0;j<ans[i].size();j++){
// cout<<ans[i][j]<< " ";}cout << endl;}
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=0;i<=n;i++){
// for(int j=0;j<=n;j++)
// if(j==i)
// cout<<"*";
// for(int j=0;j<=2*i-1;j++)
// cout<<" ";
// for(int j=0;j<=n;j++)
// if(j==n-i)
// cout<<"*";
// cout<<endl;}
// for(int i=0;i<=n;i++){
// for(int j=0;j<=n;j++)
// if(j==n-i)
// cout<<"*";
// for(int j=0;j<=2*n-2*i-1;j++)
// cout<<" ";
// for(int j=0;j<=n;j++)
// if(j==i)
// cout<<"*";
// cout<<endl;}
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n,m,r;
// cout<<"Enter the number that you want to divide: "<<endl;
// cin>>n>>m;
// try{
// if(m==0)
// throw m;
// r=n/m;}
// catch(int ex){
// cout<<"M can't be zero because it is not allowed:"<<endl;} 
// cout<<"Result after dividing value of n by value of m:"<<endl;
// cout<<r<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// struct person{
// string name;
// int age;
// double salary;};
// int main(){
// person p1,p2;
// cout<<"Enter the name of the person: "<<endl;
// getline(cin,p1.name);
// cout<<"Enter the age of the person:"<<endl;
// cin>>p1.age;
// cout<<"Enter the salary of the person: "<<endl;
// cin>>p1.salary;
// cout<<"Person details that you enter:"<<endl;
// cout<<"Name: "<<p1.name<<endl;
// cout<<"Age: "<<p1.age<<endl;
// cout<<"Salary: "<<p1.salary<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// struct person{
// string name;
// int age;
// double salary;};
// int main(){
// person p[2];
// for(int i=0;i<2;i++){ 
// cout<<"Enter the name of the person: "<<endl;
// cin>>p[i].name;
// cout<<"Enter the age of the person:"<<endl;
// cin>>p[i].age;
// cout<<"Enter the salary of the person: "<<endl;
// cin>>p[i].salary;}
// for(int i=0;i<2;i++){
// cout<<"Person details that you enter:"<<endl;
// cout<<"Name: "<<p[i].name<<endl;
// cout<<"Age: "<<p[i].age<<endl;
// cout<<"Salary: "<<p[i].salary<<endl;}
// return 0;}

// #include<iostream>
// using namespace std;
// struct person{
// string name;
// int age;
// double salary;};
// int main(){
// person p1,p2;
// cout<<"Enter the name of the person: "<<endl;
// getline(cin,p1.name);
// cout<<"Enter the age of the person:"<<endl;
// cin>>p1.age;
// cout<<"Enter the salary of the person: "<<endl;
// cin>>p1.salary;
// person *ptr=&p1;
// cout<<"Person details that you enter:"<<endl;
// cout<<"Name: "<<ptr->name<<endl;
// cout<<"Age: "<<ptr->age<<endl;
// cout<<"Salary: "<<ptr->salary<<endl;
// return 0;}

  

// #include<iostream>
// using namespace std;
// class node{
// public:
// int key;
// int data;
// node* next;
// node(){
// key=0;
// data=0;
// next=NULL;}
// node(int k,int d){
// key=k;
// data=d;}};

// class stack{
// public:
// node* top;
// stack(){
// top=NULL;}

// bool isempty(){
// if(top==NULL)
// return true;
// else 
// return false;}

// bool nodeexist(node *n){
// node* temp=top;
// bool exist=false;
// while(temp!=NULL){
// if(temp->key==n->key){
// exist=true;
// break;}
// temp=temp->next;}
// return exist;}

// void push(node* n){
// if(top==NULL){
// top=n;}
// else if(nodeexist(n)){
// cout<<"ENTER ANOTHER NODE BECUASE SAME KEY CANNOT EXIST STACK IN LINKED LIST: "<<endl;}
// else{
// node* temp=top;
// top=n;
// n->next=temp;}}

// node* pop(){
// node* temp=NULL;
// if(isempty()==true){
// return temp;}
// else{
// temp=top;
// top=top->next;
// return temp;}}

// node* peek(){
// node* temp=NULL;
// if(isempty()){
// return temp;}
// else
// return top;}

// int count(){
// int count=0;
// node* temp=top;
// while(temp!=NULL){
// count++;
// temp=temp->next;}
// return count;}

// void display(){
// node* temp=top;
// while(temp!=NULL){
// cout<<"("<<temp->key<<","<<temp->data<<")"<<endl;
// temp=temp->next;}cout<<endl;}


// };
// int main(){
// stack s;
// int key,data; 
// node* new_node=new node();

// cin>>key;
// cin>>data;
// new_node->key=key;
// new_node->data=data;
// s.push(new_node);
// s.display();
// cout<<"SIZE OF THE STACK: "<<s.count()<<endl;
// cin>>key;
// cin>>data;
// new_node->key=key;
// new_node->data=data;
// s.push(new_node);
// return 0;}




// #include <iostream>
// using namespace std;

// int main() {
//   int var = 20; 
//   int* ptr; // note that data type of ptr and var must be same
//   ptr = &var; // assign the address of a variable to a pointer
//   cout << "Value at ptr = " << ptr << "\n"; // print the address stored in ptr                  // ptr is the addess that changes in the heap memory so its a parmant change
//   cout << "Value at var = " << var << "\n"; // print the value of var
//   cout << "Value at *ptr = " << *ptr << "\n"; // print the value of the variable that ptr points to
//   return 0;
// }