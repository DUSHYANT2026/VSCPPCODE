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



// #include<iostream>
// using namespace std;
// int linera(int a[],int n ,int key){
// for(int i=0;i<n;i++){
// if (a[i]==key)
// return i+1;}
// return -1;}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++){
// cin>>a[i];}
// int key;
// cin>>key;
// cout<<linera(a,n,key)<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// int binary(int a[],int n,int key ){
// int s=0;
// int e=n-1; 
// while(s<e){
// int mid=(s+e)/2;
// if (a[mid]==key){
// return mid+1;}
// else if (a[mid]>key)
// e=mid-1;
// else 
// s=mid+1;} 
// return -1;}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++){
// cin>>a[i];}
// int  key;
// cin>>key;
// cout<<binary(a,n,key)<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF THE ARRAY:"<<endl;
// cin>>n;
// int key;
// int a[n][n];
// cout<<"ENTER THE ELEMENTS IN THE ARRAY:"<<endl;
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// cin>>a[i][j];}}
// cout<<"ENTER THE ELEMENT THAT YOU WANT TO SEARCH IN THE MATEIX:"<<endl;
// cin>>key;
// COUT<<"YOUR MATRIX THAT YOU ENTERED:"<<endl;
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// cout<<a[j][i]<<" ";}
// cout<<endl;}
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// if(a[i][j]==key||a[j][i]==key){
// cout<<i<<" "<<j<<endl; }}}
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF THE ARRAY:"<<endl;
// cin>>n;
// int a[n];
// cout<<"ENTER THE ELEMENTS IN THE ARRAY: "<<endl;
// for(int i=0;i<n;i++){
// cin>>a[i];}
// int s=0;
// int e=n-1;
// while(s<e){
// int temp=a[s];
// a[s]=a[e];
// a[e]=temp;
// s++;
// e--;}
// cout<<"REVERSE OF ARRAY THAT YOU ENTERED:"<<endl;
// for(int i=0;i<n;i++){
// cout<<a[i]<<" "; }
// return 0;}

// #include<iostream>
// using namespace std;
// void swap(int &x, int &y){
// int temp=x;
// x=y;
// y=temp;}
// int main(){
// int n1,n2;
// cout<<"Enter the value of n1 and n2:"<<endl;
// cin>>n1>>n2;
// cout<<"Value that you enter for n1 and n2 are:"<<endl;
// cout<<n1<<"  "<<n2<<endl;
// cout<<" value after swaping with the pass by refrence:"<<endl;
// swap(n1,n2);
// cout<<n1<<"  "<<n2<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// void swap(int *x,int *y){
// int temp=*x;
// *x=*y;
// *y=temp;}
// int main(){
// int n1,n2;
// cout<<"Enter the value of n1 and n2:"<<endl;
// cin>>n1>>n2;
// cout<<"Value that you enter for n1 and n2 are:"<<endl;
// cout<<n1<<"  "<<n2<<endl;
// cout<<" value after swaping with the help of the pointers :"<<endl;
// swap(&n1,&n2);
// cout<<n1<<"  "<<n2<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int *i;     
// i=&n;      
// cout<<"adress of the value"<<i<<endl;
// cout<<"adress of the value"<<&n<<endl;
// cout<<"value of th n: "<<n<<endl;
// cout<<"value of th n: "<<*i<<endl;
// *i=200;
// cout<<"After change the value of n by using pointers:"<<endl;
// cout<<"value of th n: "<<n<<endl;
// cout<<"value of th n: "<<*i<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// int *ptr;
// cout<<"Enter the size of array that you want to create: "<<endl;
// cin>>n;
// ptr=new int[n];
// cout<<"Enter the value that you want to store in the array: "<<endl;
// for(int i=0;i<=n;i++)
// cin>>ptr[i];
// cout<<"The value in the array are: "<<endl;
// for(int i=0;i<=n;i++)
// cout<<ptr[i]<<endl;
// return 0;} 

// #include<iostream>
// using namespace std;
// class complex{
// public:
// int number;
// float another;
// complex(){
// number=3;
// another=5;}
// complex(int n,int x){
// number=n;
// another=x;}
// void display(){
// cout<<number<<" "<<"+"<<another<<"i"<<endl;}};
// int main(){
// complex s,s1(30,56),s2(6,7);
// s.display();
// s1.display();
// s2.display();
// cout<<"calling value using pointer:"<<endl;
// complex *ptr;
// ptr=&s1;
// ptr->display();
// return 0;}

// #include<iostream>
// using namespace std;
// int add(int x,int y){
// return (x+y);}
// double add(double x,double y){
// return (x+y);}
// float add(float x,float y){
// return (x+y);}
// int main(){
// cout<<"THIS IS FUNCTION OVERLOADING USE SAME NAME IN DIFFERENT DATA TYPE: THIS IS INT: "<<add(10,20)<<endl;
// cout<<"THIS IS FUNCTION OVERLOADING USE SAME NAME IN DIFFERENT DATA TYPE: THIS IS DOUBLE: "<<add(126473283,2343983540)<<endl;
// cout<<"THIS IS FUNCTION OVERLOADING USE SAME NAME IN DIFFERENT DATA TYPE: THIS IS FLOAT: "<<add(12.45,34.7);
// return 0;}

// #include<iostream>
// using namespace std;
// class distan{
// int n;
// public:
// distan(int x){
// n=x;}
// void display(){
// cout<<"value that you enter: "<<n;}
// friend void adding(distan &d1);};
// void adding(distan &d1){
// d1.n=d1.n+5000;}
// int main(){
// distan d(1000);
// d.display();
// adding(d);
// cout<<endl;
// d.display();
// return 0;}

// #include<iostream>
// using namespace std;
// class first{
// friend class second;
// int n;
// public:
// first(int x){
// n=x;}};
// class second{
// public:
// void showdata(first &f){
// cout<<"The value that you enters: "<<f.n;}};
// int main(){
// first f(100);
// second s;
// s.showdata(f);
// return 0;}
 
// #include<iostream>
// using namespace std;
// class myclass{
// public:
// int n;
// static int count;
// myclass(){
// count++;}
// static int getcount(){return count;}};
// int myclass::count=0;
// int main(){
// cout<<"INITALL COUNT: "<<myclass::count<<endl;
// myclass m;
// cout<<"COUNT AFTER CALL THE OBJECT: "<<myclass::count<<endl;
// cout<<"COUNT AFTER USING STATIC FUNCTION: "<<myclass::getcount()<<endl;
// myclass m1;
// cout<<"INCREASE IN OBJECT WILL INCREASE THE COUNT: "<<myclass::getcount()<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// class complex{
// public:
// int real;
// int image;
// complex(){
// real=0;
// image=0;}
// complex(int x,int y){
// real=x;
// image=y;}
// void print(){
// cout<<real<<"+"<<image<<"i"<<endl;}
// complex operator +(complex c){
// complex temp;
// temp.real=real+c.real;
// temp.image=image+c.image;
// return temp;}};
// int main(){
// complex c1(10,20);
// complex c2(20,30);
// complex c3;
// c3=c1+c2;
// c3.print();
// return 0;}

// #include<iostream>
// using namespace std;
// class weight{
// private:
// int kg;
// public:
// weight(){
// kg=0;}
// weight(int num){
// kg=num;}
// void printweight(){
// cout<<"WEIGHT THAT YOU ENTERED:"<<kg<<endl;}
// void operator ++(){
// ++kg;}
// void operator --(int){
// kg--;}
// void operator ++(int){
// kg++;}
// void operator --(){
// --kg;}};
// int main(){
// weight w(0);
// w.printweight();
// ++w,++w,++w,++w;
// w.printweight();
// w--,w--,w--;
// w.printweight();
// w++,w++;
// w.printweight();
// --w;
// w.printweight();
// return 0;}

// #include<iostream>
// using namespace std;
// class weight{
// private:
// int kg;
// public:
// weight(){
// kg=0;}
// weight(int num){
// kg=num;}
// void printweight(){
// cout<<"WEIGHT THAT YOU ENTERED:"<<kg<<endl;}
// weight operator ++(){
// weight temp;
// temp.kg=++kg;
// return temp;}
// weight operator --(int){
// weight temp;
// temp.kg=kg--;
// return temp;}};
// int main(){
// weight w1(10),w2;
// w2=++w1;
// w2=++w1;
// w2.printweight();
// w2=w1--; w2=w1--; w2=w1--; w2=w1--; w2=w1--;
// w2.printweight();
// return 0;}

// #include<iostream>
// using namespace std;
// template <typename T>
// T add(T x,T y){
// return (x+y);}
// int main(){
// cout<<"TO AVOID FUNCTION OBVERLOADING: THIS IS INT TYPE: "<<add<int>(10,20)<<endl;
// cout<<"TO AVOID FUNCTION OBVERLOADING: THIS IS DOUBLE TYPE: "<<add<double>(1365474,232243250)<<endl;
// cout<<"TO AVOID FUNCTION OBVERLOADING: THIS IS FLOAT TYPE: "<<add<float>(10.99,20.34)<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// template<typename t>
// class weight{
// t kg;
// public:
// weight(t num){
// kg=num;}
// void getdata(){
// cout<<kg;}};
// int main(){
// weight <int>w(100);
// w.getdata();
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// template <class t>
// class AddElements{
// t x;
// public:
// AddElements(t a){
// x=a;} 
// t add(t b){
// return (x+b);}};
// template <>
// class AddElements<string>{
// string x;
// public:
// AddElements(string a){
// x=a;} 
// string concatenate(string b){
// return (x+b);}};
// int main(){
// int n;
// cin >> n;
// for(int i=0;i<n;i++){
// string type;
// cin >> type;
// if(type=="float"){
// double element1,element2;
// cin >> element1 >> element2;
// AddElements<double> myfloat (element1);
// cout << myfloat.add(element2) << endl;}
// else if(type == "int"){
// int element1, element2;
// cin >> element1 >> element2;
// AddElements<int> myint (element1);
// cout << myint.add(element2) << endl;}
// else if(type == "string") {
// string element1, element2;
// cin >> element1 >> element2;
// AddElements<string> mystring (element1);
// cout << mystring.concatenate(element2) << endl;}}
// return 0;}
