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

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int ans=0;
// while(n!=0){
// int digit=n%10;
// ans = ans*10 + digit;
// n=n/10;}
// cout<<ans ;
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter the number up to you wand addition:"<<endl;
// cin>>n;
// int sum=0;
// for(int i=0;i<=n;i++)
// sum=sum+i;
// cout<<"TOTAL SUM UP TO NUMBER THAT YOU ENTER"<<endl;
// cout<<sum<<endl;
// return 0;}

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    // bool prime(int n) {
    //     if (n <= 1) {
    //         return false;
    //     }
    //     for (int i = 2; i <= sqrt(n); i++) {
    //         if (n % i == 0) {
    //             return false;
    //         }
    //     }
    //     return true;
    // }
// int  main(){
// int n;
// cin>>n;
// if(prime(n)==true)
// cout<<"NUBER THAT YOU ENTERD IS A PRIME NUMBER: "<<n<<endl;
// else
// cout<<"ENTER ANOTHER NUMBER BECAUSE THIS NUMBER IS NOT PRIME:"<<endl;
// return 0;}

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int key=n;
// int sum=0;
// while(n>0){
// int last=n%10;
// sum+=round(pow(last,3)); 
// n=n/10;}
// if(sum==key)
// cout<<sum<<"\n NUMBER THAT YOU ENTERED IS ANGSTROME:";
// else
// cout<<"ENTER ANOTHER NUMBER"<<endl;
// return 0;} 

// #include<iostream>
// using namespace std;
// int facts(int n){
// int fact=1;
// for(int i=1;i<=n;i++)
// fact=fact*i;
// return fact;}
// int main(){
// int n;
// cin>>n;
// int key=n;
// int sum=0;
// while(n!=0){
// int last=n%10;
// sum+=facts(last);
// n=n/10;}
// if(sum==key)
// cout<<sum<<"\n NUMBER THAT YOU ENTERED IS STRONG NUMBER:";
// else
// cout<<"NOT A STRONG NUMBER ENTERED ANOTHER ONE"<<endl;
// return 0;}

// #include<iostream>
// #include<math.h>
// int factorial(int n){
// int fact=1;
// for(int i=1;i<=n;i++){
// fact=fact*i;}
// return fact;}
// int angstrome(int n){
// int sum=0;
// while(n!=0){
// int last=n%10;
// sum+=round(pow(last,3));
// n=n/10;}
// return sum;}
// int strongnumber(int n){
// int sum=0;
// while(n!=0){
// int last=n%10;
// sum+=factorial(last);
// n=n/10;}
// return sum;}
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int original=n;
// // if(angstrome(n)==original)
// // cout<<"number that you entered is angstrome: "<<angstrome(n)<<endl;
// // else
// // cout<<"THE ANGTROME SUM OF THE NUMBER THTA YOU ENTERES: "<<angstrome(n)<<endl;
// if(strongnumber(n)==original)
// cout<<"NUBER THAT YOU ENTERED IS strongnumberp:: "<<strongnumber(n)<<endl;
// else
// cout<<"STRONG NUMBER OF OF NUMBER THT YOU ENTERED:: "<<strongnumber(n)<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int sum=0;
// int key=n;
// while(n>0){
// int last=n%10;
// sum=sum*10+last;
// n=n/10;}
// if(n<0)
// cout<<"DUSHYANT PLEASE ENTER A POSITIVE NUMBER:"<<endl;
// else if(sum==key)
// cout<<"NUMBER THAT YOU ENTERED IS PALINDROME: "<<sum<<endl;
// else
// cout<<"NUMBER THAT YOU ENTERED NOT A PALINDROME PLEASE ENTER NEW NUMBER:"<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// int fabonacci(int n){
// if(n<=1)
// return n;
// return (fabonacci(n-1)+fabonacci(n-2));}
// int main(){
// int x;
// cin>>x;
// fabonacci(x);
// return 0;}

// #include<iostream>
// using namespace std;
// bool prime(int n){
// if(n<0)
// return false;
// for(int i=2;i<n;i++)
// if(n%i==0)
// return false;
// return true;}
// int main(){
// int x,y;
// cout<<"ENTER THE RANGE IN WICH YOU WANT YOUR PRIME NUMBER:"<<endl;
// cin>>x>>y;
// for(int i=x;i<=y;i++){
// if(prime(i))
// cout<<i<<" ";}
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int x,y,z;
// cin>>x>>y>>z;
// int i;
// while(i>0){
// if(x%i==0||y%i==0||z%i==0)
// break;
// i--;}
// cout<<i<<endl;   
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int sum=0;
// for(int i=0;i<n;i++)
// sum=sum+a[i];
// cout<<sum<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// void addition(int n){
// int sum=0;
// for(int i=0;i<=n;i++)
// sum+=i;
// cout<<sum<<endl;}
// void addition1(int n){
// int sum=(n*(n+1))/2;
// cout<<sum<<endl;}
// void facts(int n){
// int fact=1;
// for(int i=1;i<=n;i++)
// fact=fact*i;
// cout<<fact<<endl;}
// int  recursive(int n){
// if(n<=1)
// return 1;
// return (n*recursive(n-1));}
// int main(){
// int n;
// cin>>n;
// addition(n);
// addition1(n);
// facts(n);
// cout<<recursive(n)<<endl;;
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int hash[20]={0};
// for(int i=0;i<n;i++){
// hash[a[i]]+=1;}
// int q;
// cin>>q;
// while(q--){
// int x;
// cin>>x;
// cout<<hash[x]<<endl;}
// return 0;}





// #include<iostream>
// int fabonacci(int n){
// 	if(n<=1) return 1;
// 	return fabonacci(n-1)+fabonacci(n-2);
// }
// using namespace std;
// int main(){
// int n;
// cin>>n;
// cout<<"fabonacci USING RECURSION:  "<<fabonacci(n)<<endl;
// return  0;}

// #include<iostream>
// int factorial(int n){
// 	if(n<=1) return n;
// 	return n*factorial(n-1);
// }
// using namespace std;
// int main(){
// int n;
// cin>>n;
// cout<<"FACTORIAL USING RECURSION:  "<<factorial(n)<<endl;
// return  0;}


// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int sum=0;
// while(n!=0){
// 	sum+=n%10;
// 	n=n/10;
// }
// cout<<"NUMBER INTO DIGITS AND PRINT THE SUM:  "<<sum<<endl;
// return  0;}

// #include<iostream>
// using namespace std;

// int rev(int n) {
//     int ans = 0; 
//     while (n != 0) {
//         int r = n % 10;
//         ans = ans * 10 + r;
//         n = n / 10;
//     }
//     return ans;
// }

// int main() {
//     int n;
//     cin >> n;
//     cout << "REVERSE OF THE NUMBER THAT YOU ENTERED: " << rev(n) << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void swaping(int &a,int &b){
// 	int temp=a;
// 	a=b;
// 	b=temp;
// }
// int main(){
// int a,b;
// cin>>a>>b;
// cout<<"THE VALUE OF A BEFORE SWAP:"<<a<<endl;
// cout<<"THE VALUE OF B BEFORE SWAP:"<<b<<endl;
// cout<<"EXCHANGE TEO NUMBER USING FUNCTION CALL:"<<endl;
// swaping(a,b);
// cout<<"THE VALUE OF A AFTER SWAP:"<<a<<endl;
// cout<<"THE VALUE OF B AFTER SWAP:"<<b<<endl;
// return  0;}


// #include<iostream>
// int fabonacci(int n){
// int first=0;
// int second=1;
// int sum;
// for(int i=2;i<=n;i++){
// 	if(i<=1) return i;
// 	else{
// 		sum=first+second;
// 		first=second;
// 		second=sum;
// 	}
// }
// return second;
// }
// using namespace std;
// int main(){
// int n;
// cin>>n;
// cout<<"fabonacci USING ITERATIVE:  "<<fabonacci(n)<<endl;
// return  0;}


// #include<iostream>
// #include<vector>
// using namespace std;
// void swaping(int &a,int &b){
// 	int temp=a;
// 	a=b;
// 	b=temp;
// }
// vector<int> reverseing(int n,int a[]){
// 	vector<int> nums;
// 	int s=0;
// 	int e=n-1;
// 	while(s<e){
// 		swaping(a[s],a[e]);
// 		nums.push_back(a[s]);
// 		s++;
// 		e--;
// 	}
// 	return nums;
// }
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++){
// 	cin>>a[i];
// }
// vector<int> ans=reverseing(n,a);
// for(int i=0;i<n;i++){
// 	cout<<a[i]<<" ";
// }
// return 0;}