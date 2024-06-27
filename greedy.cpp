// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     int maxChildren(int N, int M, vector<int> &greed, vector<int> &sz) {
//         int i = 0;
//         int j = 0;
//         int ans = 0;
//         sort(greed.begin(),greed.end());
//         sort(sz.begin(),sz.end());
        
//         while(i < N && j < M){
//             if(greed[i] <= sz[j]){
//                 ans++; i++; j++;
//             }else{
//                 j++;
//             }
//         }
//         return ans;
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int N, M;
//         cin >> N >> M;
//         vector<int> greed(N), sz(M);
//         for (int i = 0; i < N; i++) {
//             cin >> greed[i];
//         }
//         for (int i = 0; i < M; i++) {
//             cin >> sz[i];
//         }
//         Solution obj;
//         cout << obj.maxChildren(N, M, greed, sz) << endl;
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     bool lemonadeChange(int N, vector<int> &nums) {
//         int count5 = 0;
//         int count10 = 0;

//         for(int i=0; i<N; i++){
//             if(nums[i] == 5){
//                 count5++;
//             }
//             else if(nums[i] == 10){
//                 if(count5 < 1) return false;
//                 count10++; count5--;
//             }
//             else{
//                 if(count10 >= 1 && count5 >=1) count10-- , count5--;
//                 else if(count5 >= 3) count5 -=3;
//                 else return false;
//             }
//         }
//         return true;
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int N;
//         cin >> N;

//         vector<int> bills(N);
//         for (int i = 0; i < N; i++) cin >> bills[i];

//         Solution obj;
//         int ans = obj.lemonadeChange(N, bills);
//         if (ans)
//             cout << "True" << endl;
//         else
//             cout << "False" << endl;
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     long long solve(vector<int>& nums) {
//         long long ans = 0, wtime = 0;
//         sort(nums.begin(),nums.end());
        
//         for(int i=0; i<nums.size(); i++){
//             wtime += ans;
//             ans += nums[i];
            
//         }
//         return wtime/(long long)nums.size();
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> bt(n), p(n);
//         for (int i = 0; i < n; i++) {
//             cin >> bt[i];
//         }
//         Solution obj;
//         long long ans = obj.solve(bt);
//         cout << ans << "\n";
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     int canReach(int A[], int N) {
//         int maxi = 0;
        
//         for(int i=0; i<N; i++){
//             if(i > maxi) return 0;
//             maxi = max(maxi, A[i] + i);
//         }
//         return 1;
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int N;
//         cin>>N;
//         int A[N];
//         for(int i=0; i<N; i++)
//             cin>>A[i];
//         Solution ob;
//         cout << ob.canReach(A,N) << endl;
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//   public:
//     int minJumps(int arr[], int n){
//         if(n < 2) return 0;
//         int ans = 0;
//         int maxjump = 0;
//         int current = 0;
        
//         for(int i=0; i<n-1; i++){
//             maxjump = max(maxjump,arr[i] + i);
            
//             if(i == current){
//                 ans++;
//                 current = maxjump;
                
//                 if(current >= n-1){
//                     return ans;
//                 }
//             }
//         }
//         return -1;
//     }
// };
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,i,j;
//         cin>>n;
//         int arr[n];
//         for(int i=0; i<n; i++)
//             cin>>arr[i];
//         Solution obj;
//         cout<<obj.minJumps(arr, n)<<endl;
//     }
//     return 0;
// }








#include<bits/stdc++.h>
using namespace std;
    int GCGHCD2(int n, int m) {
        while (n > 0 && m > 0) {
            if (n > m) {
                n = n % m;
            } else {
                m = m % n;
            }
        }
        if (n == 0) return m;
        return n;
    }


    int functioncheck(int n,vector<int> &nums){
        vector<int> newnums;

        for(int i=0; i<n; i++){
            int maxi = INT_MIN;
            for(int j=0; j<i; j++){
                maxi = max(maxi,nums[j]);
            }
            newnums.push_back(GCGHCD2(nums[i],maxi));
        }

        sort(newnums.begin(),newnums.end());

        vector<pair<int,int>> v;

        int x = newnums.size();

        for(int i=0; i<x/2; i++){
            v.push_back({newnums[i],newnums[x-1-i]});
        }

        int ans = 0;

        for(auto  it : v){
            ans += GCGHCD2(it.first,it.second);
        }
        return ans;
    }
int main(){
    int n,x;
    cin>>n;
    vector<int> nums;

    for(int i=0; i<n; i++){
        cin>>x;
        nums.push_back(x);
    }
    cout<<functioncheck(n,nums);

    return 0; 
}
