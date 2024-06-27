// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int counta=0;
// int countb=0;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int b[n];
// for(int i=0;i<n;i++)
// cin>>b[i];
// for(int i=0;i<n;i++){
// if(a[i]>b[i])
// counta++;
// else if(a[i]==b[i])
// continue;
// else
// countb++;}
// cout<<counta<<" "<<countb<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF SAQURE MATRIX: "<<endl;
// cin>>n;
// int leftsum=0;
// int rightsum=0;
// int a[n][n];
// cout<<"ENTER THE ELEMENTS IN THE MATRIX: "<<endl;
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// cin>>a[i][j];}}
// cout<<"TRANSPOSE OF THE MATRIX THAT YOU ENTERED:"<<endl;
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// cout<<a[j][i]<<" ";}cout<<endl;}
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// if(i==j)
// leftsum+=a[i][j];}}
// for(int i=0;i<n;i++){
// for(int j=n-1-i;j>=0;){
// rightsum+=a[i][j];
// break;}}
// cout<<"SUMS OF DIAGONALS ARE OF TRANSPOSE:"<<endl;
// cout<<"SUM OF LEFT DIAGONAL: "<<endl;
// cout<<leftsum<<endl;
// cout<<"SUM OF RIGHT DIAGONAL:"<<endl;
// cout<<rightsum<<endl;
// cout<<"DIFFERENCE OF SUM OF THE DIAGONALS OF A 2D ARRAY OR MATRIX:"<<endl;
// cout<<abs(rightsum-leftsum)<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int maxsum=0;
// int minsum=0;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// for(int i=0;i<n-1;i++)
// minsum+=a[i];
// for(int i=1;i<n;i++)
// maxsum+=a[i];
// cout<<"MAXIMUM AND MINMUM SUM IN THE ARRAY"<<endl;
// cout<<maxsum<<" "<<minsum<<endl;
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int count=0;
// int maxima=INT_MIN;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// for(int i=0;i<n;i++){
// if(a[i]>maxima)
// maxima=a[i];}
// for(int i=0;i<n;i++){
// if(a[i]==maxima)
// count++;}
// cout<<"MAXIMUM NUMBER OF THE MAXIMA ELEMENT IN THE ARRAY:"<<endl;
// cout<<count<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// for(int i=0;i<n;i++){
// if(a[i]>=38){
// if(a[i]%5==3)
// a[i]=a[i]+2;
// else if(a[i]%5==4)
// a[i]=a[i]+1;}}
// cout<<"ROUND OFF OF THE GRADES:"<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}

// #include<iostream>
// using namespace std;
// int findDigits(int n) {
// int k=n;
// int count=0;
// while(n!=0){
// int last=n%10;
// n=n/10;
// if(last==0)
// continue;
// else if(k%last==0)
// count++;}
// return count;}
// int main(){
// int n;
// cin>>n;
// cout<<"NUMBER OF THE DIGIT WHICH ABLE TO DIVIDE NUMBER THAT YOU ENTERED:"<<endl;
// cout<<findDigits(n)<<endl;
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// vector<int> ans;
// int leftsum[n];
// int rightsum[n];
// int sum=0;
// for(int i=0;i<n;i++){
// leftsum[i]=sum;
// sum=sum+a[i];}
// sum=0;
// for(int i=n-1;i>=0;i--){
// rightsum[i]=sum;
// sum+=a[i];}
// for(int i=0;i<n;i++)
// ans.push_back(abs(leftsum[i]-rightsum[i]));
// cout<<"LEFT AND RIGHT DIFFERENCE OF AN ARRAY:"<<endl;
// for(int i=0;i<n;i++)
// cout<<ans[i]<<" "; 
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// for(int i=0;i<n;i++){
// if(a[i]==0){
// a[i+1]=0;
// break;}}
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}



// #include<iostream>
// using namespace std;

// void bubblesort(int n,int a[]){
// for(int i=0;i<n;i++){
// for(int j=0;j<n-1-i;j++){
// if(a[j]>a[j+1]){
// int temp=a[j];
// a[j]=a[j+1];
// a[j+1]=temp;}}}}

// void selectionsort(int n,int a[]){
// for(int i=0;i<n-1;i++){
// for(int j=i+1;j<n;j++){
// if(a[i]>a[j])
// swap(a[i],a[j]);}}}

// void interstionsort(int n,int a[]){
// for(int i=0;i<n;i++){
// int j=i;
// while(j!=0&&a[j-1]>a[j]){
// swap(a[j-1],a[j]);
// j--;}}}

// void merge(int a[],int s,int m,int e){
// int i=s;
// int j=m+1;
// int k=s;
// int temp[(e-s)+1];
// while(i<=m && j<=e){
// if(a[i]<a[j]){
// temp[k]=a[i];
// k++;i++;}
// else{
// temp[k]=a[j];
// k++;j++;}}
// while(i<=m){
// temp[k]=a[i];
// k++;i++;}
// while(j<=e){
// temp[k]=a[j];
// k++;j++;}
// for(int i=s;i<=e;i++){
// a[i]=temp[i];}}
// void mergesort(int a[],int s,int e){
// if(s<e){
// int m=(s+e)/2;
// mergesort(a,s,m);
// mergesort(a,m+1,e);
// merge(a,s,m,e);}}

// int partition(int a[],int s,int e){
// int pivot=a[e];
// int index=s;
// for(int i=s;i<=e-1;i++){
// if(a[i]<=pivot){  
// int temp=a[i];
// a[i]=a[index];
// a[index]=temp;
// index++;}}
// int temp=a[e];
// a[e]=a[index];
// a[index]=temp;
// return index;}
// void quicksort(int a[],int s,int e){
// if(s<e){
// int p=partition(a,s,e);
// quicksort(a,s,(p-1));
// quicksort(a,p+1,e);}}

// int main(){
// int n;
// cout<<"ENTER THE SIZE OF THE ARRAY:"<<endl;
// cin>>n;
// cout<<"ENTER THE ELEMENST IN THE ARRAY:"<<endl;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"ARRAY BEFORE USING ANY SORTING ALGORITHMS:"<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// cout<<endl;
// bubblesort(n,a);
// selectionsort(n,a);
// interstionsort(n,a);
// mergesort(a,0,n-1);
// quicksort(a,0,n-1);
// cout<<"ARRAY AFTER USING ANY SORTION ALGORITHMS: "<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}

// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int  i=0;i<n;i++)
// cin>>a[i];
// int key;
// cin>>key;
// if(binary_search(a,a+n,key))
// cout<<"YES EXIST: "<<key<<endl;
// else
// cout<<"NOT EXIST:"<<endl;
// return 0;}

// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
// int n,x;
// cout<<"ENTER THE SIZE OF THE VECTOR:"<<endl;
// cin>>n
// cout<<"ENTER THE ELEMENTS IN THE VECTOR:"<<endl;
// vector<int>v;
// for(int i=0;i<n;i++){
// cin>>x;
// v.push_back(x);}
// return 0;}

// #include<iostream>
// using namespace std;
// int majorityelement(int a[],int n){
// for(int i=0;i<n;i++){
// int count=0;
// for(int j=i+1;j<n;j++){
// if(a[i]==a[j])
// count++;}}
// if(count>n/2)
// return a[i];
// return -1;}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"MAJORITY ELEMENT: "<<majorityelement(a,n)<<endl;
// return 0;}


// #include<iostream>
// using namespace std;
// int peakelement(int n,int a[]){
// for(int i=1;i<n-1;i++){
// if(a[i]>a[i+1] && a[i]>a[i-1])
// return a[i];}
// return a[n-1];}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"PEAK ELEMENT IN THE ARRAY: "<<peakelement(n,a)<<endl;
// return 0;}

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void frequency(int n,int a[]){
// unordered_map<int,int> m;
// for(int i=0;i<n;i++)
// m[a[i]]++;
// for(auto x: m)
// cout<<x.first<<"  "<<x.second<<endl;}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"TO COUNT THE FREQUENECY OF THE ELEMENTS:"<<endl;
// frequency(n,a);
// return 0;}



// bool cycleDetect(node* head) {
//     unordered_set<node*> hashTable;
//     while(head != NULL) {
//         if(hashTable.find(head) != hashTable.end()) return true;
//         hashTable.insert(head);
//         head = head->next;
//     }
//     return false;
// }


// int lengthOfLoop(Node *head) {
//     if(head == nullptr) return 0;
//     unordered_map<Node*,int> ans;
//     int posti=0;
//     while(head!=nullptr){
//       if (ans.find(head) != ans.end()) {
//         int level = posti - ans[head];
//         return level;
//       }
//       else{
//           ans[head]=posti;
//           posti++;
//           head = head->next;
//       }
//     }
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// int arraytonumber(vector<int> &nums){
// int ans=0;
// for(auto it : nums){
//     ans=ans*10+it;
// }
// return ans;}
// int main(){
// int n,x;
// cout<<"ENTER THE SIZE OF THE ARRAY:"<<endl;
// cin>>n;
// vector<int> nums;
// for(int i=0;i<n;i++) {
//     cin>>x;
//     nums.push_back(x);
// }
// cout<<"CONVERT AN ARRAY INTO A NUMBER: "<<arraytonumber(nums);
// return 0;}


// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     long long int ans = 0; 
//     string s = "";

//     for (auto it : a) {
//         s += to_string(it);
//     }

//     ans = stoll(s); 
//     cout << ans;

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// vector<int> numbertoarray(int n){
//     int i=n;
//     vector<int> nums;
//     while(i!=0){
//         nums.push_back(i%10);
//         i=i/10;
//     }
// return nums;
// }
// int main(){
// int n;
// cin>>n;
// vector<int> ans=numbertoarray(n);
// sort(ans.begin(),ans.end());
// for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<<" ";
// }
// return 0;}



// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;
// class Solution {
// public:
//     int countComponents(vector<int>& ans, vector<int>& nums) {
//         unordered_map<int, int> indexMap;
//         for (int i = 0; i < ans.size(); ++i) {
//             indexMap[ans[i]] = i;
//         }
//         int components = 0;
//         for (int i = 0; i < nums.size(); ++i) {
//             if (i > 0 && indexMap[nums[i]] != indexMap[nums[i - 1]] + 1) {
//                 components++;
//             }
//         }     
//         return components + 1; 
//     }
// };
// int main() {
//     vector<int> ans = {1, 2, 3, 4, 5, 6};
//     vector<int> nums = {2, 3, 4};
//     Solution solution;
//     int connectedComponents = solution.countComponents(ans, nums);
//     cout << "Number of connected components: " << connectedComponents << endl;
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//     long long int minValue(int a[], int b[], int n)
//     {
//         sort(a,a+n);
//         sort(b,b+n);
        
//         long long int ans=0;
        
//         for(int i=0;i<n;i++){
//             ans+=(a[i]*b[n-1-i]);
//         }
//         return ans;
//     }
// };
// int main()
//  {
//      int t;
//      cin>>t;
//      while(t--)
//      {
//          int n, i;
//          cin>>n;
//          int a[n], b[n];
//          for(i=0;i<n;i++)
//          cin>>a[i];
//          for(i=0;i<n;i++)
//          cin>>b[i];
//          Solution ob;
//          cout<< ob.minValue(a, b, n) <<endl;
//      }
	
// 	return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// void convertstringtovector(string &s){
//     istringstream iss(s);
//     vector<int> ans;
//     int i;
//     while(iss>>i){
//         ans.push_back(i);
//     }
//     for(auto it : ans){
//         cout<<it<<" ";
//     }
// }
// void convertvectortosring(vector<int> &nums){
//     string st ="";
//     for(auto it : nums)
//     st+=to_string(it);
//     cout<<st<<endl;
// }
// int main() {
//     string s = "10 20 30 40 50"; 
//     vector<int> nums = {11,22,33,44,55,66,77};
//     convertstringtovector(s);
//     cout<<endl;
//     convertvectortosring(nums);
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:    
//     vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
//     {
//         set<int> ans;
//         int i=0,j=0,k=0;
//         while(i<n1 && j<n2 && k<n3){
//             if(A[i] == B[j] && B[j] == C[k]){
//                 ans.insert(A[i]);
//                 i++; j++; k++;
//             }
//             else if(A[i]<B[j]) i++;
//             else if(B[j]<C[k]) j++;
//             else k++;
//         }
//         vector<int> nums;
//         for(auto it : ans) nums.push_back(it);
//         return nums;
//     }

// };
// int main ()
// {
//     int t; cin >> t;
//     while (t--)
//     {
//         int n1, n2, n3; 
//         cin >> n1 >> n2 >> n3;
//         int A[n1];
//         int B[n2];
//         int C[n3];
        
//         for (int i = 0; i < n1; i++) cin >> A[i];
//         for (int i = 0; i < n2; i++) cin >> B[i];
//         for (int i = 0; i < n3; i++) cin >> C[i];
        
//         Solution ob;
        
//         vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
//         if (res.size () == 0) 
//             cout << -1;
//         for (int i = 0; i < res.size (); i++) 
//             cout << res[i] << " "; 
//         cout << endl;
//     }
// }




// #include <bits/stdc++.h>
// using namespace std;
// void toBinary(int n)
// {
//     if(n == 0) {
//         cout<<"0";
//         return ;
//     }
//    int toBinary[32];
//    int i=0;
//    while(n!=0){
//        toBinary[i]=n%2;
//        n=n/2;
//        i++;
//    }
//     for (int j = i - 1; j >= 0; j--) {
//        cout << toBinary[j];
//    }     
// }
// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    int n;
// 	    cin>>n;
	    
// 	    toBinary(n);
// 	    cout<<endl;
// 	}
// 	return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// class Solution{
// public:
// 	string removeDuplicates(string str) {
// 	    unordered_map<char , int> mapp;
// 	    string ans="";
// 	    for(int i=0;i<str.length();i++){
// 	        if(mapp.find(str[i]) == mapp.end()){
// 	            ans.push_back(str[i]);
// 	            mapp[str[i]]++;
// 	        }
// 	    }
// 	    return ans;
// 	}
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string str;
//         cin >> str;
//         Solution ob;
//         auto ans = ob.removeDuplicates(str);
//         cout << ans << "\n";
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// class Solution
// {
//     public:
//     vector<int> kLargest(int arr[], int n, int k)
//     {
//         priority_queue<int> pq;
//         for(int i=0;i<n;i++){
//             pq.push(arr[i]);
//         }
//         vector<int> ans;
//         while(k>0 && !pq.empty()){
//             auto temp = pq.top(); pq.pop();
//             ans.push_back(temp);
//             k--;
//         }
//         return ans;
//     }
// };
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n, k;
//         cin >> n >> k;
//         int arr[n];
//         for(int i = 0; i < n;i++)
//             cin>>arr[i];
//         Solution ob;
//         vector<int> result = ob.kLargest(arr, n, k);
//         for (int i = 0; i < result.size(); ++i)
//             cout<<result[i]<<" ";
//         cout << endl;  
//     }
//     return 0;
// }
