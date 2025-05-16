// #include<iostream>
// using namespace std;
// int main(){
// int n1,n2;
// cout<<"entre 2 number :";
// cin>>n1>>n2;
// char op;
// cout<<"enter operand :";
// cin>>op;
// switch(op){
// case '+':
// cout<<n1+n2<<endl;
// break;
// case'*':
// cout<<n1*n2<<endl;
// break;}
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int life=1;
// while(life!=n){
// cout<<"EAT"<<" & "<<"SLEEP"<<" & "<<"EXERCISE"<<" & "<<"CODE"<<endl;
// life++;}
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// for(int i=0;i<n;i++)
// a[i]=a[i]*a[i]*a[i];
// cout<<"CUBE OF THE ARRAY THAT YOU ENTERED:"<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// for(int i=0;i<n;i++)
// a[i]=a[i]*a[i];
// cout<<"SAQURE OF THE ARRAY THAT YOU ENTERED:"<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int array[n][n];
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// cin>>array[i][j];}} 
// for(int i=0;i<n;i++){
// for(int j=i;j<n;j++){
// int king=array[i][j];
// array[i][j]=array[j][i];
// array[j][i]=king;}}
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// cout<<array[i][j]<<" ";}
// cout<<endl;}
// return 0;}
 
// #include<iostream>
// using namespace std;
// int total(int a, int b, int c){
// int sum=a+b+c;
// return sum;}
// int main(){
// int a,b,c;
// cin>>a>>b>>c;
// cout<<total(a,b,c)<<endl;
// return 0;}  

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// vector<int> vector{ 1, 2, 3, 4, 5 };
// cout << "The vector is: "<<endl;
// for (int  x : vector)
// cout << x << " ";
// cout << "\n"; 
// return 0;}  

// #include<iostream>
// using namespace std;
// int main(){
// int a[]={1,2,3,4,5};
// cout<<sizeof(a[0])<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int a[]={1,2,3,4,5};
// cout<<"elements in the array:"<<endl;
// for(int x: a)
// cout<<x<<" ";
// cout<<endl;
// return 0: }

// #include<iostream>
// using namespace std;
// int main(){
// char s[100];
// cin.getline(s,100);
// cout<<s<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// string s;
// getline(cin,s);
// cout<<s<<endl;
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// void party(vector<string>v){
// for(auto i=v.begin();i!=v.end();i++)
// cout<<*i<<endl;}
// int main(){	
// vector<string>v{"KING","UNDERTAKER","RONNIE COLMEN"};
// v.push_back("king of kings");
// v.push_back("my name is paul heyman");
// v.push_back("DUSHYANT");
// cout<<"All he elements in the vector: ";
// party(v);
// for(auto x:v){
// cout<<x<<endl;}
// for(auto i=0;i<v.size();i++){
// cout<<v[i]<<endl;}
// cout<<"Number of the elements in the vector: "<<v.size();
// return 0;}

// #include<iostream>
// using namespace std;
// int sum(int x){
// if(x!=0)
// return (x+sum(x-1));
// else 
// return x;}
// int main(){
// int n;
// cout<<"enter you number until you want the addtion:"<<endl;
// cin>>n;
// cout<<sum(n)<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// int numberofdigits(int n){
// int count=0;
// int k=n;
// while(k!=0){
// int last=k%10;
// k=k/10;
// count++;}
// return count;}
// int  sumofdigit(int n){
// int sum=0;
// while(n!=0){
// int last=n%10;
// sum+=last;
// n=n/10;}
// return sum;}
// int main(){
// int n;
// cout<<"ENTER YOU NUMBER :"<<endl;
// cin>>n;
// cout<<"NUMBER OF SINGLE DIGITS:"<<endl;
// cout<<numberofdigits(n)<<endl;
// cout<<endl<<endl;
// cout<<"SUM OF DIGITS OF NUMBER THAT YOU ENTERED: "<<endl;
// cout<<sumofdidgits(n)<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
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
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"ARRAY BEFORE MERGE SORT:"<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// cout<<endl;
// mergesort(a,0,n-1);
// cout<<"ARRAY AFTER MERGE SORT:"<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}

// #include<iostream>
// using namespace std;
// void addfront(int n ,int a[],int key){
// for(int i=n;i>=0;i--){
// a[i+1]=a[i];}
// a[0]=key;}
// void addlast(int n,int a[],int key){
// a[n+1]=key;}
// void addmiddle(int n,int a[],int key,int index){
// for(int i=n+2;i>=index;i--){
// a[i+1]=a[i];}
// a[index-1]=key;}
// int main(){
// int n,key,index;
// cout<<"ENTER THE SIZE OF THE ARRAY:"<<endl;
// cin>>n;
// int a[n];
// cout<<"ENTER THE ELEMENT IN THE ARRAY:"<<endl;
// for(int i=0;i<n;i++) cin>>a[i];
// cout<<"ENTER THE KEY THAT YOU WANT TO ADD IN THE ARRAY:"<<endl;
// cin>>key;
// cout<<"ADDING THE ELEMENT IN THE FRONT OF ARRAY:"<<endl;
// addfront(n,a,key);
// for(int i=0;i<n+1;i++) cout<<a[i]<<" "; cout<<endl;
// cout<<"ADDING THE ELEMENT IN THE END OF ARRAY:"<<endl;
// addlast(n,a,key);
// for(int i=0;i<=n+1;i++) cout<<a[i]<<" "; cout<<endl;
// cout<<"ENTER THE INDEX WHERE YOU WANT TO INSERT A ELEMENT:"<<endl;
// cin>>index;
// cout<<"ADDING THE ELEMENT IN THE MIDDEL OF ARRAY:"<<endl;
// addmiddle(n,a,key,index);
// for(int i=0;i<=n+2;i++) cout<<a[i]<<" "; cout<<endl;
// return 0;}


// #include <bits/stdc++.h>
// using namespace std;
// class Solution{

// 	public:
//     int minCoins(int coins[], int M, int V) {
//         vector<int> ans;
//         for (int i = 0; i < M; i++) {
//             while (V >= coins[i]) {
//                 V -= coins[i];
//                 ans.push_back(coins[i]);
//             }
//         }
//         return ans.size();
//     } 
// };
// int main() 
// {
//    	int t;
//     cin >> t;
//     while (t--)
//     {
//         int v, m;
//         cin >> v >> m;
//         int coins[m];
//         for(int i = 0; i < m; i++)
//         	cin >> coins[i];
// 	    Solution ob;
// 	    cout << ob.minCoins(coins, m, v) << "\n";   
//     }
//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class Math {
//     public:
//     int number;
//     int number2;
//     Math(int n, int n2) {
//         number = n;
//         number2 = n2;
//     }
//     long factorial(long n) {
//         long ans = 1;
//         for (int i = 1; i <= n; i++) {
//             ans *= i;
//         }
//         return ans;
//     }

//     long biggestdigit(long n) {
//         long ans = INT_MIN;
//         while (n != 0) {
//             long x = n % 10;
//             ans = max(ans, x);
//             n = n / 10;
//         }
//         return ans;
//     }

//     long smallestdigit(long n) {
//         long ans = INT_MAX;
//         while (n != 0) {
//             long x = n % 10;
//             ans = min(ans, x);
//             n = n / 10;
//         }
//         return ans;
//     }

//     long countdigits(long n) {
//         int count = 0;
//         while (n != 0) {
//             long x = n % 10;
//             count++;
//             n = n / 10;
//         }
//         return count;
//     }

//     long reversenum(long n) {
//         long ans = 0;
//         while (n != 0) {
//             ans = ans * 10 + n % 10;
//             n = n / 10;
//         }
//         return ans;
//     }

//     bool checkpalind(long n) {
//         long x = n;
//         long ans = 0;
//         while (n != 0) {
//             ans = ans * 10 + n % 10;
//             n = n / 10;
//         }
//         return x == ans;
//     }

//     bool armstrong(long n) {
//         long original = n;
//         long x = n;
//         long ans = 0;
//         int count = 0;
//         while (x != 0) {
//             long num = x % 10;
//             count++;
//             x = x / 10;
//         }
//         while (n != 0) {
//             long y = n % 10;
//             ans += pow(y, count);
//             n = n / 10;
//         }
//         return original == ans;
//     }

//     bool primenumber(int n) {
//         if (n < 2) return false;
//         for (int i = 2; i <= sqrt(n); i++) {
//             if (n % i == 0) {
//                 return false;
//             }
//         }
//         return true;
//     }

//     void alldivisor(int n) {
//         for (int i = 1; i <= sqrt(n); i++) {
//             if (n % i == 0) {
//                 cout << i << endl;
//             }
//             if (n / i != i) {
//                 cout << n / i << endl;
//             }
//         }
//     }

//     int GCGHCD(int n, int m) {
//         int ans = 1;
//         for (int i = 1; i <= min(n, m); i++) {
//             if (n % i == 0 && m % i == 0) {
//                 ans = i;
//             }
//         }
//         return ans;
//     }

//     int GCGHCD2(int n, int m) {
//         while (n > 0 && m > 0) {
//             if (n > m) {
//                 n = n % m;
//             } else {
//                 m = m % n;
//             }
//         }
//         if (n == 0) return m;
//         return n;
//     }

//     void primefactor(int n) {
//         for (int i = 2; i <= sqrt(n); i++) {
//             if (n % i == 0 && primenumber(i)) {
//                 cout << i << endl;
//             }
//         }
//     }
// };

// int main() {
//     cout<<"ENTER THE THREE NUMBER FOR THAT YOU WANT TO DO MATHS CALCULATIONS: "<<endl;
//     long x;
//     int y, z;
//     cin >> x >> y >> z;

//     Math m(10,20);
//     cout<<m.number2<<endl;

//      cout << "THE FACTORAIL OF THE NUMBER THAT YOU ENTERS :  " << m.factorial(y) << endl;
//     // cout << "THE BIGGEST DIGIT  OF THE NUMBER THAT YOU ENTERS :  " << m.biggestdigit(x) << endl;
//     // cout << "THE SMALLEST DIGIT  OF THE NUMBER THAT YOU ENTERS :  " << m.smallestdigit(x) << endl;
//     // cout << "THE NUMBER OF  DIGIT  OF THE NUMBER THAT YOU ENTERS :  " << m.countdigits(x) << endl;
//     // cout << "THE REVERSE  OF THE NUMBER THAT YOU ENTERS :  " << m.reversenum(x) << endl;
//     // cout << "THE CHECK THE NUMBER THAT YOU ENTERS IS PALINDROME:   " << ((m.checkpalind(x)) ? "YES" : "NO") << endl;
//     // cout << "THE CHECK THE NUMBER THAT YOU ENTERS IS PRIME NUMBER:   " << ((m.primenumber(y)) ? "YES" : "NO") << endl;
//     // cout << "THE CHECK THE NUMBER THAT YOU ENTERS IS ARMSTRONG:   " << ((m.armstrong(y)) ? "YES" : "NO") << endl;
//     // cout << "THE CHECK THE NUMBER THAT YOU ENTERS IS ALL DIVISOR:  " << endl;
//     // m.alldivisor(y);
//     // cout << "THE GCD AND HIGHEST COMMON FACTOR OF GIVEN RANGE: " << m.GCGHCD(y, z) << endl;  //(WE CAN FIND ALL FACTOR ALSO)
//     // cout << "THE GCD AND HIGHEST COMMON FACTOR OF GIVEN RANGE: " << m.GCGHCD2(y, z) << endl;
//     // cout << "THE CHECK THE NUMBER THAT YOU ENTERS IS ALL PRIME FACTOR:  " << endl;
//     // m.primefactor(y);

//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;
// class Solution{
//     private:
//      long long int merge_helper(long long int arr[], int low, int high, int mid) {
//         long long int count = 0;
//         int left_size = mid - low + 1;
//         int right_size = high - mid;

//         vector<long long int> left(left_size);
//         vector<long long int> right(right_size);
    
//         for (int i = 0; i < left_size; i++) {
//             left[i] = arr[low + i];
//         }
//         for (int i = 0; i < right_size; i++) {
//             right[i] = arr[mid + 1 + i];
//         }
//         int i = 0;
//         int j = 0;
//         int k = low;
//         while (i < left_size && j < right_size) {
//             if (left[i] <= right[j]) {
//                 arr[k] = left[i];
//                 i++;
//             } else {
//                 arr[k] = right[j];
//                 j++;
//                 count += (left_size - i);
//             }
//             k++;
//         }
//         while (i < left_size) {
//             arr[k] = left[i];
//             i++;
//             k++;
//         }
//         while (j < right_size) {
//             arr[k] = right[j];
//             j++;
//             k++;
//         }
//         return count;
//     }
//     long long int merge_sort_helper(long long int arr[], int low, int high) {
//         long long int count = 0;
//         if (low < high) {
//             int mid = low + (high - low) / 2;
//             count += merge_sort_helper(arr, low, mid);
//             count += merge_sort_helper(arr, mid + 1, high);
//             count += merge_helper(arr, low, high, mid);
//         }
//         return count;
//     }
//   public:
//     long long int inversionCount(long long arr[], long long N){
//         return merge_sort_helper(arr, 0, N-1);
//     }
// };
// int main() {
//     int T;
//     cin >> T;
//     cin.ignore();
//     while (T--) {
//         int n;
//         vector<int> a;
//         string input;
//         getline(cin, input);
//         stringstream ss(input);
//         int num;
//         while (ss >> num)
//             a.push_back(num);
//         Solution obj;
//         cout << obj.inversionCount(a) << endl;
//         cout << "~" << endl;
//     }
//     return 0;
// }

