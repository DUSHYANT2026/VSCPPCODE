// #include <iostream>
// #include <string>
// using namespace std;
// string decimalToBinary(int n) {
//     if (n == 0)
//         return "0";

//     string binary = "";
//     while (n != 0) {
//         int x = n % 2;
//         binary = to_string(x) + binary;
//         n /= 2;
//     }
//     return binary;
// }

// int binarytoDecimal(string s){
//     int ans = 0;
//     for(int i=0;i<s.size();i++){
//         ans = ans*2 + (s[i]-'0');
//     }
//     return ans;
// }

// int main() {
//     int decimalNumber; 
//     cout << "Enter a decimal number: ";
//     cin >> decimalNumber;
//     cout << "Binary representation: " <<decimalToBinary(decimalNumber) << endl;

//     string newstring;
//     cout<< "Enter a Binary String: ";
//     cin>>newstring;
//     cout << "Decimal representation: " <<binarytoDecimal(newstring) << endl;

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     int binary_to_decimal(string str) {
//     int ans = 0;
//     int n = str.length();
//     for (int i = 0; i < n; ++i) {
//         int digit = str[i] - '0'; 
//         ans += digit * (1 << (n - i - 1));           // bit method to convert
//         ans = ans*2 + digit;                         // simple method to convert
//     }
//     return ans;
    
//     // return stoi(str, 0, 2);                      // another short way to convert the decimal to binary
//     }
// };
// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         string str;
//         cin >> str;
//         Solution ob;
//         int ans = ob.binary_to_decimal(str);
//         cout << ans << "\n";
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
// private:
// string changetobinary(unsigned n)
// {   string ans; 
//     while(n > 0){
//         ans = (to_string(n&1)) + ans;
//         n >>= 1; 
//     }
//     return ans; 
// }
// public:
// 	int binaryPalin (long long int N)
// 	{
// 	    string s1 = changetobinary(N);
// 	    string s2 = changetobinary(N);
	    
// 	    reverse(s1.begin(),s1.end());
	    
// 	    return s1 == s2;
// 	}
// };
// int main()
// {
// 	int t; cin >> t;
// 	while (t--)
// 	{
// 		long long int n; cin >> n;
// 		Solution ob;
// 		cout << ob.binaryPalin (n) << endl;
// 	}
// }


// #include<bits/stdc++.h>
// using namespace std;
// class Solution
// {
//     private:
//     void dfscheck1(int node,vector<int> &vis,stack<int> &s,vector<vector<int>> &adj){
//         vis[node] = 1;
//         for(auto it : adj[node]){
//             if(!vis[it]){
//                 dfscheck1(it,vis,s,adj);
//             }
//         }
//         s.push(node);
//     }
//     void dfscheck2(int node,vector<int> &vis,vector<vector<int>> &adj){
//         vis[node] = 1;
//         for(auto it : adj[node]){
//             if(!vis[it]){
//                 dfscheck2(it,vis,adj);
//             }
//         }
//     }
// 	public:
//     vector<int> kosaraju(int V, vector<vector<int>>& adj)
//     {
//         vector<int> vis(V,0);
//         stack<int> s;
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 dfscheck1(i,vis,s,adj);
//             }
//         }
//         vector<vector<int>> newadj(V);
//         for(int i=0;i<V;i++){
//             vis[i] = 0;
//             for(auto it : adj[i]){
//                 newadj[it].push_back(i);
//             }
//         }
//         vector<int> ans;
//         while(!s.empty()){
//             auto node = s.top(); s.pop();
//             if(!vis[node]){
//                 dfscheck2(node,vis,newadj);
//                 ans.push_back(node);
//             } 
//         }
//         return ans;
//     }  
// };
// int main()
// { 
//     int t;
//     cin >> t;
//     while(t--)
//     {
//     	int V, E;
//     	cin >> V >> E;
//     	vector<vector<int>> adj(V);
//     	for(int i = 0; i < E; i++)
//     	{
//     		int u, v;
//     		cin >> u >> v;
//     		adj[u].push_back(v);
//     	}
//     	Solution obj;
//         vector<int> ans =obj.kosaraju(V, adj);
//         for(int i=0;i<ans.size();i++)
//     	cout <<ans[i]<<"  "<<endl;
//     }
//     return 0;
// }


// #include <iostream>
// #include <vector>

// using namespace std;

// vector<vector<int>> generateSpiralMatrix(int n) {
//     vector<vector<int>> matrix(n, vector<int>(n));
//     int top = 0, bottom = n - 1, left = 0, right = n - 1;
//     int num = 1;

//     while (top <= bottom && left <= right) {
//         // Traverse right
//         for (int i = left; i <= right; ++i) {
//             matrix[top][i] = num++;
//         }
//         top++;

//         // Traverse down
//         for (int i = top; i <= bottom; ++i) {
//             matrix[i][right] = num++;
//         }
//         right--;

//         // Traverse left
//         for (int i = right; i >= left; --i) {
//             matrix[bottom][i] = num++;
//         }
//         bottom--;

//         // Traverse up
//         for (int i = bottom; i >= top; --i) {
//             matrix[i][left] = num++;
//         }
//         left++;
//     }

//     return matrix;
// }

// void printMatrix(const vector<vector<int>>& matrix) {
//     for (const auto& row : matrix) {
//         for (int num : row) {
//             cout << num << "\t";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter the size of the matrix: ";
//     cin >> n;

//     vector<vector<int>> spiralMatrix = generateSpiralMatrix(n);

//     cout << "Spiral Matrix:" << endl;
//     printMatrix(spiralMatrix);

//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// class disjoint{
//     private: 
//     vector<int> rank,parent,size;
//     public:
//     disjoint(int n){
//         rank.resize(n+1 , 0);
//         parent.resize(n+1);
//         size.resize(n+1 , 1);
//         for(int i=0;i<=n;i++){
//             parent[i] = i;
//         }
//     }

//     int findultparent(int node){
//         if(node == parent[node]){
//             return node;
//         }
//         return parent[node] = findultparent(parent[node]);
//     }

//     void unionbyrank(int u, int v){
//         int ult_u = findultparent(u);
//         int ult_v = findultparent(v);
//         if(ult_u == ult_v){
//             return ;
//         }
//         if(ult_u < ult_v){
//             parent[ult_u] = ult_v;
//         }
//         else if(ult_v < ult_u){
//             parent[ult_v] = ult_u;
//         }
//         else{
//             parent[ult_v] = ult_u;
//             rank[ult_u]++;
//         }
//     }

//     void unionbysize(int u,int v){
//         int ult_u = findultparent(u);
//         int ult_v = findultparent(v);
//         if(ult_u == ult_v) return;
//         if(ult_u < ult_v){
//             parent[ult_u] = ult_v;
//             size[ult_v] += size[ult_u];
//         }
//         else{
//             parent[ult_v] = ult_u;
//             size[ult_u] += size[ult_v];
//         }
//     }
// };
// class Solution1
// {
// 	public:
//     int spanningTree(int V, vector<vector<int>> adj[])
//     {
//         vector<pair<int,pair<int,int>>> edges;
//         for(int i=0;i<V;i++){
//            for(auto it :  adj[i]){
//                int adjnode = it[0];
//                int weight = it[1];
//                int node = i;
//                edges.push_back({weight,{node,adjnode}});
//             }
//         }
//         disjoint ds(V);
//         sort(edges.begin(),edges.end());
//         int sum = 0;
//         for(auto it :  edges){
//             int wt = it.first;
//             int u = it.second.first;
//             int v = it.second.second;

//             if(ds.findultparent(u) != ds.findultparent(v)){
//                 sum += wt;
//                 ds.unionbyrank(u,v); 
//             }
//         }
//         return sum;
//     }
// };
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--) {
//         int V, E;
//         cin >> V >> E;
//         vector<vector<int>> adj[V];
//         int i=0;
//         while (i++<E) {
//             int u, v, w;
//             cin >> u >> v >> w;
//             vector<int> t1,t2;
//             t1.push_back(v);
//             t1.push_back(w);
//             adj[u].push_back(t1);
//             t2.push_back(u);
//             t2.push_back(w);
//             adj[v].push_back(t2);
//         }   
//         Solution1 obj;
//     	cout << obj.spanningTree(V, adj) << "\n";
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// class Solution
// {
// 	public:
//     int spanningTree(int V, vector<vector<int>> adj[])
//     {
//         vector<int> vis(V,0);
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
//         pq.push({0,0});
//         int sum = 0;
        
//         while(!pq.empty()){
//             auto it = pq.top(); pq.pop();
//             int node = it.second;
//             int weight = it.first;
            
//             if(vis[node] == 1) continue;
//             vis[node] = 1;
//             sum += weight;
            
//             for(auto it : adj[node]){
//                 auto v=it[0];
//                 auto weig = it[1];
//                 pq.push({weig,v});
//             }
//         }
//         return sum;
//     }
// };
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--) {
//         int V, E;
//         cin >> V >> E;
//         vector<vector<int>> adj[V];
//         int i=0;
//         while (i++<E) {
//             int u, v, w;
//             cin >> u >> v >> w;
//             vector<int> t1,t2;
//             t1.push_back(v);
//             t1.push_back(w);
//             adj[u].push_back(t1);
//             t2.push_back(u);
//             t2.push_back(w);
//             adj[v].push_back(t2);
//         }
        
//         Solution obj;
//     	cout << obj.spanningTree(V, adj) << "\n";
//     }

//     return 0;
// }