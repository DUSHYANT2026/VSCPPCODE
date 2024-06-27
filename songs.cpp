// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int key;
// cin>>key;
// int count=0;
// for(int i=0;i<n;i++){
// if(a[i]==key){
// count++;}}
// cout<<count<<endl;    
// return 0;}
 
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=2;i<=sqrt(n);i++){
// if(n%i==0){
// cout<<n<<" not a prime number"<<endl;
// break; }
// if(i==n)
// cout<<"prime number"<<endl;}
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<=n;i++){
// cin>>a[i];}
// int max=INT_MIN;
// int min=INT_MAX;
// for(int i=0;i<=n;i++){
// if(a[i]>max)
// max=a[i];
// if(a[i]<min)
// min=a[i];}
// cout<<max<<" "<<min<<endl;
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// vector<int> nums;
// while(n!=0){
//     nums.push_back(n%10);
//     n=n/10;
// }
// reverse(nums.begin(),nums.end());
// for(int i=0;i<nums.size();i++){
//     cout<<nums[i]<<" ";
// }
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int s=0;
// int e=n-1;
// while(s<e){
// swap(a[s],a[e]);
// s++;
// e--;}
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}

// #include<iostream>
// using namespace std;
// int linear(int a[],int n,int key){
// for(int i=0;i<n;i++){
// if(a[i]==key)
// return i+1;}
// return -1;}
// int main(){
// int n,key;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cin>>key;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// cout<<endl;
// cout<<linear(a,n,key)<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// int binary(int a[],int n, int key){
// int s=0;
// int e=n-1;
// while(s<e){
// int mid=(s+e)/2;
// if(a[mid]==key)
// return mid+1;
// else if(a[mid]>key)
// e=mid-1;	
// else(a[mid]<key);
// s=mid+1;}
// return -1;}
// int main(){
// int n,key;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cin>>key;
// cout<<binary(a,n,key)<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n,x,y;
// cin>>n;
// int a[n][n];
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// cin>>a[i][j];}}
// cout<<"The matrix is: "<<endl;
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// cout<<a[i][j]<<" ";}cout<<endl;}
// cout<<"Position of the element in the matrix:"<<endl;
// cin>>y;
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// if(a[i][j]==y)
// cout<<i<<" "<<j<<endl;}}
// cout<<endl;
// cout<<"Transpose of the matrix: "<<endl;
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// int temp=a[i][j];
// a[i][j]=a[j][i];
// a[j][i]=temp;}}
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// cout<<a[j][i]<<" ";}cout<<endl;}
// cout<<"Position of the element in the transpose:"<<endl;
// cin>>x;
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// if(a[j][i]==x)
// cout<<i<<" "<<j<<endl;}}
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// for(int i=0;i<n-1;i++){
// for(int j=i+1;j<n;j++){
// if(a[i]>a[j]){
// int temp=a[i];
// a[i]=a[j];
// a[j]=temp;}}}
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0; }

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int j=0;
// while(j<n){
// for(int i=0;i<n-j;i++){
// if(a[i]>a[i+1]){
// int temp=a[i];
// a[i]=a[i+1];
// a[i+1]=temp;}}
// j++;}
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// sort(a,a+n);
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
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
// sort(v.begin(),v.end());
// for(auto j=v.begin();j!=v.end();j++){
// cout<<*j<<" ";}
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
// for(auto j=0;j<v.size();j++){
// cout<<v[j]<<" ";}
// return 0;}

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// vector<int>v(n,0);
// for(int i=0;i<n;i++)
// cout<<v[i]<<" ";
// return 0;}
 
// #include<iostream>
// using namespace std;
// void merge(int a[],int s,int m,int e){
// int i=s;
// int j=m+1;
// int k=s;
// int temp[e-s+1];
// while(i<=m&&j<=e){
// if(a[i]<=a[j]){
// temp[k]=a[i];
// k++;
// i++;}
// else{
// temp[k]=a[j];
// k++;
// j++;}}
// while(i<=m){
// temp[k]=a[i];
// k++;
// i++;}
// while(j<=e){
// temp[k]=a[j];
// k++;
// j++;}
// for(int x=s;x<=e;x++)
// a[x]=temp[x];}
// void mergesort(int a[],int s,int e){
// if(s<e){
// int m=(s+e)/2;
// mergesort(a,s,m);
// mergesort(a,m+1,e);
// merge(a,s,m,e);}}
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF THE ARRAY:"<<endl;
// cin>>n;
// int a[n];
// cout<<"ENTER THE ELEMENTS IN YOUR ARRAY:"<<endl;
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"ARRAY BEFORE USING SORTION ALGORITHM:"<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// cout<<endl;
// mergesort(a,0,n-1);
// cout<<"ARRAY AFTER USING MERGE SORT SORTION ALGORITHM:"<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}

// #include<iostream>
// using namespace std;
// void insertelement(int n,int a[],int index,int element){
// for(int i=n;i>=index;i--)
// a[i]=a[i-1];
// a[index-1]=element;}
// int main(){
// int n,index,element;
// cout<<"ENTER THE SIZE OF THE ARRAY:"<<endl;
// cin>>n;
// int a[n];
// cout<<"ENTER THE ELEMENT IN THE ARRAY:"<<endl;
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"ENTER THE INDEX IN ARRAY FOR INSERTING ELEMENT :"<<endl;
// cin>>index;
// cout<<"ENTER THE ELEMENT:"<<endl;
// cin>>element;
// insertelement(n,a,index,element);
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}

// #include<iostream>
// using namespace std;
// int  removedulicates(int n,int a[]){
// int index=0;
// for(int i=0;i<n;i++){
// if(a[index]!=a[i]){
// a[index+1]=a[i];
// index++;}}
// return index+1;}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<removedulicates(n,a);
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// int gcd(int a,int b){
// if(b==0){
// return a;}
// return gcd(b, a%b);}
// int main(){
// int a,b;
// cout<<"ENTER THE NUMBER: "<<endl;
// cin>>a>>b;
// cout<<"THE GCD OD THE TWO NUMBER IS: "<<gcd(a,b);}


// #include<iostream>
// using namespace std;
// int factorial(int n){
// int fact=1;
// for(int i=1;i<=n;i++)
// fact=fact*i;
// return fact;}
// void strongnumber(int n){
// int i=n;
// int sum=0;
// while(i!=0){
// sum+=factorial(i%10);
// i=i/10;}
// if(sum == n)
// cout<<n<<" THAT NUMBER ENTERED BY YOU IS A STRONG NUMBER:"<<endl; 
// else
// cout<<"NO NUMBER THTA YOU ENETRED IS NOT A STRING NUMBER: "<<n<<endl;}
// int main(){
// int n;
// cin>>n;
// strongnumber(n);
// return 0;}



// #include<bits/stdc++.h>
// using namespace std;
// class Solution
// {
// private:
// int factorial(int n){
//     if(n<1) return 0;
//     int fact=1;
//     for(int i=1;i<=n;i++)
//     fact*=i;
//     return fact;
// }
// public:
// 		int is_StrongNumber(int n)
// 		{
// 		    int i=n;
// 		    int sum=0;
// 		    while(i!=0){
// 		        sum+=factorial(i%10);
// 		        i=i/10;
// 		    }
// 		    return sum==n;
// 		}
// };
// int main(){
//     int T;
//     cin >> T;
//     while(T--)
//     {
//     	int n; 
//     	cin >> n;
//     	Solution ob;
//     	int ans = ob.is_StrongNumber(n);
//     	cout << ans <<"\n";
//     }
// 	return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// class Solution
// {
//    public:
//     int findSum(int A[], int N)
//     {
//     	int mini=INT_MAX;
//     	int maxi=INT_MIN;
    	
//     	for(int i=0;i<N;i++){
//     	    if(A[i]>maxi){
//     	        maxi=A[i];
//     	    }
//     	    if(A[i]<mini){
//     	        mini=A[i];
//     	    }
//     	}
//     	return maxi+mini;
//     }

// };
// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    int n;
// 	    cin>>n;
// 	    int arr[n];
// 	    for(int i=0;i<n;i++)
// 	      cin>>arr[i];
// 	    Solution ob;  
// 	    int ans=ob.findSum(arr, n);
// 	    cout<<ans;
// 	    cout<<"\n";
// 	}
// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//    vector<int>kthSmallestNum(int n, vector<vector<int>>&range, int q, vector<int>queries){
//         set<int> s;
//         for(auto it: range){
//             int left = it[0];
//             int right = it[1];
//             for(int i=left;i<=right;i++){
//                s.insert(i);
//             }
//         }
       
//         vector<int> newnums;
//         for(auto it : s) newnums.push_back(it);
        
//         vector<int> ans(q,-1);
//         for (int i = 0; i < q; i++) {
//             int index = queries[i] - 1;
//             if (index >= 0 && index < newnums.size()) {
//                 ans[i] = newnums[index];
//             } else {
//                 ans[i] = -1; 
//             }
//         }
//         return ans; 
//     } 
// };
// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    int n;
// 	    cin >> n;
// 	    vector<vector<int>>range(n, vector<int>(2, 0));
// 	    for(int i = 0 ; i < n; i++){
// 	        cin >> range[i][0] >> range[i][1];
// 	    }
// 	    int q;
// 	    cin >> q;
// 	    vector<int>queries;
// 	    for(int i = 0 ; i < q; i++){
// 	        int x;
//             cin >> x;
// 	        queries.push_back(x);
// 	    }
// 	    Solution ob;
// 	    vector<int>ans = ob.kthSmallestNum(n, range, q, queries);
// 	    for(auto it : ans){
// 	        cout << it << " ";
// 	    }
// 	    cout << endl;
// 	}
// 	return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// vector<int> nums;
// while(n!=0){
//     nums.push_back(n%10);
//     n=n/10;
// }
// reverse(nums.begin(),nums.end());
// for(int i=0;i<nums.size();i++){
//     cout<<nums[i]<<" ";
// }
// return 0;}