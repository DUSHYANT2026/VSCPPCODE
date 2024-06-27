// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int binarysearch(int n,int a[],int target){
// int s=0;
// int e=n-1;
// while(s<=e){
// int mid=(s+e)/2;
// if(a[mid]==target)
// return mid;
// else if(target>a[mid])
// s=mid+1;
// else
// e=mid-1;}
// return -1;}
// int main(){
// int n,target;
// cout<<"ENTER THE SIZE OF THE ARRAY "<<endl;
// cin>>n;
// int a[n];
// cout<<"ENTER THE ELEMENTS IN THE ARRAY IN SORTED ORDER:"<<endl;
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"ENTER THE TAREGET :"<<endl;
// cin>>target;
// sort(a,a+n);
// cout<<"ELEMENT PRESENT IN THE INDEX: "<<binarysearch(n,a,target);
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// int recusivebinarysearch(int a[],int s,int e,int target){
// if(s>e)
// return -1;
// int mid=(s+e)/2;
// if(a[mid]==target)
// return mid;
// else if(target>a[mid])
// return recusivebinarysearch(a,mid+1,e,target);
// return recusivebinarysearch(a,s,mid-1,target);}
// int main(){
// int n,target;
// cout<<"ENTER THE SIZE OF THE ARRAY "<<endl;
// cin>>n;
// int a[n];
// cout<<"ENTER THE ELEMENTS IN THE ARRAY IN SORTED ORDER:"<<endl;
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"ENTER THE TAREGET :"<<endl;
// cin>>target;
// sort(a,a+n);
// cout<<"BINARY SEARCH USING RECURSIVE METHODS:"<<endl;
// cout<<"ELEMENT PRESENT IN THE INDEX: "<<recusivebinarysearch(a,0,n-1,target);
// return 0;}

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int lowerbound(int n,int a[],int target){
// int s=0;
// int e=n-1;
// int ans=n;
// while(s<=e){
// int mid=(s+e)/2;
// if(a[mid]>=target){
// ans=mid;
// e=mid-1;}
// else
// s=mid+1;}
// return ans;}
// int upperbound(int n,int a[],int target){
// int s=0;
// int e=n-1;
// int ans=n;
// while(s<=e){
// int mid=(s+e)/2;
// if(a[mid]>target){
// ans=mid;
// e=mid-1;}
// else
// s=mid+1;}
// return ans;}
// int searchinsert(int n,int a[],int target){
// int s=0;
// int e=n-1;
// int ans=n;
// while(s<=e){
// int mid=(s+e)/2;
// if(a[mid]>=target){
// ans=mid;
// e=mid-1;}
// else
// s=mid+1;}
// return ans;}
// int floor(int n,int a[],int target){
// int s=0;
// int e=n-1;
// int ans=-1;
// while(s<=e){
// int mid=(s+e)/2;
// if(a[mid]<=target){
// ans=mid;
// s=mid+1;}
// else
// e=mid-1;}
// return ans;}
// int main(){
// int n,target;
// cout<<"ENTER THE SIZE OF THE ARRAY "<<endl;
// cin>>n;
// int a[n];
// cout<<"ENTER THE ELEMENTS IN THE ARRAY IN SORTED ORDER:"<<endl;
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"ENTER X TARGET ELEMENT :"<<endl;
// cin>>target;
// sort(a,a+n);
// cout<<"LOWER-BOUND OF THE ELEMENT THAT YOU ENTERED: "<<lowerbound(n,a,target)<<endl;
// cout<<"UPPER-BOUND OF THE ELEMENT THAT YOU ENTERED: "<<upperbound(n,a,target)<<endl;
// cout<<"SEACH THE POSITION WHERE THE ELEMENT SHOULD PRESENT:"<<searchinsert(n,a,target)<<endl;
// cout<<"FLOOR AND CEIL OF THE ELEMENT THAT YOU ENETERED:"<<endl;
// cout<<"CEIL IS THE LOWERBOUND CONDITION:"<<lowerbound(n,a,target)<<endl;
// cout<<"FLOOR OF THE ELEMENT THAT YOU ENTERED:"<<floor(n,a,target)<<endl;
// return 0;}


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// pair<int,int> firstlastoccurenec(int n,int a[],int target){
// int ans1=-1;
// int ans2=-1;
// for(int i=0;i<n;i++){
// if(a[i]==target){
// if(ans1==-1)
// ans1=i;
// ans2=i;}}
// return {ans1,ans2};}

// int firstoccurence(int n,int a[],int target){
// int s=0;
// int e=n-1;
// int first=-1;
// while(s<=e){
// int mid=(s+e)/2;
// if(a[mid]==target){
// first=mid;
// e=mid-1;}
// else if(a[mid]<target)
// s=mid+1;
// else
// e=mid-1;}
// return first;}
// int lastoccurence(int n,int a[],int target){
// int s=0;
// int e=n-1;
// int last=-1;
// while(s<=e){
// int mid=(s+e)/2;
// if(a[mid]==target){
// last=mid;
// s=mid+1;}
// else if(a[mid]<target)
// s=mid+1;
// else
// e=mid-1;}
// return last;}

// pair<int,int> firstandlastoccerence(int n,int a[],int target){
// int first=firstoccurence(n,a,target);
// int last=lastoccurence(n,a,target);
// if(first==-1) return {-1,-1};
// return {first,last};}

// int countoccerence(int n,int a[],int target){
// pair<int,int>ans= firstandlastoccerence(n,a,target);
// if(ans.first==-1) return 0;
// return ans.second-ans.first+1;}
// int main(){
// int n,target;
// cout<<"ENTER THE SIZE OF THE ARRAY "<<endl;
// cin>>n;
// int a[n];
// cout<<"ENTER THE ELEMENTS IN THE ARRAY IN SORTED ORDER:"<<endl;
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"ENTER THE TAREGET :"<<endl;
// cin>>target;
// sort(a,a+n);
// cout<<"FIRST AND LAST OCCERENCE OF THE ELEMENT IN THE ARRAY:"<<endl;
// pair<int,int>result=firstlastoccurenec(n,a,target);
// cout<<"First Occurrence: "<<result.first<<endl;
// cout<<"Last Occurrence: "<<result.second<<endl;
// cout<<endl<<endl;
// pair<int,int>ans=firstandlastoccerence(n,a,target);
// cout<<"First Occurrence: using binary "<<ans.first<<endl;
// cout<<"Last Occurrence: using binary "<<ans.second<<endl;
// cout<<"NUMBER OF THE OCCERENCE:"<<countoccerence(n,a,target);
// return 0;}

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int binarysearchinrotatedarray(int n,int a[],int target){
// int s=0;
// int e=n-1;
// while(s<=e){
// int mid=(s+e)/2;
// if(a[mid]==target) return mid;
// if(a[s]<=target){
// if(a[s]<=target && target<=a[mid])
// e=mid-1;
// else
// s=mid+1;}
// else{
// if(a[mid]<=target && target<=a[e])
// s=mid+1;
// else
// e=mid-1;}}
// return -1;}
// int main(){
// int n,target;
// cout<<"ENTER THE SIZE OF THE ARRAY "<<endl;
// cin>>n;
// int a[n];
// cout<<"ENTER THE ELEMENTS IN THE ARRAY :"<<endl;
// for(int i=0;i<n;i++)  
// cin>>a[i];
// cout<<"ENTER THE TAREGET :"<<endl;
// cin>>target;
// sort(a,a+n);
// cout<<"BINARY SEARCH IN THE ROTATED ARRAY: "<<binarysearchinrotatedarray(n,a,target);
// return 0;}

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool binarysearchinrotatedarray2(int n,int a[],int target){
// int s=0;
// int e=n-1;
// while(s<=e){
// int mid=(s+e)/2;
// if(a[mid]==target) return true;
// if(a[s]==a[mid] && a[mid]==a[e]){
// s++,e--;
// continue;}
// if(a[s]<=target){
// if(a[s]<=target && target<=a[mid])
// e=mid-1;
// else
// s=mid+1;}
// else{
// if(a[mid]<=target && target<=a[e])
// s=mid+1;
// else
// e=mid-1;}}
// return false;}
// int main(){
// int n,target;
// cout<<"ENTER THE SIZE OF THE ARRAY "<<endl;
// cin>>n;
// int a[n];
// cout<<"ENTER THE ELEMENTS IN THE ARRAY"<<endl;
// for(int i=0;i<n;i++)  
// cin>>a[i];
// cout<<"ENTER THE TAREGET :"<<endl;
// cin>>target;
// sort(a,a+n);
// cout<<"BINARY SEARCH IN THE ROTATED ARRAY WHERE DUPLICATES ALSO PRESENT:"<<binarysearchinrotatedarray2(n,a,target);
// return 0;}

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int minielement(int n,int a[]){
// int s=0;
// int e=n-1;
// int ans=INT_MAX;
// while(s<=e){
// int mid=(s+e)/2;
// if(a[s]<=a[e]){
// ans=min(ans,a[s]);
// break;}
// if(a[s]<=a[mid]){
// ans=min(ans,a[s]);
// s=mid+1;}
// else{
// e=mid-1;
// ans=min(ans,a[mid]);}}
// return ans;}
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF THE ARRAY "<<endl;
// cin>>n;
// int a[n];
// cout<<"ENTER THE ELEMENTS IN THE ARRAY :"<<endl;
// for(int i=0;i<n;i++)  
// cin>>a[i];
// sort(a,a+n);
// cout<<"MINIMUM ELEMENT IN THE ROTATED ARRAY: "<<minielement(n,a);
// return 0;}

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int timesrotation(int n,int a[]){
// int s=0;
// int e=n-1;
// int ans=INT_MAX;
// int index=-1;
// while(s<=e){
// int mid=(s+e)/2;
// if(a[s]<=a[e]){
// if(a[s]<ans){
// index=s;
// ans=a[s];}
// break;}
// if(a[s]<=a[mid]){
// if(a[s]<ans){
// index=s;
// ans=a[s];}
// s=mid+1;}
// else{
// e=mid-1;
// if(a[mid]<ans){
// index=mid;
// ans=a[mid];}}}
// return index;}
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF THE ARRAY "<<endl;
// cin>>n;
// int a[n];
// cout<<"ENTER THE ELEMENTS IN THE ARRAY :"<<endl;
// for(int i=0;i<n;i++)  
// cin>>a[i];
// sort(a,a+n);
// cout<<"HOW MANY TIMES ARRAY IS ROTATED : "<<timesrotation(n,a);
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// int singleelement1(int n,int a[]){
// int ans=0;
// for(int i=0;i<n;i++)
// ans^=a[i];
// return ans;}
// int singleelement2(int n,int a[]){
// int ans=0;
// for(int i=0;i<n;i++){
// if(i==0){
// if(a[i]!=a[i+1])
// return a[0];}
// else if(i==n-1){
// if(a[i]!=a[i-1])
// return a[n-1];}
// else if(a[i]!=a[i+1] && a[i]!=a[i-1]){
// ans=a[i];}}
// return ans;}

// int singleelement3(int n,int a[]){
// if(n==1)
// return a[0];
// if(a[0]!=a[1])
// return a[0];
// if(a[n-1]!=a[n-2])
// return a[n-1];
// int s=1;
// int e=n-2;
// while(s<=e){
// int mid=(s+e)/2;
// if(a[mid]!=a[mid+1] && a[mid]!=a[mid-1])
// return a[mid];
// if( (mid%2==1 && a[mid]==a[mid-1]) || (mid%2==0 && a[mid]==a[mid+1]))
// s=mid+1;
// else
// e=mid-1;}
// return -1;}
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF THE ARRAY "<<endl;
// cin>>n;
// int a[n];
// cout<<"ENTER THE ELEMENTS IN THE ARRAY IN SORTED ORDER:"<<endl;
// for(int i=0;i<n;i++)
// cin>>a[i];
// sort(a,a+n);
// cout<<"SINGLE-NON-DUPLICATE: USING FOR LOOP:"<<singleelement1(n,a)<<endl;
// cout<<"SINGLE-NON-DUPLICATE: USING 2ND FOR LOOP:"<<singleelement2(n,a)<<endl;
// cout<<"SINGLE-NON-DUPLICATE: USING BINARY SEARCH :"<<singleelement3(n,a)<<endl;
// return 0;}

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> peakelement(int n,int a[]){
// vector<int> ans;
// if(n>=1 && a[0]>a[1])
// ans.push_back(a[0]);
// if(n>=2 && a[n-2]<a[n-1])
// ans.push_back(a[n-1]);
// for(int i=1;i<n-1;i++){
// if(a[i-1]<a[i] && a[i]>a[i+1])
// ans.push_back(a[i]);}
// return ans;}
// int binarypeakelement(int n,int a[]){
// if(n==1) return 0;
// if(a[0]>a[1]) return 0;
// if(a[n-1]>a[n-2]) return n-1;
// int s=1;
// int e=n-2;
// while(s<=e){
// int mid=(s+e)/2;
// if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
// return mid;
// else if(a[mid]>a[mid-1])
// s=mid+1;
// else if(a[mid]>a[mid+1])
// e=mid-1;
// else 
// s=mid+1;}
// return  -1;}
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF ARRAY:"<<endl;
// cin>>n;
// int a[n];
// cout<<"ENTER THE ELEMENTS IN THE ARRAY:"<<endl;
// for(int i=0;i<n;i++)
// cin>>a[i];
// // vector<int> nums=peakelement(n,a);
// // cout<<"PEAK ELEMENT IN THE ARRAY: "<<endl;
// // for(int i=0;i<nums.size();i++)
// // cout<<nums[i]<<"  "<<endl;
// cout<<"PEAK ELEMENT IN THE ARRAY: USING BINARY SEARCH: "<<binarypeakelement(n,a)<<endl;
// return 0;}

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int functionofsqrt(int n){
// int ans=sqrt(n);
// return ans;}
// int functionofloop(int n){
// int ans=-1;
// for(int i=0;i<n;i++){
// if(i*i<=n) ans=i;
// else break;}
// return ans;}
// int functionofbinary(int n){
// int s=1;
// int e=n;
// int ans=-1;
// while(s<=e){
// int mid=(s+e)/2;
// if(mid*mid<=n){
// ans=mid;
// s=mid+1;}
// else e=mid-1;}
// return ans;}
// int main(){
// int n;
// cout<<"ENTER THE NUMBER FOR WHICH SQAURE ROOT IS REQUIRED:"<<endl;
// cin>>n;
// cout<<"SAQURE ROOT USING SQRT FUNCTION: "<<functionofsqrt(n)<<endl;
// cout<<"SAQURE ROOT USING LOOP FUNCTION: "<<functionofloop(n)<<endl;
// cout<<"SAQURE ROOT USING BINARY FUNCTION: "<<functionofbinary(n)<<endl;
// return 0;}

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// long long func(int b, int exp) {
//     long long  ans = 1;
//     long long base = b;
//     while (exp > 0) {
//         if (exp % 2) {
//             exp--;
//             ans = ans * base;
//         }
//         else {
//             exp /= 2;
//             base = base * base;
//         }
//     }
//     return ans;
// }
// int nthrootlinear(int n,int m){
//     for(int i=1;i<=m;i++){
//         if(func(i,n) == m){
//             return i;
//         }
//         else if(func(i,n)> m * 1ll){
//             break;
//         }
//     }
//     return -1;
// }
// int binaryseach2(int n,int m){
//     int s = 1;
//     int e = m;
//     int ans = -1;
//     while(s<=e){
//         int mid = (s+e)/2;
//         if(func(mid,n) == m){
//             ans = mid;
//             break;
//         }
//         else if(func(mid,n) < m){
//             s = mid+1; 
//         }
//         else{
//             e = mid-1;
//         }
//     }
//     return ans;
// }
// int functions(int n,int m,int mid){
// int power=1;
// for(int i=0;i<n;i++){
// power*=mid;
// if(power>m) return 2;}
// if(power==m) return 1;
// return 0;}
// int nthrootbinary(int n,int m){
// int s=0;
// int e=m;
// while(s<=e){
// int mid=(s+e)/2;
// int ans=functions(n,m,mid);
// if(ans==1) return mid;
// else if(ans==0) s=mid+1;
// else e=mid-1;}
// return -1;}
// int main(){
// int n,m;
// cout<<"ENTER THE VLAUE OF N:"<<endl;
// cin>>n;
// cout<<"ENTER THE VALUE OF M:"<<endl;
// cin>>m;
// cout<<"NTH ROOT INTEGER USING LINEAR SEARCH: "<<nthrootlinear(n,m)<<endl;
// cout<<"NTH ROOT INTEGER USING BINARY SEARCH1: "<<nthrootbinary(n,m)<<endl;
// cout<<"NTH ROOT INTEGER USING BINARY SEARCH2: "<<binaryseach2(n,m)<<endl;
// return 0;}

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int medianof2array(vector<int>& nums1,vector<int>& nums2){
// vector<int> ans;
// for(auto it:nums1) ans.push_back(it);
// for(auto it:nums2) ans.push_back(it);
// sort(ans.begin(),ans.end());
// if(ans.size()%2 == 1)
// return ans[ans.size()/2];
// else{
// double temp=ans[(ans.size()/2)-1];
// double temp1=ans[ans.size()/2];
// return (temp+temp1)/2;}
// return 0;}
// int kthelementof2array(vector<int> &nums1,vector<int> &nums2,int k){
// vector<int> ans;
// for(auto it: nums1) ans.push_back(it);
// for(auto it: nums2) ans.push_back(it);
// sort(ans.begin(),ans.end());
// return ans[k-1];}
// int main(){
// int n,x,y,m;
// cout<<"ENTER THE SIZE OF IST ARRAY:"<<endl;
// cin>>n;
// cout<<"ENTER THE ELEMENT IN THE ARRAY:"<<endl;
// vector<int> nums1;
// for(int i=0;i<n;i++){
// cin>>x;
// nums1.push_back(x);}
// cout<<"ENTER THE SIZE OF 2ST ARRAY:"<<endl;
// cin>>m;
// cout<<"ENTER THE ELEMENT IN THE ARRAY:"<<endl;
// vector<int> nums2;
// for(int i=0;i<m;i++){
// cin>>y;
// nums2.push_back(y);}
// cout<<"THE MEDIAN OF THE TWO ARRAY THAT YOU ENTERED: "<<medianof2array(nums1,nums2)<<endl<<endl;
// int k;
// cout<<"ENTER THE KTH INDEX TO FIND THE ELEMENT: "<<endl;
// cin>>k;
// cout<<"KTH ELEMENT OF THE TWO ARRAY THAT YOU ENTERED: "<<kthelementof2array(nums1,nums2,k)<<endl;;
// return 0;}

// #include <bits/stdc++.h>
// using namespace std;
// int kthElement(int arr1[], int arr2[], int n, int m, int k){
// int temp[n+m];
// int i=0;
// int j=0;
// int t=0;
// while(i<n && j<m){
// if(arr1[i] < arr2[j]){
// temp[t++] = arr1[i++];}
// else 
// temp[t++] = arr2[j++];}
// while(i<n){
// temp[t++] = arr1[i++];}
// while(j<m){
// temp[t++] = arr2[j++];}
// sort(temp , temp+(n+m));
// return temp[k-1];}
// int medianof2array(int arr1[],int arr2[],int n,int m){
// int temp[n+m];
// int i=0;
// int j=0;
// int k=0;
// while(i<n && j<m){
// if(arr1[i] < arr2[j]){
// temp[k++] = arr1[i++];}
// else
// temp[k++] = arr2[j++];}
// while(i<n){
// temp[k++] = arr1[i++];}
// while(j<m){
// temp[k++] = arr2[j++];}
// sort(temp,temp+(n+m));
// if((n+m)%2 == 1) {return temp[(n+m)/2];}
// else{
// double x=temp[(n+m)/2-1];
// double y=temp[(n+m)/2];
// return (x+y)/2;}
// return 0;}
// int main(){
// int n,m,k;
// cout<<"ENTER THE SIZE OF 1ST ARRAY:"<<endl;
// cin>>n;
// int a1[n];
// cout<<"ENTER THE ELEMENT IN THE FIRST ARRAY:"<<endl;
// for(int i=0;i<n;i++)
// cin>>a1[i];
// cout<<"ENTER THE SIZE OF 2ND ARRAY:"<<endl;
// cin>>m;
// int a2[m];
// cout<<"ENTER THE ELEMENT IN THE SECOND ARRAY:"<<endl;
// for(int i=0;i<m;i++)
// cin>>a2[i];
// cout<<"ENTER THE KTH ELEMENT:"<<endl;
// cin>>k;
// cout<<"KTH ELEMENT OF THE TWO ARRAY THAT YOU ENTERED: "<<kthElement(a1, a2, n, m, k)<<endl<<endl;
// cout<<"THE MEDIAN OF THE TWO ARRAY THAT YOU ENTERED: "<<medianof2array(a1, a2, n, m)<<endl;
// return 0;}




// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   private:
//     int maxelement(vector<int> &nums){
//         int ans = INT_MIN;
//         for(auto it : nums){
//             ans= max(ans,it);
//         }
//         return ans;
//     }
//     private:
//     int totalhours(vector<int> &nums,int hourly){
//         int totaltime = 0;
//         for(int i=0;i<nums.size();i++){
//             totaltime += ceil((double)(nums[i]) / (double)(hourly));
//         }
//         return totaltime;
//     }
//   public:
//     int Solve1(int N, vector<int>& piles, int H) {
     
//         for(int i=1;i<=maxelement(piles);i++){
//             int time = totalhours(piles,i);
//             if(time <= H){
//                 return i;
//             }
//         }
//         return maxelement(piles);
//     }

//     int Solve2(int N, vector<int>& piles, int H){
//         int s = 1;
//         int e = maxelement(piles);
//         while(s<=e){
//             int mid = (e+s)/2;
//             int time = totalhours(piles,mid);
//             if(time <= H){
//                 e = mid-1;
//             }
//             else{
//                 s = mid+1;
//             }
//         }
//         return s;
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a;
//         for (int i = 0; i < n; ++i) {
//             int x;
//             cin >> x;
//             a.push_back(x);
//         }
//         int h;
//         cin >> h;
//         Solution obj;

//         cout << obj.Solve1(n, a, h);
//         cout << "\n";
//          cout << obj.Solve2(n, a, h)<<endl;
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   private:
//     int numberofdays(int nums[],int N,int capacity){
//         int sum = 0;
//         int days =1;
//         for(int i=0;i<N;i++){
//             if(sum + nums[i] > capacity){
//                 days++;
//                 sum = nums[i];
//             }
//             else{
//                 sum +=nums[i];
//             }
//         }
//         return days;
//     }
//   public:
//     int leastWeightCapacity(int nums[], int N, int D) {
//         int s = INT_MIN;
//         int e = 0;
//         for(int i=0;i<N;i++){
//             s = max(s,nums[i]);
//             e += nums[i];
//         }
//         while(s <= e){
//             int mid = (s+e) / 2;
//             if(numberofdays(nums,N,mid) <= D){
//                 e = mid -1;
//             }
//             else{
//                 s = mid + 1;
//             }
//         }
//         return s;
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int N,D;
//         cin>>N;
        
//         int arr[N];
//         for(int i=0; i<N; i++)
//             cin>>arr[i];
//         cin>>D;

//         Solution ob;
//         cout << ob.leastWeightCapacity(arr,N,D) << endl;
//     }
//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;
// double MedianOfArrays(vector<int>& array1, vector<int>& array2);
// class Solution{
//     public:
//     double MedianOfArrays(vector<int>& array1, vector<int>& array2)
//     {
//         vector<int> ans;
//         double median = 0; 
//         int i=0; int j = 0; int n = array1.size(); int m = array2.size();
//         while(i < n  && j < m){
//             if(array1[i] < array2[j]){
//                 ans.push_back(array1[i++]);
//             }else{
//                 ans.push_back(array2[j++]);
//             }
//         }
//             while(i<n){
//                 ans.push_back(array1[i++]);
//             }
//             while(j<m){
//                 ans.push_back(array2[j++]);
//             }
            
//             int x = n+m;
//             if(x%2 != 0){
//                 median = ans[x/2.0];
//             }
//             else{
//                 median =  (ans[x/2.0] + ans[(x/2.0)-1.0])/2.0;
//             }
//         return median;
//     }
// };
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int m,n;
//         cin>>m;
//         vector<int> array1(m);
//         for (int i = 0; i < m; ++i){
//             cin>>array1[i];
//         }
//         cin>>n;
//         vector<int> array2(n);
//         for (int i = 0; i < n; ++i){
//             cin>>array2[i];
//         }
//         Solution ob;
//         cout<<ob.MedianOfArrays(array1, array2)<<endl;
//     }
//     return 0; 
// }