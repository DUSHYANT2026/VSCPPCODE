// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void priorityqueue(priority_queue<int> ps){
// while(!ps.empty()){
// cout<<ps.top()<<" ";
// ps.pop();}}
// int main(){
// priority_queue<int> p;
// int n,x;
// cout<<"ENTER THE SIZE OF THE MAX HEAP:"<<endl;
// cin>>n;
// cout<<"ENTER THE ELEMENT IN THE MAX HEAP:"<<endl;
// for(int i=0;i<n;i++){
// cin>>x;
// p.push(x);}
// cout<<"PRINT THE MAX HEAP OR PRIORITYQUEUE:"<<endl;
// priorityqueue(p);
// cout<<endl;
// cout<<"LARGEST ELEMENT IN THE MAX HEAP IS THE FIRST ELEMENT: "<<p.top()<<endl;
// cout<<"TO FIND THE SIZE OF THE HEAP: "<<p.size()<<endl;
// if(p.empty())
// cout<<"HEAP IS EMPTY THERE NO ELEMENT: "<<endl;
// else
// cout<<"THERE ARE ELEMENT IN THE HEAP: "<<endl;
// for(int i=0;i<n;i++){
// p.pop();}
// if(p.empty())
// cout<<"HEAP IS EMPTY THERE NO ELEMENT: "<<endl;
// else
// cout<<"THERE ARE ELEMENT IN THE HEAP: "<<endl;
// for(int i=1;i<=100;i++){
// if(i%5==0)
// p.push(i);}
// cout<<"PRINT THE MAX HEAP OR PRIORITYQUEUE AFTER SOME CHANGE: "<<endl;
// priorityqueue(p);
// cout<<endl;
// cout<<"TO FIND THE SIZE OF THE HEAP: "<<p.size()<<endl;
// p.emplace(7988);
// p.emplace(69);
// p.emplace(4);
// cout<<"PRINT THE MAX HEAP OR PRIORITYQUEUE AFTER SOME CHANGE: "<<endl;
// priorityqueue(p);
// return 0;}


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void priorityqueueminheap(priority_queue<int,vector<int>,greater<int>> ps){
// while(!ps.empty()){
// cout<<ps.top()<<" ";
// ps.pop();}}
// int main(){
// priority_queue<int,vector<int>,greater<int>> p;
// int n,x;
// cout<<"ENTER THE SIZE OF THE MIN HEAP:"<<endl;
// cin>>n;
// cout<<"ENTER THE ELEMENT IN THE MIN HEAP:"<<endl;
// for(int i=0;i<n;i++){
// cin>>x;
// p.push(x);}
// cout<<"PRINT THE MIN HEAP OR PRIORITYQUEUE:"<<endl;
// priorityqueueminheap(p);
// cout<<endl;
// cout<<"SMALLEST ELEMENT IN THE MIN HEAP IS THE FIRST ELEMENT: "<<p.top()<<endl;
// cout<<"TO FIND THE SIZE OF THE MIN HEAP: "<<p.size()<<endl;
// if(p.empty())
// cout<<"MIN HEAP IS EMPTY THERE NO ELEMENT: "<<endl;
// else
// cout<<"THERE ARE ELEMENT IN THE MIN HEAP: "<<endl;
// for(int i=0;i<n;i++){
// p.pop();}
// if(p.empty())
// cout<<"MIN HEAP IS EMPTY THERE NO ELEMENT: "<<endl;
// else
// cout<<"THERE ARE ELEMENT IN THE MIN HEAP: "<<endl;
// for(int i=1;i<=100;i++){
// if(i%5==0)
// p.push(i);}
// cout<<"PRINT THE MIN HEAP OR PRIORITYQUEUE AFTER SOME CHANGE: "<<endl;
// priorityqueueminheap(p);
// cout<<endl;
// cout<<"TO FIND THE SIZE OF THE MIN HEAP: "<<p.size()<<endl;
// return 0;}




// #include<iostream>
// #include<bits/stdc++.h>
// #include<math.h>
// using namespace std;
// void swap(int &x,int &y){
// int temp=x;
// x=y;
// y=temp;}
// class minheap{
// public:
// int capacity;
// int heapsize;
// int* arr;
// minheap(int cap){
// heapsize=0;
// capacity=cap;
// arr=new int[cap];}

// int parent(int i){
// return (i-1)/2;}

// int left(int i){
// return (2*i+1);}

// int right(int i){
// return (2*i+2);}

// void getminvlaue(){
// cout<<"MINIMUM VALUE IN THE MIN HEAP IS AT 0TH INDEX:"<<endl;
// cout<<arr[0];}

// void linearsearch(int data){
// for(int i=0;i<heapsize;i++){
// if(arr[i]==data)
// cout<<data<<" VALUE FOUND IN THE MIN HEAP AT: "<<i<<endl;
// return ;}
// cout<<"VALUE THATT YOU ENTERED IS NOT FOUND IN THE MIN HEAP: "<<data<<endl;}

// int height(){
// return ceil(log2(heapsize+1))-1;}

// void insertdata(int data){
// if(heapsize==capacity){
// cout<<"YOU CAN'T INSERT ELEMENT BECAUSE MIN-HEAP IS FULL:"<<endl;
// return;}
// heapsize++;
// int i=heapsize-1;
// arr[i]=data;
// while(i!=0 && arr[parent(i)]>arr[i]){
// swap(arr[i],arr[parent(i)]);
// i=parent(i);}}

// void minheapify(int i){
// int l=left(i);
// int r=right(i);
// int smallest=i;
// if(l<heapsize && arr[l]<arr[smallest])
// smallest=l;
// if(r<heapsize && arr[r]<arr[smallest])
// smallest=r;
// if(smallest!=i){
// swap(arr[i] ,arr[smallest]);
// minheapify(smallest);}}

// int extractmin(){
// if(heapsize<=0){
// return INT_MAX;}
// if(heapsize==1){
// heapsize--;
// return arr[0];}
// int root=arr[0];
// arr[0]=arr[heapsize-1];
// heapsize--;
// minheapify(0);
// return root;}

// void deacreasekey(int i,int data){
// arr[i]=data;
// while(i!=0 && arr[parent(i)]>arr[i]){
// swap(arr[parent(i)],arr[i]);
// i=parent(i);}} 

// void deletekey(int i){
// deacreasekey(i,INT_MIN);
// extractmin();}

// void printminheap(){
// for(int i=0;i<heapsize;i++)
// cout<<arr[i]<<" ";
// cout<<endl;}

// };
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF THE MIN HEAP:"<<endl;
// cin>>n;
// minheap min(n);

// int option,data,index;
// do{
// cout<<"IMPELEMENTION OF MIN HEAP: SELECT OPTION GIVEN BELOW T0 RUN THE PROGRAME: "<<endl;
// cout<<"0) TO EXIST FROM THE PROGRAME: "<<endl;
// cout<<"1) TO INSERT THE DATA IN THE MIN-HEAP:"<<endl;
// cout<<"2) TO DELETE THE DATA IN THE MIN-HEAP:"<<endl;
// cout<<"3) TO SEARCH THE DATA IN THE MIN-HEAP:"<<endl;
// cout<<"4) TO FIND HEIGHT OF THE MIN-HEAP:"<<endl;
// cout<<"5) TO DISPLAY THE DATA IN THE MIN-HEAP:"<<endl;
// cout<<"6) TO GET THE SMALLEST DATA IN THE MIN-HEAP:"<<endl;
// cout<<"7) TO MIN-EXTRACT IN THE MIN-HEAP:"<<endl;
// cout<<"8) TO CLEAR THE SCREEN: "<<endl;
// cin>>option;

// switch(option){
// case 0:
// break;
// case 1:
// cout<<"INSERT FUNCTION IS CALLED:"<<endl;
// cout<<"ENTER THE DATA THAT YOU WANT TO INSERT:"<<endl;
// cin>>data;
// min.insertdata(data);
// cout<<"DATA HAS BEEN INSERTED SUCESSFULLY:"<<endl;
// cout<<endl;
// break;
// case 2:
// cout<<"DELETE FUNCTION IS CALLED:"<<endl;
// cout<<"ENTER THE INDEX THAT YOU WANT TO DLELETE:"<<endl;
// cin>>index;
// min.deletekey(index);
// cout<<"DATA HAS BEEN DLELETED SUCESSFULLY:"<<endl;
// cout<<endl;
// break;
// case 3:
// cout<<"LINEAR SEARCH FUNCTION IS CALLED:"<<endl;
// cout<<"ENTER THE DATA THAT YOU WANT TO SEARCH:"<<endl;
// cin>>data;
// min.linearsearch(data);
// cout<<endl;
// break;
// case 4:
// cout<<"HEIGHT FUNCTION IS CALLED:"<<endl;
// cout<<"HEIGHT OF THE MIN-HEAP IS: "<<min.height();
// cout<<endl;
// break;
// case 5:
// cout<<"DISPLAY FUNCTION HAS BEEN CALLED:"<<endl;
// min.printminheap();
// cout<<endl;
// break;
// case 6:
// cout<<"SMALLEST ELEMENT IN THE MIN-HEAP: "<<endl;
// min.getminvlaue();
// cout<<endl;
// break;
// case 7:
// cout<<"MIN-EXTRACT FUNCTION IS CALLED:"<<endl;
// cout<<"EXTRACT MIN IN THE MIN-HEAP: "<<min.extractmin();
// cout<<endl;
// break;
// case 8:
// cout<<"CLEAR SCREEN FUNCTION IS CALLED:"<<endl;
// system("cls");
// cout<<endl;
// break;
// default:
// cout<<"ENTER PROPER OPTION TO EXECUTES THE PROGRAME:"<<endl;
// }}while(option!=0);
// return 0;}



// #include<iostream>
// #include<math.h>
// #include<climits>
// using namespace std;
// void swap(int &x,int &y){
// int temp=x;
// x=y;
// y=temp;}
// class maxheap{
// public:
// int *arr;
// int heapsize;
// int capacity;
// maxheap(int n){
// heapsize=0;
// capacity=n;
// arr=new int[n];}

// int height(){
// return ceil(log2(heapsize+1))-1;}

// void linearsearch(int data){
// for(int i=0;i<heapsize;i++){
// if(arr[i]==data)
// cout<<data<<" VALUE FOUND IN THE MAX-HEAP AT: "<<i<<endl;
// return ;}
// cout<<"VALUE THATT YOU ENTERED IS NOT FOUND IN THE MAX-HEAP: "<<data<<endl;}

// void getmaxvlaue(){
// cout<<"MAXIMUM VALUE IN THE MIN HEAP IS AT 0TH INDEX:"<<endl;
// cout<<arr[0];}

// void insertdata(int data){
// if(heapsize==capacity){
// cout<<"YOU CAN'T INSERT ELEMENT BECAUSE MAX-HEAP IS FULL:"<<endl;
// return;}
// heapsize++;
// int i=heapsize-1;
// arr[i]=data;
// while(i!=0 && arr[(i-1)/2]<arr[i]){
// swap(arr[i],arr[(i-1)/2]);
// i=(i-1)/2;}}

// void heapify(int i){
// int large=i;
// int left=2*i+1;
// int right=2*i+2;
// if(left<heapsize && arr[left]>arr[large])
// large=left;
// if(right<heapsize && arr[right]>arr[large])
// large=right;
// if(large!=i){
// swap(arr[i],arr[large]);
// heapify(large);}}

// int extract(){
// if(heapsize<=0){
// return INT_MAX;}
// if(heapsize==1){
// heapsize--;
// return arr[0];}
// int root=arr[0];
// arr[0]=arr[heapsize-1];
// heapsize--;
// heapify(0);
// return root;}

// void deacreasekey(int i,int data){
// arr[i]=data;
// while(i!=0 && arr[(i-1)/2]<arr[i]){
// swap(arr[(i-1)/2],arr[i]);
// i=(i-1)/2;}} 

// void deletekey(int i){
// deacreasekey(i,INT_MAX);
// extract();}

// void printmaxheap(){
// for(int i=0;i<heapsize;i++)
// cout<<arr[i]<<" ";
// cout<<endl;}

// };
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF THE MAX-HEAP:"<<endl;
// cin>>n;
// maxheap max(n);

// int option,data,index;
// do{
// cout<<"IMPELEMENTION OF MAX-HEAP: SELECT OPTION GIVEN BELOW T0 RUN THE PROGRAME: "<<endl;
// cout<<"0) TO EXIST FROM THE PROGRAME: "<<endl;
// cout<<"1) TO INSERT THE DATA IN THE MAX-HEAP:"<<endl;
// cout<<"2) TO DELETE THE DATA IN THE MAX-HEAP:"<<endl;
// cout<<"3) TO SEARCH THE DATA IN THE MAX-HEAP:"<<endl;
// cout<<"4) TO FIND HEIGHT OF THE MAX-HEAP:"<<endl;
// cout<<"5) TO DISPLAY THE DATA IN THE MAX-HEAP:"<<endl;
// cout<<"6) TO GET THE LARGEST DATA IN THE MAX-HEAP:"<<endl;
// cout<<"7) TO MAX-EXTRACT IN THE MAX-HEAP:"<<endl;
// cout<<"8) TO CLEAR THE SCREEN: "<<endl;
// cin>>option;

// switch(option){
// case 0:
// break;
// case 1:
// cout<<"INSERT FUNCTION IS CALLED:"<<endl;
// cout<<"ENTER THE DATA THAT YOU WANT TO INSERT:"<<endl;
// cin>>data;
// max.insertdata(data);
// cout<<"DATA HAS BEEN INSERTED SUCESSFULLY:"<<endl;
// cout<<endl;
// break;
// case 2:
// cout<<"DELETE FUNCTION IS CALLED:"<<endl;
// cout<<"ENTER THE INDEX THAT YOU WANT TO DLELETE:"<<endl;
// cin>>index;
// max.deletekey(index);
// cout<<"DATA HAS BEEN DLELETED SUCESSFULLY:"<<endl;
// cout<<endl;
// break;
// case 3:
// cout<<"LINEAR SEARCH FUNCTION IS CALLED:"<<endl;
// cout<<"ENTER THE DATA THAT YOU WANT TO SEARCH:"<<endl;
// cin>>data;
// max.linearsearch(data);
// cout<<endl;
// break;
// case 4:
// cout<<"HEIGHT FUNCTION IS CALLED:"<<endl;
// cout<<"HEIGHT OF THE MIN-HEAP IS: "<<max.height();
// cout<<endl;
// break;
// case 5:
// cout<<"DISPLAY FUNCTION HAS BEEN CALLED:"<<endl;
// max.printmaxheap();
// cout<<endl;
// break;
// case 6:
// cout<<"LARGEST ELEMENT IN THE MAX-HEAP: "<<endl;
// max.getmaxvlaue();
// cout<<endl;
// break;
// case 7:
// cout<<"MAX-EXTRACT FUNCTION IS CALLED:"<<endl;
// cout<<"EXTRACT MIN IN THE MAX-HEAP: "<<max.extract();
// cout<<endl;
// break;
// case 8:
// cout<<"CLEAR SCREEN FUNCTION IS CALLED:"<<endl;
// system("cls");
// cout<<endl;
// break;
// default:
// cout<<"ENTER PROPER OPTION TO EXECUTES THE PROGRAME:"<<endl;
// }}while(option!=0);
// return 0;}



// #include<iostream>
// #include<math.h>
// #include<climits>
// using namespace std;
// class minheap{
// public:
// int *arr;
// int heapsize;
// int capacity;
// minheap(int cap){
// heapsize=cap;
// capacity=cap;
// arr=new int[cap];}

// void heapify(int i){
// int small=i;
// int left=2*i+1;
// int right=2*i+2;
// if(left<heapsize && arr[left]<arr[small])
// small=left;
// if(right<heapsize && arr[right]<arr[small])
// small=right;
// if(small!=i){
// swap(arr[i],arr[small]);
// heapify(small);}}

// int extractmin(){
// if(heapsize<=0){
// return INT_MAX;}
// if(heapsize==1){
// heapsize--;
// return arr[0];}
// int root=arr[0];
// arr[0]=arr[heapsize-1];
// heapsize--;
// heapify(0);
// return root;}

// void getunsortedarray(){
// cout<<"ENTER THE ELEMENTS IN THE ARRAY ACCORDING TO ARRAY CAPACITY: "<<capacity<<endl;
// for(int i=0;i<capacity;i++)
// cin>>arr[i];}

// void heapsort(){
// int temp[capacity];
// for(int i=0;i<capacity;i++){
// temp[i]=extractmin();
// cout<<temp[i]<<" "; }}

// void printunsortedarray(){
// for(int i=0;i<heapsize;i++)
// cout<<arr[i]<<" ";
// cout<<endl;}

// };
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF THE ARRAY:"<<endl;
// cin>>n;
// minheap min(n);
// min.getunsortedarray();
// cout<<"ARRAY BEFORE USING HEAPSORT ALGORITHM: "<<endl;
// min.printunsortedarray();
// for(int i=n/2-1;i>=0;i--)
// min.heapify(i);
// cout<<"ARRAY AFTER USING HEAPSORT ALGORITHM: "<<endl;
// min.heapsort();
// return 0;}


// #include<iostream>
// #include<math.h>
// #include<climits>
// using namespace std;
// class maxheap{
// public:
// int *arr;
// int heapsize;
// int capacity;
// maxheap(int cap){
// heapsize=cap;
// capacity=cap;
// arr=new int[cap];}

// void heapify(int i){
// int large=i;
// int left=2*i+1;
// int right=2*i+2;
// if(left<heapsize && arr[left]>arr[large])
// large=left;
// if(right<heapsize && arr[right]>arr[large])
// large=right;
// if(large!=i){
// swap(arr[i],arr[large]);
// heapify(large);}}

// int extractmax(){
// if(heapsize<=0){
// return INT_MIN;}
// if(heapsize==1){
// heapsize--;
// return arr[0];}
// int root=arr[0];
// arr[0]=arr[heapsize-1];
// heapsize--;
// heapify(0);
// return root;}

// void getunsortedarray(){
// cout<<"ENTER THE ELEMENTS IN THE ARRAY ACCORDING TO ARRAY CAPACITY: "<<capacity<<endl;
// for(int i=0;i<capacity;i++)
// cin>>arr[i];}

// void heapsort(){
// int temp[capacity];
// for(int i=0;i<capacity;i++){
// temp[i]=extractmax();
// cout<<temp[i]<<" "; }}

// void printunsortedarray(){
// for(int i=0;i<heapsize;i++)
// cout<<arr[i]<<" ";
// cout<<endl;}

// };
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF THE ARRAY:"<<endl;
// cin>>n;
// maxheap max(n);
// max.getunsortedarray();
// cout<<"ARRAY BEFORE USING HEAPSORT ALGORITHM:"<<endl;
// max.printunsortedarray();
// for(int i=n/2-1;i>=0;i--)
// max.heapify(i);
// cout<<"ARRAY AFTER USING HEAPSORT ALGORITHM: "<<endl;
// cout<<"ARRAY SORT IN THE REVERSE ORDER:"<<endl;
// max.heapsort();
// return 0;}



// #include<iostream>
// using namespace std;
// void heapify(int n,int a[],int i){
// int small=i;
// int left=2*i+1;
// int right=2*i+2;
// if(left<n && a[left]<a[small])
// small=left;
// if(right<n && a[right]<a[small])
// small=right;
// if(small!=i){
// swap(a[small],a[i]);
// heapify(n,a,small);}}
// void heapsort(int n,int a[]){
// for(int i=n/2-1;i>=0;i--)
// heapify(n,a,i);
// for(int i=n-1;i>0;i--){
// swap(a[0],a[i]);
// heapify(i,a,0);}}
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF THE ARRAY:"<<endl;
// cin>>n;
// int a[n];
// cout<<"ENTER THE ELEMENTS IN THE ARRAY:"<<endl;
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"ARRAY BEFORE USING MIN-HEAP SORT ALGORITHM:"<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// cout<<endl;
// heapsort(n,a);
// cout<<"ARRAY AFTER USING MIN-HEAP SORT ALGORITHM: "<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}


// #include<iostream>
// using namespace std;
// void heapify(int n,int a[],int i){
// int left=2*i+1;
// int right=2*i+2;
// int large=i;
// if(left<n && a[left]>a[large])
// large=left;
// if(right<n && a[right]>a[large])
// large=right;
// if(large!=i){
// swap(a[large],a[i]);
// heapify(n,a,large);}}
// void heapsort(int n,int a[]){
// for(int i=n/2-1;i>=0;i--)
// heapify(n,a,i);
// for(int i=n-1;i>0;i--){
// swap(a[0],a[i]);
// heapify(i,a,0);}}
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF THE ARRAY:"<<endl;
// cin>>n;
// int a[n];
// cout<<"ENTER THE ELEMENTS IN THE ARRAY:"<<endl;
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"ARRAY BEFORE USING MAX-HEAP SORT ALGORITHM:"<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// cout<<endl;
// heapsort(n,a);
// cout<<"ARRAY AFTER USING MAX-HEAP SORT ALGORITHM: "<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}






// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
// private: 
//     void heapify(int n, vector<int>& arr, int i) {
//         int largest = i;
//         int left = 2 * i + 1;
//         int right = 2 * i + 2;
        
//         if (left < n && arr[left] > arr[largest])
//             largest = left;
//         if (right < n && arr[right] > arr[largest])
//             largest = right;
        
//         if (largest != i) {
//             swap(arr[i], arr[largest]);
//             heapify(n, arr, largest);
//         }
//     }
    
//     void buildMaxHeap(vector<int>& arr, int n) {
//         for (int i = n / 2 - 1; i >= 0; i--)
//             heapify(n, arr, i);
//     }

// public:
//     void convertMinToMaxHeap(vector<int> &arr, int N){
//         buildMaxHeap(arr,N);
//     }  
// };
// int main(){
//     int t = 1;
//     cin >> t;
//     while(t--){
//        int n; cin >> n;
//        vector<int> vec(n);
//        for(int i = 0;i<n;i++) cin >> vec[i];

//         Solution obj;
//         obj.convertMinToMaxHeap(vec,n);
//         for(int i = 0;i<n;i++) cout << vec[i] << " ";
//         cout << endl;
// cout << "~" << "\n";
// }
//     return 0;
// }






// #include <bits/stdc++.h>
// using namespace std;
// class Solution{
//     private: 
//     void heapify(int n, vector<int>& arr, int i) {
//         int largest = i;
//         int left = 2 * i + 1;
//         int right = 2 * i + 2;
        
//         if (left < n && arr[left] > arr[largest])
//             largest = left;
//         if (right < n && arr[right] > arr[largest])
//             largest = right;
        
//         if (largest != i) {
//             swap(arr[i], arr[largest]);
//             heapify(n, arr, largest);
//         }
//     }
    
//     void buildMaxHeap(vector<int>& arr, int n) {
//         for (int i = n / 2 - 1; i >= 0; i--)
//             heapify(n, arr, i);
//     }
    
// public:
//     vector<int> mergeHeaps(vector<int>& a, vector<int>& b, int n, int m) {
//         vector<int> nums;
//         nums.reserve(n + m);
        
//         for(int i : a) nums.push_back(i);
//         for(int i : b) nums.push_back(i);
        
//         buildMaxHeap(nums, nums.size());
//         return nums;
//     }
// };
// bool isMerged(vector<int> &arr1, vector<int> &arr2, vector<int> &merged){
//     if (arr1.size() + arr2.size() != merged.size()){
//         return false;
//     }
//     arr1.insert(arr1.end(),arr2.begin(),arr2.end());
//     sort(arr1.begin(),arr1.end());
//     vector<int> mergedCopy =merged;
//     sort(mergedCopy.begin(),mergedCopy.end());
//     if (arr1 != mergedCopy){
//         return false;
//     }
//     for(int i = 1; i<merged.size(); i++){
//         if(merged[i] > merged[(i-1)/2])
//             return false;
//     }
//     return true;
// }
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m, i;
//         cin >> n >> m;
//         vector<int> a(n,0),b(m,0);
//         for (i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         for (i = 0; i < m; i++) {
//             cin >> b[i];
//         }
//         vector<int> merged, copyA = a, copyB = b;
//         Solution obj;
//         merged = obj.mergeHeaps(a, b, n, m);
//         bool flag = isMerged(copyA, copyB, merged);
//         if(flag == false) cout<<0<<endl;
//         else cout<<1<<endl;
    
// cout << "~" << "\n";
// }
//     return 0;
// }