// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF ARRAY:"<<endl;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"AFTER SORT HE ARRAY:"<<endl;
// sort(a,a+n);
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// cout<<endl;
// cout<<"THE LARGEST ELEMENT INT HE ARRAY:"<<endl;
// cout<<a[n-1]<<" ";
// cout<<"THE SECOND LARGEST ELEMENT IN THE ARRAY WHEN THERE IS NO DUPLICATE ELEMENTS:"<<endl;
// cout<<a[n-2]<<endl;
// cout<<"THE SECOND LARGEST ELEMENT IN THE ARRAY WHEN  THERE IS DUPLICARE ELEMENTS:"<<endl;
// for(int i=n-2;i>0;i--){
// if(a[i]!=a[n-1])
// cout<<a[i];
// break; }
// return 0; }

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF THE ARRAY:"<<endl;
// cin>>n;
// cout<<"ENTER YOUR ARRAY:"<<endl;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int max=INT_MIN;
// for(int i=0;i<n;i++)
// if(a[i]>max)
// max=a[i];
// cout<<"LARGEST ELEMENT IN THE ARRAY THAT YOU ENTERED:"<<endl;
// cout<<max<<endl;
// return 0;}

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF THE ARRAY:"<<endl;
// cin>>n;
// cout<<"ENTER YOUR ARRAY:"<<endl;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int max=a[0];
// int smax=INT_MIN;
// for(int i=0;i<n;i++)
// if(a[i]>max)
// max=a[i];
// cout<<"LARGEST ELEMENT IN THE ARRAY:"<<endl;
// cout<<max<<endl;
// for(int i=0;i<n;i++)
// if(a[i]>smax && a[i]!=max)
// smax=a[i];
// cout<<"SECOND LARGEST ELEMENT IN THE ARRAY THAT YOU ENTERED:"<<endl;
// cout<<smax<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// int checksort(int n, int a[]){
// for(int i=1;i<n;i++){
// if(a[i]>=a[i-1])
// return true;
// else
// return false;}
// return true;}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<checksort(n,a)<<endl;
// if(checksort(n,a))
// cout<<"ARRAY THET YOU ENTERS IS SORTED"<<endl;
// else
// cout<<"ARRAY THAT YOU ENETED IS NOT SORTED:"<<endl;
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n,x;
// cin>>n;
// set<int> s;
// for(int i=0;i<n;i++){
// cin>>x;
// s.insert(x);}
// cout<<"ARRAY AFTER REMOVING THE DUPLICATES ELEMENTS FROME THE ARRAY:"<<endl;
// for(auto j=s.begin();j!=s.end();j++)
// cout<<*j<<" ";
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int temp=a[0];
// a[0]=a[n-1];
// a[n-1]=temp;
// cout<<"CHANGE THE FIRST AND LAST ELEMENT IN THE ARRAY: "<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}

// #include<iostream>
// using namespace std;
// int duplicate(int n,int a[]){
// int i=0;
// for(int j=0;j<n;j++){
// if(a[i]!=a[j]){
// a[i+1]=a[j];
// i++;}}
// return i;}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<duplicate(n,a)<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// void twosum(int n,int a[],int key){
// for(int i=0;i<n;i++){
// for(int j=i+1;j<=n;j++){
// int sum=a[i]+a[j];
// if(sum==key){
// cout<<i<<" "<<j<<" ";}}}}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int key;
// cin>>key;
// twosum(n,a,key);
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// bool twosum(int a[],int target,int n){
// int s=0;
// int e=n-1;
// sort(a,a+n);
// while(s<e){
// int sum=a[s]+a[e];
// if(sum==target) return true;
// else if(sum>target) 
// e--;
// else 
// s++;}
// return false;}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int target;
// cin>>target;
// if(twosum(a,target,n))
// cout<<"yes"<<endl;
// else 
// cout<<"no"<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// void leftrotate(int a[],int n){
// cout<<"LEFT ROTATION OF ELEMENTS IN THE ARRAY: "<<endl;
// int temp=a[0];
// for(int i=1;i<n;i++){
// a[i-1]=a[i];}
// a[n-1]=temp;}
// void rightrotate(int a[],int n){
// cout<<"RIGHT ROTAION OF ELEMENTS IN THE ARRAY: "<<endl;
// int temp=a[n-1];
// for(int i=n-1;i>0;i--){
// a[i]=a[i-1];}
// a[0]=temp;}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// leftrotate(a,n);
// cout<<endl;
// rightrotate(a,n);
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}

// #include<iostream>
// using namespace std;
// void reverse(int a[],int s,int e){
// while(s<e){
// int temp=a[s];
// a[s]=a[e];
// a[e]=temp;
// s++;e--;}}
// void leftrotate(int a[],int n,int d){
// d=d%n;
// reverse(a,0,d-1);
// reverse(a,d,n-1);
// reverse(a,0,n-1);}
// void rightrotate(int a[],int n,int d){
// d=d%n;
// reverse(a,0,n-1);
// reverse(a,0,d-1);
// reverse(a,d,n-1);}    
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int d;
// cout<<"ENTER THE NUMBER BUy WHICH YOU WANT TO SHIFT THE ARRAY:"<<endl;
// cin>>d;
// leftrotate(a,n,d);
// cout<<endl;
// rightrotate(a,n,d);
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}

// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// void leftrotate(int a[],int n,int d){
// d=d%n;
// reverse(a,a+d);
// reverse(a+d,a+n);
// reverse(a,a+n);}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int d;
// cout<<"ENTER THE NUMBER BUy WHICH YOU WANT TO SHIFT THE ARRAY:"<<endl;
// cin>>d;
// leftrotate(a,n,d);
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}

// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// void rightrotate(int a[],int n,int d){
// d=d%n;
// reverse(a,a+n);
// reverse(a,a+d);
// reverse(a+d,a+n);}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int d;
// cout<<"ENTER THE NUMBER BUy WHICH YOU WANT TO SHIFT THE ARRAY:"<<endl;
// cin>>d;
// rightrotate(a,n,d);
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}

// #include<iostream>
// using namespace std;
// void merging(int a[],int arr[],int n,int m){
// int s1=0;
// int s2=0;
// int k=0;
// int temp[n+m];
// while(s1<=n&&s2<=m){
// if(a[s1]<arr[s2]){
// temp[k]=a[s1];
// k++;s1++;}
// else{
// temp[k]=arr[s2];
// k++;s2++;}}
// while(s1<=n){
// temp[k]=a[s1];
// k++;s1++;} 
// while(s2<=m){
// temp[k]=arr[s2];
// k++;s2++;} 
// for(int i=0;i<(n+m);i++)
// a[i]=temp[i];}
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF FIRST ARRAY:"<<endl;
// cin>>n;
// int a[n];
// cout<<"ENTER THE ELEMENTS IN THE ARRAY: "<<endl;
// for(int i=0;i<n;i++)
// cin>>a[i];
// int m;
// cout<<"ENTER THE SIZE OF SECOND ARRAY:"<<endl;
// cin>>m;
// int arr[m];
// cout<<"ENTER THE ELEMENTS IN THE ARRAY: "<<endl;
// for(int j=0;j<m;j++)
// cin>>arr[j];
// merging(a,arr,n,m);
// cout<<"ARRAY MADE BY COMBINE TWO ARRAY:"<<endl;
// for(int i=0;i<(n+m);i++)
// cout<<a[i]<<" ";
// cout<<endl;
// int key;
// cout<<"ENTER THE NUMBER THAT YOU WANT TO FIND: "<<endl;
// cin>>key;
// for(int i=0;i<(n+m);i++){
// if(a[i]==key)
// cout<<i<<" ";}
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int sum=0;
// int maxsum=INT_MIN;
// for(int i=0;i<n;i++){
// sum=sum+a[i];
// maxsum=max(maxsum,sum);
// if(sum<0) sum=0;}
//cout<<"MAXIMUM SUM OF THE SUBARRAY:WITH TIME COMPLEXCITY OF 0(N)"<<endl;
// cout<<maxsum<<endl;
// return 0;} 

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int maxsum=INT_MIN;
// for(int i=0;i<n;i++){
// for(int j=i;j<n;j++){
// int sum=0;
// for(int k=i;k<=j;k++){
// sum=sum+a[k];
// maxsum=max(maxsum,sum);}}}
// cout<<"MAXIMUM SUM OF THE SUBARRAY:WITH TIME COMPLEXCITY OF 0(N^3)"<<endl;
// cout<<maxsum<<endl;
// return 0;} 

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
// for(int i=0;i<n;i++){
// int sum=0;
// for(int j=i+1;j<n;j++){
// sum=sum+a[j];
// if(sum==key)
// for(int s=i;s<j;s++)
// cout<<a[s]<<" "<<endl;}}
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int positive=0;
// int negative=1;
// vector<int>ans(n,0);
// for(int i=0;i<n;i++){
// if(a[i]<0){
// ans[negative]=a[i];
// negative+=2;}
// else{ 
// ans[positive]=a[i];
// positive+=2;}}
// cout<<"REARRANGE THE ARRAY AT FIRST PLACE WITH POSIITIVE AND SECOND WITH NEGATIVE ALTERNATIVELY:"<<endl;
// for(int i=0;i<n;i++)
// cout<<ans[i]<<" ";
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int positive=0;
// int negative=1;
// vector<int>ans(n,0);
// for(int i=0;i<n;i++){
// if(a[i]%2==0){
// ans[positive]=a[i];
// positive+=2;}
// else{ 
// ans[negative]=a[i];
// negative+=2;}}
// cout<<"REARRANGE THE ARRAY FIRST PLACE EVEN AND THEN ODD ALTERNATE:"<<endl;
// for(int i=0;i<n;i++)
// cout<<ans[i]<<" ";
// return 0;}

// #include<iostream>
// using namespace std;
// void threesum(int n,int a[],int key){
// for(int i=0;i<n-1;i++){
// for(int j=i+1;j<n;j++){
// for(int k=j+1;k<=n;k++){
// int sum=a[i]+a[j]+a[k];
// if(sum==key)
// cout<<i<<" "<<j<<" "<<k<<endl;}}}}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int key;
// cin>>key;
// threesum(n,a,key);
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n][n];
// for(int i=1;i<=n;i++){
// for(int j=1;j<=n;j++)
// cin>>a[i][j];}
// cout<<"ROTATE THE ARRAY BY 90 DEGREE: "<<endl;
// for(int i=1;i<=n;i++){
// for(int j=n;j>=1;j--){
// cout<<a[j][i]<<" ";}cout<<endl;}
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// void rotatearray(vector<vector<int>> nums){
// for(int i=0;i<nums.size();i++){
// for(int j=0;j<i;j++){
// int temp=nums[i][j];
// nums[i][j]=nums[j][i];
// nums[j][i]=temp;}}
// for(int i=0;i<nums.size();i++){
// reverse(nums[i].begin(),nums[i].end());}}
// int main(){
// vector<vector<int>> nums;
// nums={{1,2,3},{4,5,6},{7,8,9}};
// rotatearray(nums);
// for(int i=0;i<nums.size();i++){
// for(int j=0;j<nums[0].size();j++){
// cout<<nums[i][j]<<" ";}cout<<endl;}
// return 0;}

// #include<iostream>
// using namespace  std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"TO FIND THE LEADER(ALL THE ELEMENT IN THE RIGHT IS SMALLER) IN THE ARRAY: "<<endl;
// for(int i=0;i<n;i++){
// bool leader=true;
// for(int j=i+1;j<n;j++){
// if(a[j]>a[i]){
// leader=false;
// break;}}
// if(leader==true)
// cout<<a[i]<<" ";}
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF THE ELEMENT: "<<endl;
// cin>>n;
// int a[n];
// int max1=0;
// int max2=-1;
// int max3=INT_MIN;
// cout<<"ENTER THE ELEMENTS IN THE ARAAY: "<<endl;
// for(int i=0;i<n;i++)
// cin>>a[i];
// for(int i=0;i<n;i++){
// if(a[i]>max1)
// max1=a[i];}
// for(int i=0;i<n;i++){
// if(a[i]>max2&&a[i]!=max1)
// max2=a[i];}
// for(int i=0;i<n;i++){
// if(a[i]>max3&&a[i]<max2)
// max3=a[i];}
// cout<<"THIRD LARGEST ELEMENT IN THE ARRAY: "<<max3<<endl;
// cout<<"LARGEST ELEMENT INT THE ARRAY: "<<max1<<endl;
// cout<<"SECOND LARGEST ELEMENT IN THE ARRAY: "<<max2<<endl;
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF THE ARRAY: "<<endl;
// cin>>n;
// int a[n];
// cout<<"ENTER THE ELEMENTS IN THE ARAAY: "<<endl;
// for(int i=0;i<n;i++)
// cin>>a[i];
// sort(a,a+n);
// cout<<"THIRD LARGEST ELEMENT IN THE ARRAY: "<<a[n-3]<<endl;
// cout<<"LARGEST ELEMENT INT THE ARRAY: "<<a[n-1]<<endl;
// cout<<"SECOND LARGEST ELEMENT IN THE ARRAY: "<<a[n-2]<<endl;
// return 0;}


// #include<iostream>
// using namespace std;
// int subarraysum1(int n,int a[],int key){
// int count=0;
// for(int i=0;i<n-1;i++){
// for(int j=i+1;j<n;j++){
// int sum=0;
// for(int k=i;k<=j;k++){
// sum=sum+a[k];
// if(sum==key)
// count++;}}}
// return count;}

// int subarraysum2(int n,int a[],int key){
// int count=0;
// int sum;
// for(int i=0;i<n;i++){
// sum=0;
// for(int j=i;j<n;j++){
// sum+=a[j];
// if(sum==key)
// count++;}}
// return count;}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int key;
// cin>>key;
// cout<<"NUMBER OF SUBARRAY WITH SUM KEY: "<<endl;
// cout<<subarraysum2(n,a,key)<<endl;
// return 0;}

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int maxproduct(int n,int a[]){
// int maxa=INT_MIN;
// for(int i=0;i<n;i++){
// int prod=a[i];
// for(int j=i+1;j<n;j++){
// maxa=max(maxa,prod);
// prod*=a[j];}
// maxa=max(maxa,prod);}
// return maxa;}
// int optimalmaxproduct(int n,int a[]){
// int maxa=INT_MIN; 
// int prefix=1;
// int surfix=1;
// for(int i=0;i<n;i++){
// if(prefix==0) prefix=1;
// if(surfix==0) surfix=1;
// prefix*=a[i];
// surfix*=a[n-i-1];
// maxa=max(maxa,max(surfix,prefix));}
// return maxa;}
// int maximumofthreenumber(int n,int a[]){
// sort(a,a+n);
// int ans=a[n-1]*a[n-2]*a[n-3];
// return ans;}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"MAXIMUM SUBARRAY: "<<maxproduct(n,a)<<endl;
// cout<<"MAXIMUM PRODUCT OF THE SUBARRAY: "<<optimalmaxproduct(n,a)<<endl;
// cout<<"MAXIMUM OF PRODUCT OF THREE NUMBER IN THE ARRAY:: "<<maximumofthreenumber(n,a)<<endl;
// return 0;}


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int subarray(vector<int>& a,int n,int key){
// int maxi=0;
// for(int i=0;i<n;i++){
// int sum=0;
// for(int j=i;j<n;j++){
// sum+=a[j];
// if(sum==key)
// maxi=max(maxi,(j-i+1));}}
// return maxi;}

// int subarray2(vector<int>& arr,int n,int k){
// int start=0, end=-1, sum=0, maxi=0;
// while(start<n){
// while((end+1<n)&&(sum+arr[end+1]<=k))
// sum+=arr[++end];
// if(sum==k)
// maxi=max(maxi,(end-start+1));
// sum-=arr[start];
// start++;}
// return maxi;}

// void moveZeroesback(vector<int>& nums){
// int n=nums.size();
// int numberofzero=0;
// for(int i=0;i<n;i++){
// numberofzero+=(nums[i]==0);}
// vector<int>ans;
// for(int i=0;i<n;i++){
// if(nums[i]!=0){
// ans.push_back(nums[i]);}}
// while(numberofzero--){
// ans.push_back(0); }
// for(int i=0;i<n;i++){
// nums[i]=ans[i];}}

// void moveZeroesfront(vector<int>& nums) {
// int n=nums.size();
// int numberofzero=0;
// for(int i=0;i<n;i++){
// numberofzero+=(nums[i]==0);}
// vector<int>ans;
// while(numberofzero--){
// ans.push_back(0); }
// for(int i=0;i<n;i++){
// if(nums[i]!=0){
// ans.push_back(nums[i]);}}
// for(int i=0;i<n;i++){
// nums[i]=ans[i];}}

// int main(){  
// int n,x;
// cout<<"ENTER SIZE OF THE VECTOR:"<<endl;
// cin>>n;
// cout<<"ENTER THE ELEMENTS IN THE VECTOR: "<<endl;
// vector<int> a;
// for(int i=0;i<n;i++){
// cin>>x;
// a.push_back(x);}
// // int key;
// // cout<<"ENTER THE KEY:"<<endl;
// // cin>>key;
// // cout<<"LONGEST SUBARRY WITH SUM EQUAL TO KEY:" <<endl;
// // cout<<subarray2(a,n,key);
// moveZeroesback(a);
// for(int i=0;i<n;i++){
// cout<<a[i]<<" ";}
// moveZeroesfront(a);
// cout<<endl;
// for(int i=0;i<n;i++){
// cout<<a[i]<<" ";}
// return 0;}


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void mergesortedarray(int n,int m,int a[],int arr[]){
// int temp[(n+m)];
// int k=0;
// int i=0;
// int j=0;
// while(i<=n && j<=m){
// if(a[i]<arr[j]){
// temp[k++]=a[i++];}
// else{
// temp[k++]=arr[j++];}}
// while(i<=n){
// temp[k++]=a[i++];}
// while(j<=m){
// temp[k++]=arr[j++];}
// sort(temp,temp+(n+m));
// for(int i=0;i<n+m;i++)
// cout<<temp[i]<<" ";
// cout<<endl;}

// void optimalsort(int n,int m,int a[],int arr[]){
// int right=0;
// int left=n-1;
// while(left>=0 && right<m){
// if(a[left]>arr[right]){
// swap(a[left],arr[right]);
// left--;right++;}
// else
// break;}
// sort(a,a+n);
// sort(arr,arr+m);}
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF THE FIRST ARRAY:"<<endl;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"ENTER THE SIZE OF THE SECOND ARRAY:"<<endl;
// int m;
// cin>>m;
// int arr[m];
// for(int j=0;j<m;j++)
// cin>>arr[j];
// cout<<"MERGE TWO SORTED ARRAY:"<<endl;
// // mergesortedarray(n,m,a,arr);
// optimalsort(n,m,a,arr);
// for(int i=0;i<n;i++){
// cout<<a[i]<<" ";}
// for(int i=0;i<m;i++){
// cout<<arr[i]<<" ";}
// return 0;}


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> threesumnormal(vector<int> &arr){
// set<vector<int>> st;
// for(int i=0;i<arr.size();i++){
// for(int j=i+1;j<arr.size();j++){
// for(int k=j+1;k<arr.size();k++){
// if(arr[i]+arr[j]+arr[k]==0){
// vector<int> temp={arr[i],arr[j],arr[k]};
// sort(temp.begin(),temp.end());
// st.insert(temp);}}}}
// vector<vector<int>> ans(st.begin(),st.end());
// return ans;}

// vector<vector<int>> threesumbetter(vector<int> &arr){
// set<vector<int>> st;
// for(int i=0;i<arr.size();i++){
// set<int> hashset;
// for(int j=i+1;j<arr.size();j++){
// int third=-(arr[i]+arr[j]);
// if(hashset.find(third)!=hashset.end()){
// vector<int> temp={arr[i],arr[j],third};
// sort(temp.begin(),temp.end());
// st.insert(temp);}
// hashset.insert(arr[j]);}}
// vector<vector<int>> ans(st.begin(),st.end());
// return ans;}

// vector<vector<int>> threesumoptimal(vector<int> &nums){
// vector<vector<int>> ans;
// sort(nums.begin(),nums.end());
// for(int i=0;i<nums.size();i++){
// if(i>0 && nums[i]==nums[i-1])
// continue;
// int j=i+1;
// int k=nums.size()-1;
// while(j<k){
// int sum=nums[i]+nums[j]+nums[k];
// if(sum<0)
// j++;
// else if(sum>0)
// k--;
// else{
// vector<int> temp={nums[i],nums[j],nums[k]};
// ans.push_back(temp);
// j++;k--;}}}
// return ans;}

// int main(){
// int n,x;
// cin>>n;
// vector<int> arr;
// for(int i=0;i<n;i++){
// cin>>x;
// arr.push_back(x);}
// cout<<"DELCLARE 2-D ARRAY OR MATRIX:"<<endl;
// vector<vector<int>> ans;
// // ans=threesumnormal(arr);
// // ans=threesumbetter(arr);
// ans=threesumoptimal(arr);
// cout<<"DISPAY 2D ARRAY:"<<endl;
// for(int i=0;i<ans.size();i++){
// for(int j=0;j<ans[i].size();j++){
// cout<<ans[i][j]<<" ";}
// cout<<endl;}
// return 0;}


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> foursumnormal(vector<int> &arr,int target){
// set<vector<int>> st;
// for(int i=0;i<arr.size();i++){
// for(int j=i+1;j<arr.size();j++){
// for(int k=j+1;k<arr.size();k++){
// for(int l=k+1;l<arr.size();l++){
// if(arr[i]+arr[j]+arr[k]+arr[l]==target){
// vector<int> temp={arr[i],arr[j],arr[k],arr[l]};
// sort(temp.begin(),temp.end());
// st.insert(temp);}}}}}
// vector<vector<int>> ans(st.begin(),st.end());
// return ans;}

// vector<vector<int>> foursumoptimal1(vector<int> &nums ,int target){
// int n=nums.size();
// vector<vector<int>> ans;
// sort(nums.begin(),nums.end());
// for(int i=0;i<n;i++){
// if(i>0 && nums[i]==nums[i-1])
// continue;
// for(int j=i+1;j<n;j++){
// if(j!=i+1 && nums[j]==nums[j-1])
// continue;
// int k=j+1;
// int l=n-1;
// while(k<l){
// int sum=nums[i]+nums[j]+nums[k]+nums[l];
// if(sum==target){
// vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
// ans.push_back(temp);
// k++,l--;
// while(nums[k]==nums[k-1]) k++;
// while (nums[l]==nums[l+1]) l--;}
// else if(sum>target)
// l--;
// else
// k++;}}}
// return ans;}

// vector<vector<int>> foursumoptimal2(vector<int> &nums ,int target){
// int n=nums.size();
// vector<vector<int>> ans;
// set<vector<int>> st;
// sort(nums.begin(),nums.end());
// for(int i=0;i<n;i++){
// for(int j=i+1;j<n;j++){
// int k=j+1;
// int l=n-1;
// while(k<l){
// int sum=nums[i]+nums[j]+nums[k]+nums[l];
// if(sum==target){
// st.insert({nums[i],nums[j],nums[k],nums[l]});
// k++,l--;}
// else if(sum>target)
// l--;
// else
// k++;}}}
// for(auto quadruplets : st)
// ans.push_back(quadruplets);
// return ans;}

// int main(){
// int n,x,target;
// cin>>n;
// vector<int> arr;
// for(int i=0;i<n;i++){
// cin>>x;
// arr.push_back(x);}
// cout<<"ENTER THE TARGET: "<<endl;
// cin>>target;
// cout<<"DELCLARE 2-D ARRAY OR MATRIX:"<<endl;
// vector<vector<int>> ans;
// // ans=foursumnormal(arr,target);
// // ans=foursumoptimal1(arr,target);
// ans=foursumoptimal2(arr,target);
// cout<<"DISPAY 2D ARRAY:"<<endl;
// for(int i=0;i<ans.size();i++){
// for(int j=0;j<ans[i].size();j++){
// cout<<ans[i][j]<<" ";}
// cout<<endl;}
// return 0;}


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int minvalue(int n,vector<int> &arr){
// int mini=INT_MAX;
// for(int i=0;i<n;i++){
// mini=min(mini,arr[i]);}
// return mini;}
// int minvaluebinary(int n, vector<int> &arr){
// int s=0;
// int e=n-1;
// int mini=INT_MAX;
// while(s<=e){
// if(arr[s]<arr[e]){
// mini=min(mini,arr[s]);
// break;}
// int mid=(s+e)/2;
// if(arr[mid]>=arr[s]){
// mini=min(mini,arr[s]);
// s=mid+1;}
// else{
// mini=min(mini,arr[mid]);
// e=mid-1;}}
// return mini;}
// int main(){
// int n,x;
// cout<<"ENTER THE SIZE OF THE ARRAY:"<<endl;
// cin>>n;
// cout<<"ENTER THE ELEMENTS IN THE ARRAY:"<<endl;
// vector<int> arr;
// for(int i=0;i<n;i++){
// cin>>x;
// arr.push_back(x);}
// for(int i=0;i<n;i++){
// cout<<arr[i]<<" ";}
// cout<<endl;
// cout<<"MINMUN VALUE IN THE VECTOR: "<<minvalue(n,arr)<<endl;
// cout<<"MINIMUM VALUE IN THE VECTOR USING OPTIMAL WAY BINARY: "<<minvaluebinary(n,arr)<<endl;
// return 0;}


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> spiralmatrix(vector<vector<int>> &a ){
// vector<int> ans;
// int n=a.size();
// int m=a[0].size();
// int left=0;
// int top=0;
// int right=m-1;
// int bottom=n-1;
// while(top<=bottom && left<=right){
// for(int i=left;i<=right;i++)
// ans.push_back(a[top][i]);
// top++;
// for(int i=top;i<=bottom;i++)
// ans.push_back(a[i][right]);
// right--;
// if(top<=bottom){
// for(int i=right;i>=left;i--)
// ans.push_back(a[bottom][i]);
// bottom--;}
// if(left<=right){
// for(int i=bottom;i>=top;i--)
// ans.push_back(a[i][left]);
// left++;}}
// return ans;}
// int main(){
// cout<<"SPIRAL ARRAY OF THE MATRIX THAT YOU ENTERED:"<<endl;
// vector<vector<int>> vec{{1,2,3},{4,5,6},{7,8,9}};
// vector<int> ans;
// ans=spiralmatrix(vec);
// for(int i=0;i<ans.size();i++)
// cout<<ans[i]<<" ";
// return 0;}


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int lastoccurenece(vector<int> &nums,int key,int n){
// int ans=-1;
// for(int i=n-1;i>=0;i--){
// if(nums[i]==key){
// ans=i;
// break;}}
// return ans;}
// int optimallast(vector<int> &nums ,int key,int n){
// int ans=-1;
// int s=0;
// int e=n-1;
// while(s<=e){
// int mid=(s+e)/2;
// if(nums[mid]==key){
// ans=mid;
// s=mid+1;}
// else if(nums[mid]>key)
// e=mid-1;
// else
// s=mid+1;}
// return ans;}
// int main(){
// int n,x,key;
// cout<<"ENTER THE SIZE OF THE VECTOR:"<<endl;
// cin>>n;
// cout<<"ENTER THE ELEMENTS IN THE VECTOR:"<<endl;
// vector<int>v;
// for(int i=0;i<n;i++){
// cin>>x;
// v.push_back(x);}
// cout<<"ENTER THE KEY: "<<endl;
// cin>>key;
// cout<<"LAST OCCURENCE IN THE VECTOR: "<<lastoccurenece(v,key,n)<<endl;
// cout<<"LAST OCCURENCE USING OPTIMAL WAY: "<<optimallast(v,key,n)<<endl;
// return 0;}


// #include<iostream>
// using namespace std;
// int brutecountinersion(int n,int a[]){
// int count=0;
// for(int i=0;i<n-1;i++){
// for(int j=i+1;j<n;j++){
// if(a[i]>a[j])
// count++;}}
// return count;}

// int merge(int a[], int s, int m, int e) {
// int count=0;
// int i=s;
// int j=m+1;
// int k=s;
// int temp[e-s+1]; 
// while(i<=m && j<=e) {
// if(a[i]<=a[j])
// temp[k++]=a[i++];
// else{
// temp[k++]=a[j++];
// count+=m-i+1; }}
// while(i<=m)
// temp[k++]=a[i++];
// while(j<=e)
// temp[k++]=a[j++];
// for(int i=s; i<=e; i++)
// a[i]=temp[i];
// return count;}
// int mergesort(int a[], int s, int e) {
// int count=0;
// if(s<e){ 
// int m=(s+e)/2;
// count+=mergesort(a,s,m);
// count+=mergesort(a,m+1,e);
// count+=merge(a,s,m,e);}
// return count;}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"COUNT INVERSION: "<<brutecountinersion(n,a)<<endl;
// cout<<"COUNT INVERSION USING MERGE SORT ALGORITM:"<<mergesort(a,0,n-1)<<endl;
// return 0;}

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int reversepair(int n,int a[]){
// int count=0;
// for(int i=0;i<n;i++){
// for(int j=i+1;j<n;j++){
// if(a[i]>2*a[j])
// count++;}}
// return count;}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"TOTAL NUMBER OF RVERSE PAIR IN THE ARRAY: "<<reversepair(n,a);
// return 0;}






// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     int countTriplets(vector<int> &arr, int target) {
//         int ans = 0;
//         int n = arr.size();
//         sort(arr.begin(), arr.end());

//         for (int i = 0; i < n - 2; i++) {
//             int j = i + 1, k = n - 1;
//             while (j < k) {
//                 int sum = arr[i] + arr[j] + arr[k];
//                 if (sum == target) {
//                     if (arr[j] == arr[k]) {
//                         int count = k - j + 1;
//                         ans += (count * (count - 1)) / 2;
//                         break;
//                     } else {
//                         int cnt1 = 1, cnt2 = 1;
//                         while (j + 1 < k && arr[j] == arr[j + 1]) {
//                             cnt1++;
//                             j++;
//                         }
//                         while (k - 1 > j && arr[k] == arr[k - 1]) {
//                             cnt2++;
//                             k--;
//                         }
//                         ans += cnt1 * cnt2;
//                         j++;
//                         k--;
//                     }
//                 } else if (sum < target) {
//                     j++;
//                 } else {
//                     k--;
//                 }
//             }
//         }
//         return ans;
//     }
// };
// vector<int> lineArray() {
//     string line;
//     getline(cin, line);
//     stringstream ss(line);
//     vector<int> arr;
//     int num;
//     while (ss >> num) {
//         arr.push_back(num);
//     }
//     return arr;
// }
// int main() {
//     int t;
//     cin >> t;
//     cin.ignore();
//     while (t--) {
//         vector<int> arr = lineArray();
//         int target;
//         cin >> target;
//         cin.ignore();

//         Solution ob;
//         int res = ob.countTriplets(arr, target);
//         cout << res << endl;
//         cout << "~" << endl;
//     }
// }



// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     int countPairs(vector<int> &arr, int target) {
//         int res = 0;
//         // for(int i=0; i<arr.size()-1; i++){
//         //     for(int j=i+1; j<arr.size(); j++){
//         //         if(arr[i] + arr[j] == target) count++;
//         //     }
//         // }
//         // return count;
//         int i=0; int j=arr.size()-1;
//         while(i < j){
//             if(arr[i] + arr[j] < target){
//                 i++;
//             }else if(arr[i] + arr[j] > target){
//                 j--;
//             }
//             else{
//                 int cnt1 = 0, cnt2 = 0;
//                 int ele1 = arr[i], ele2 = arr[j];
//                 while(i <= j and arr[i] == ele1) {
//                       i++;
//                       cnt1++;
//                 }
//                 while(i <= j and arr[j] == ele2) {
//                       j--;
//                       cnt2++;
//                 }
//                 if(ele1 == ele2) 
//                     res += (cnt1 * (cnt1 - 1))/2;
//                 else 
//                     res += (cnt1 * cnt2);
//             }
//         }
//         return res;
//     }
// };
// int main() {

//     int t;
//     cin >> t;
//     cin.ignore();
//     while (t--) {
//         vector<int> arr;
//         int target;
//         string input;
//         getline(cin, input);

//         stringstream ss(input);
//         int number;
//         while (ss >> number) {
//             arr.push_back(number);
//         }
//         cin >> target;
//         cin.ignore();
//         Solution obj;
//         cout << obj.countPairs(arr, target) << endl;
//         cout << "~\n";
//     }

//     return 0;
// }
