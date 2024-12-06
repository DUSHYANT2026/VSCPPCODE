// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     struct Node *next;

//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// struct Node *newNode(int data) {
//     struct Node *new_Node = new Node(data);

//     return new_Node;
// }

// Node *reverse(Node **r) {
//     Node *prev = NULL;
//     Node *cur = *r;
//     Node *nxt;
//     while (cur != NULL) {
//         nxt = cur->next;
//         cur->next = prev;
//         prev = cur;
//         cur = nxt;
//     }
//     *r = prev;
// }

// void push(struct Node **head_ref, int new_data) {
    
//     struct Node *new_Node = newNode(new_data);

//     new_Node->next = (*head_ref);

//     (*head_ref) = new_Node;
// }

// void freeList(struct Node *Node) {
//     struct Node *temp;
//     while (Node != NULL) {

//         temp = Node;
//         Node = Node->next;
//         free(temp);
//     }
// }
// struct Node
// {
//     int data;
//     Node* next;

//     Node(int x){
//         data = x;
//         next = NULL;
//     }

// };*/
// class solution {
//    private:
//     long long changetonumber(Node* list){
//         long long ans = 0;
//         while(list != NULL){
//             ans  = (ans*10 + (list->data)) % 1000000007;
//             list = list->next;
//         }
//         return ans;
//     }
//   public:
//     long long multiplyTwoLists(Node *first, Node *second) {
//         // code here
//         long long num1 = changetonumber(first);
//         long long num2 = changetonumber(second);
//         long long ans = 0;
        
//         ans = (num1 * num2)%1000000007;
         
//         // ADD TO NUMBERS
//         // long long carry = 0;
//         // long long ans = 0;
//         // long long place = 1;
        
//         // while(num1 > 0 || num1 > 0 || carry > 0){
//         //     long long digit1 = num1%10;
//         //     long long digit2 = num2%10;
            
//         //     long digitsum = digit1 + digit2 + carry;
//         //     long newdigit = digitsum % 10;
            
//         //     ans = ans + newdigit * place;
            
//         //     carry = digitsum/10;
//         //     num1 /= 10; num2 /= 10; 
//         //     place *= 10; 
//         // }

//         return ans;
//     }
// };
// void printList(struct Node *Node) {
//     while (Node != NULL) {
//         printf("%d ", Node->data);
//         Node = Node->next;
//     }
//     printf("\n");
// }

// int main(void) {

//     int t;
//     cin >> t;
//     cin.ignore();
//     while (t--) {

//         struct Node *first = NULL;
//         struct Node *second = NULL;
//         vector<int> arr;
//         string input;
//         getline(cin, input);
//         stringstream ss(input);
//         int number;

//         while (ss >> number) {
//             arr.push_back(number);
//         }
//         for (int i = 0; i < arr.size(); i++) {
//             push(&first, arr[i]);
//         }
//         vector<int> brr;
//         string input2;
//         getline(cin, input2);
//         stringstream ss2(input2);
//         int number1;
//         while (ss2 >> number1) {
//             brr.push_back(number1);
//         }
//         for (int i = 0; i < brr.size(); i++) {
//             push(&second, brr[i]);
//         }
//         reverse(&first);
//         reverse(&second);
//         solution ob;
//         long long res = ob.multiplyTwoLists(first, second);
//         cout << res << endl;
//         freeList(first);
//         freeList(second);
//     }
//     return 0;
// }





// #include<iostream>
// using namespace std;
// long long fact(long long n){
// long long factorial=1;
// for(long long i=1;i<=n;i++){
// factorial*=i;}
// return factorial;}
// int main(){
// long long n;
// cin>>n;
// cout<<fact(n)<<endl;
// return 0;}

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





// #include<bits/stdc++.h>             // time pass question
// using namespace std;

// int main(){
//     string s;
//     cin>>s;
//     string ans = "";
    // vector<pair<int,int>> mapp;
    // for(int i=0; i<s.size(); i+=2){
    //     if(isdigit(s[i+2])){
    //         string num ="";
    //         num += s[i+1];
    //         num += s[i+2];
    //         int temp = stoi(num);
    //         mapp.push_back({s[i],temp});
    //         i++;
    //     }
    //     else{
    //         mapp.push_back({s[i],s[i+1]-'0'});
    //     }
    // }
    // for(auto it : mapp){
    //     while(it.second--){
    //         ans += it.first;
    //     }
    // }
//     cout<<ans;
//     return 0;
// }






#include <iostream>
#include <stack>
#include <vector>

using namespace std;

// Function to implement monotonic increasing stack
vector<int> monotonicIncreasing(vector<int>& nums)
{
    int n = nums.size();
    stack<int> st;
    vector<int> result;

    for (int i = 0; i < n; ++i) {

        while (!st.empty() && st.top() > nums[i]) {
     
            st.pop();
        }
        st.push(nums[i]);
    }
    while (!st.empty()) {
        result.insert(result.begin(), st.top());
        st.pop();
    }
    return result;
}

    int convert(string s){
        int ans = 0;
        string temp = "";
        temp += s[0];
        temp += s[1];

        ans += stoi(temp) * 60;
        temp = "";

        temp += s[3];
        temp += s[4];
        ans += stoi(temp);

        return ans;
    }

int main() {
    // vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6};
    // vector<int> result = monotonicIncreasing(nums);
    // cout << "Monotonic increasing stack: ";
    // for (int num : result) {
    //     cout << num << " ";
    // }
    // cout << endl;
    string s = "22:15";
    cout<<convert(s)<<endl;
    return 0;
}
