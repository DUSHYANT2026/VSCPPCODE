// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   private:
//     bool dfscheck(int node,int vis[],int pathvis[],vector<int> adj[]){
//         vis[node]=1;
//         pathvis[node] =1;
//         for(auto it: adj[node]){
//             if(!vis[it]){
//                 if(dfscheck(it,vis,pathvis,adj)==true) return true;
//             }
//             else if(pathvis[it]==true) return true;
//         }
//         pathvis[node]=0;
//         return false;
//     }
//   public:
//     bool isCyclicdirectredgraph(int V, vector<int> adj[]) {
//         int vis[V] ={0};
//         int pathvis[V]={0};
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 if(dfscheck(i,vis,pathvis,adj)==true) return true;
//             }
//         }
//         return false;
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int V, E;
//         cin >> V >> E;
//         vector<int> adj[V];
//         for (int i = 0; i < E; i++) {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//         }
//         Solution obj;
//         cout << obj.isCyclicdirectredgraph(V, adj) << "\n";
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// private:
//     void dfscheck(vector<int> &vis,vector<int> adj[],int node){
//         vis[node]=1;
//         for(auto it : adj[node]){
//             if(!vis[it]){
//                 dfscheck(vis,adj,it);
//             }
//         }
//     }
//     bool isconnected(int V,vector<int> &vis,vector<int> adj[]){
//         int start=-1;
//         for(int i=0;i<V;i++){
//             if(adj[i].size()>0){
//                 start=i;
//                 break;
//             }
//         }
//         if(start==-1) return true;
//         dfscheck(vis,adj,start);
//         for(int i=0;i<V;i++){
//             if(!vis[i] && adj[i].size()>0){
//                 return false;
//             }
//         }
//         return true;
//     }
// public:
// 	int isEularCircuit(int V, vector<int>adj[]){
// 	   vector<int> vis(V,0);
// 	   if(!isconnected(V,vis,adj)) return 0;
// 	   for(int i=0;i<V;i++){
// 	       if(adj[i].size()%2==0) return 0;
// 	   }
// 	   return 1;
// 	}
// };
// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		int V, E;
// 		cin >> V >> E;
// 		vector<int>adj[V];
// 		for(int i = 0; i < E; i++){
// 			int u, v;
// 			cin >> u >> v;
// 			adj[u].push_back(v);
// 			adj[v].push_back(u);
// 		}
// 		Solution obj;
// 		int ans = obj.isEularCircuit(V, adj);
// 		cout << ans <<"\n";	}
// 	return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
//         vector<int> adj[N];
//         for(auto it:edges){
//             adj[it[0]].push_back(it[1]);
//             adj[it[1]].push_back(it[0]);
//         }
//         int dis[N];
//         for(int i=0;i<N;i++){
//             dis[i]=1e9;
//         }
//         dis[src]=0;
//         queue<int> q;
//         q.push(src);
//         while(!q.empty()){
//             int node = q.front();
//             q.pop();
//             for(auto it : adj[node]){
//                 if(dis[it]>dis[node]+1){
//                     dis[it] = dis[node]+1;
//                     q.push(it);
//                 }
//             }
//         }
//         vector<int> ans(N,-1);
//         for(int i=0;i<N;i++){
//             if(dis[i] != 1e9)
//             ans[i] = dis[i];
//         }
//         return ans;
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m; cin >> n >> m;
//         vector<vector<int>> edges;
//         for (int i = 0; i < m; ++i) {
//             vector<int> temp;
//             for(int j=0; j<2; ++j){
//                 int x; cin>>x;
//                 temp.push_back(x);
//             }
//             edges.push_back(temp);
//         }
//         int src; cin >> src;
//         Solution obj;
//         vector<int> res = obj.shortestPath(edges, n, m, src);
//         for (auto x : res){
//             cout<<x<<" ";
//         }
//         cout << "\n";
//     }
// }



// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
//         vector<pair<int, int>> graph[n + 1];
//         for (auto it : edges) {
//             graph[it[0]].push_back({it[1], it[2]});
//             graph[it[1]].push_back({it[0], it[2]});
//         }
        
//         vector<int> dist(n + 1, 1e9);
//         vector<int> par(n + 1);
//         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
//         dist[1] = 0;
//         for(int i=1; i<n+1;i++){
//             par[i]=i;
//         }
//         pq.push({0, 1});
        
//         while (!pq.empty()) {
//             auto i = pq.top(); pq.pop();
//             int node = i.second;
//             int dis = i.first;
            
//             for (auto it : graph[node]) {
//                 int newnode = it.first;
//                 int weight = it.second;
//                 if (dist[newnode] > dis + weight) {
//                     dist[newnode] = dis + weight;
//                     pq.push({dis + weight, newnode});
//                     par[newnode] = node;
//                 }
//             }
//         }
        
        
//         if(dist[n]==1e9) return {-1};
//         vector<int> ans;
//         int node=n;
//         while(par[node]!=node){
//             ans.push_back(node);
//             node=par[node];
//         }
//         ans.push_back(1);
//         ans.push_back(dist[n]);
//         reverse(ans.begin(),ans.end());
//         return ans;
    
//     }
// };
// int main() {

//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         vector<vector<int>> edges;
//         map<pair<int, int>, int> mp;
//         for (int i = 0; i < m; ++i) {
//             vector<int> temp;
//             for (int j = 0; j < 3; ++j) {
//                 int x;
//                 cin >> x;
//                 temp.push_back(x);
//             }
//             edges.push_back(temp);
//             mp[{edges.back()[0], edges.back()[1]}] = edges.back()[2];
//             mp[{edges.back()[1], edges.back()[0]}] = edges.back()[2];
//         }

//         Solution obj;
//         vector<int> res = obj.shortestPath(n, m, edges);
//         int ans = 0;
//         for (int i = 2; i < res.size(); i++) {
//             ans += mp[{res[i], res[i - 1]}];
//         }
//         if (ans == res[0]) {

//         } else if (res.size() == 1 && res[0] == -1)
//             ans = res[0];
//         else
//             ans = -2;
//         cout << ans << endl;
//     }
// }




// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
// private: 
//      void dfstopo(int node,vector<pair<int,int>> adj[],stack<int> &s,int vis[]){
//          vis[node] =1;
//          for(auto it : adj[node]){
//              if(!vis[it.first]){
//                  dfstopo(it.first,adj,s,vis);
//              }
//          }
//          s.push(node);
//      }
//   public:
//      vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
//          vector<pair<int,int>> adj[N];
//          for(int i=0;i<M;i++){
//              int u=edges[i][0];
//              int v=edges[i][1];
//              int wt=edges[i][2];
//              adj[u].push_back({v,wt});
//          }
//          int vis[N]={0};
//          stack<int> s;
//          for(int i=0;i<N;i++){
//              if(!vis[i]){
//                  dfstopo(i, adj, s, vis);
//              }
//          }
//          vector<int> dist(N);
//          for(int i=0;i<N;i++){
//              dist[i] =1e9;
//          }
//          dist[0]=0;
//          while(!s.empty()){
//              int node = s.top();
//              s.pop();
//              for(auto it : adj[node]){
//                 int v=it.first;
//                 int wt=it.second;
//                 if(dist[node] + wt <dist[v]){
//                     dist[v]=dist[node]+wt;
//                 }
//              }
//          }
//          for(int i=0;i<N;i++){
//              if(dist[i] == 1e9)
//              dist[i]=-1;
//          }
//          return dist;
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         vector<vector<int>> edges;
//         for(int i=0; i<m; ++i){
//             vector<int> temp;
//             for(int j=0; j<3; ++j){
//                 int x; cin>>x;
//                 temp.push_back(x);
//             }
//             edges.push_back(temp);
//         }
//         Solution obj;
//         vector<int> res = obj.shortestPath(n, m, edges);
//         for (auto x : res) {
//             cout << x << " ";
//         }
//         cout << "\n";
//     }
// }



// #include<bits/stdc++.h>
// using namespace std;
// class Solution
// {
// 	public:
//     vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
//     {
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
//         vector<int> dist(V);
//         for(int i=0;i<V;i++){
//             dist[i] =1e9;
//         }
//         dist[S] = 0;
//         pq.push({0,S});
//         while(!pq.empty()){
//             int dis=pq.top().first;
//             int node = pq.top().second;
//             pq.pop();
//             for(auto it : adj[node]){
//                 int v=it[0];
//                 int weight=it[1];
//                 if(dis+ weight < dist[v]){
//                     dist[v] = dis+weight;
//                     pq.push({dist[v],v});
//                 }
//             }
//         }
//         return dist;
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
//         int S;
//         cin>>S;    
//         Solution obj;
//     	vector<int> res = obj.dijkstra(V, adj, S);	
//     	for(int i=0; i<V; i++)
//     	    cout<<res[i]<<" ";
//     	cout<<endl;
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     int shortestDistance(int n, int m, vector<vector<int>> grid, int x, int y) {
        
//         vector<vector<int>> vis(n, vector<int> (m,0));
//         vector<vector<int>> dist(n,vector<int> (m,INT_MAX));
//         priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,
//         greater<pair<int,pair<int,int>>>> pq;
//         pq.push({0,{0,0}});
//         if(grid[0][0] != 1) return -1;
//         if(x == 0 && y == 0) return 0;
        
//         while(!pq.empty()){
//             auto it = pq.top(); pq.pop();
//             int row = it.second.first;
//             int col = it.second.second;
//             int dis = it.first;
//             vis[row][col] = 1;
//             vector<int> drow = {+1,0,-1,0};
//             vector<int> dcol = {0,+1,0,-1};
//             for(int i=0; i<4; i++){
//                 int nrow = row + drow[i];
//                 int ncol = col + dcol[i];
//                 if(nrow >= 0 && ncol >= 0 && nrow < n && ncol <m && vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1){
//                     if(dist[nrow][ncol] > dis + 1){
//                         dist[nrow][ncol] = dis+1;
//                         pq.push({dist[nrow][ncol],{nrow,ncol}});
//                     }
//                 }
//             }
//         }
//         if(dist[x][y] == INT_MAX) return -1;
//         return dist[x][y];
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int N, M, x, y;
//         cin >> N >> M;
//         vector<vector<int>> v(N, vector<int>(M));
//         for (int i = 0; i < N; i++)
//             for (int j = 0; j < M; j++) cin >> v[i][j];
//         cin >> x >> y;
//         Solution ob;
//         cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    
// cout << "~" << "\n";
// }
// }






// #include<bits/stdc++.h>
// using namespace std;
// class Solution
// {
// 	public:
//     vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
//     {
//         queue<pair<int,int>> q;
//         vector<int> dist(V,1e9);
//         dist[S]=0;
//         q.push({0,S});
//         while(!q.empty()){
//             int dis=q.front().first;
//             int node=q.front().second;
//             q.pop();
//             for(auto it : adj[node]){
//                 int v=it[0];
//                 int w=it[1];
//                 if(dis+w<dist[v]){
//                     dist[v]=dis+w;
//                     q.push({dis+w,v});
//                 }
//             }
//         }
//         return dist;
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
//         int S;
//         cin>>S;    
//         Solution obj;
//     	vector<int> res = obj.dijkstra(V, adj, S);	
//     	for(int i=0; i<V; i++)
//     	    cout<<res[i]<<" ";
//     	cout<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class Solution
// {
// 	public:
//     vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
//     {
//         set<pair<int,int>> st;
//         vector<int> dist(V,1e9);
//         dist[S]=0;
//         st.insert({0,S});
//         while(!st.empty()){
//             auto it=*(st.begin());
//             int dis=it.first;
//             int node=it.second;
//             st.erase(it);
//             for(auto it : adj[node]){
//                 int v=it[0];
//                 int wt=it[1];
//                 if(dis+wt<dist[v]){
//                     if(dist[v]!=1e9)
//                     st.erase({dist[v],v});
//                     dist[v]=dis+wt;
//                     st.insert({dist[v],v});
//                 }
//             }
//         }
//         return dist;
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
//         int S;
//         cin>>S;    
//         Solution obj;
//     	vector<int> res = obj.dijkstra(V, adj, S);	
//     	for(int i=0; i<V; i++)
//     	    cout<<res[i]<<" ";
//     	cout<<endl;
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
//         pair<int, int> destination) {
//         if(source.first == destination.first && source.second == destination.second)
//         return 0;

//         queue<pair<int,pair<int,int>>> q;
//         int n=grid.size();
//         int m=grid[0].size();
//         vector<vector<int>> dist(n, vector<int>(m, 1e9));
//         dist[source.first][source.second] = 0;
//         q.push({0,{source.first,source.second}});
        
//         int drow[] ={-1,0,+1,0};
//         int dcol[] ={0,+1,0,-1};
        
//         while(!q.empty()){
//             auto it = q.front();
//             int row=it.second.first;
//             int col=it.second.second;
//             int dis=it.first;
//             q.pop();

//             for(int i=0;i<4;i++){
//                 int nrow=row+drow[i];
//                 int ncol=col+dcol[i];
//                 if(nrow>=0 && nrow<n && ncol>=0 && ncol<m 
//                 && grid[nrow][ncol] == 1 && dis+1 < dist[nrow][ncol]){
//                     dist[nrow][ncol] = dis+1;
//                     if(nrow == destination.first && ncol== destination.second)
//                        return dis+1;
//                     q.push({dis+1,{nrow,ncol}});
//                 }
//             }
//         }
//         return -1;
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         vector<vector<int>> grid(n, vector<int>(m));
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 cin >> grid[i][j];
//             }
//         }
//         pair<int, int> source, destination;
//         cin >> source.first >> source.second;
//         cin >> destination.first >> destination.second;
//         Solution obj;
//         cout << obj.shortestPath(grid, source, destination) << endl;
//     }
// }




// #include <bits/stdc++.h> 
// int minSumPath(vector<vector<int>> &grid) {
//     int n=grid.size();
//     int m=grid[0].size();

//     priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q;
//     vector<vector<long long>> dist(n,vector<long long> (m,1e9));
//     dist[0][0]=grid[0][0];
//     q.push({grid[0][0],{0,0}});
//     int drow[]={-1,0,+1,0};
//     int dcol[]={0,+1,0,-1};
    
//     while(!q.empty()){
//         auto it=q.top(); q.pop();
//         int row=it.second.first;
//         int col=it.second.second;
//         int dis=it.first;
//         if (dis > dist[row][col])
//             continue;

//         for(int i=0;i<4;i++){
//             int nrow=row+drow[i];
//             int ncol=col+dcol[i];
//             if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m ) {
//                if (dist[nrow][ncol] > dis+grid[nrow][ncol]){
//                   dist[nrow][ncol] = dis+grid[nrow][ncol];
//                   q.push({dist[nrow][ncol],{nrow,ncol}});
//                }
//             }
//         }
//     }
//     return dist[n-1][m-1];
// }




// #include<bits/stdc++.h>
// using namespace std;
// class Solution 
// {
//     public:
// 	vector<vector<int>>nearest(vector<vector<int>>grid)
// 	{
// 	    int n=grid.size();
// 	    int m=grid[0].size();
// 	    vector<vector<int>> dist(n,vector<int> (m,0));
// 	    vector<vector<int>> vis(n,vector<int> (m,0));
// 	    queue<pair<pair<int,int>,int>> q;
	    
// 	    for(int i=0;i<n;i++){
// 	        for(int j=0;j<m;j++){
// 	            if(grid[i][j] == 1){
// 	                q.push({{i,j},0});
// 	                vis[i][j]=1;
// 	            }
// 	            else
// 	            vis[i][j]=0;
// 	        }
// 	    }
// 	    int drow[]={-1,0,1,0};
// 	    int dcol[]={0,-1,0,+1};
	    
// 	    while(!q.empty()){
// 	        auto it=q.front(); q.pop();
// 	        int row=it.first.first;
// 	        int col=it.first.second;
// 	        int steps=it.second;
// 	        dist[row][col]=steps;
	        
// 	        for(int i=0;i<4;i++){
// 	            int nrow=row+drow[i];
// 	            int ncol=col+dcol[i];
// 	            if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && vis[nrow][ncol] == 0){
// 	                vis[nrow][ncol]=1;
// 	                q.push({{nrow,ncol},steps+1});
// 	            }
// 	        }
// 	    }
// 	    return dist;
// 	}
// };
// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		int n, m;
// 		cin >> n >> m;
// 		vector<vector<int>>grid(n, vector<int>(m, -1));
// 		for(int i = 0; i < n; i++){
// 			for(int j = 0; j < m; j++){
// 				cin >> grid[i][j];
// 			}
// 		}
// 		Solution obj;
// 		vector<vector<int>> ans = obj.nearest(grid);
// 		for(auto i: ans){
// 			for(auto j: i){
// 				cout << j << " ";
// 			}
// 			cout << "\n";
// 		}
// 	}
// 	return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     int MinimumEffort(vector<vector<int>>& heights) {

//         priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,
//         greater<pair<int,pair<int,int>>>> pq;     
//         int n=heights.size();
//         int m=heights[0].size();
//         vector<vector<int>> dist(n,vector<int>(m,1e9));
//         dist[0][0]=0;
//         pq.push({0,{0,0}});
//         int drow[]={-1,0,+1,0};
//         int dcol[]={0,+1,0,-1};  

//         while(!pq.empty()){
//             auto it=pq.top(); pq.pop();
//             int dis=it.first;
//             int row=it.second.first;
//             int col=it.second.second;
//             if(row == n-1 && col == m-1) return dis;

//             for(int i=0;i<4;i++){
//                 int nrow=row+drow[i];
//                 int ncol=col+dcol[i];
//                 if(nrow>=0 && nrow<n && ncol>=0 && ncol<m){
//                     int neweffort=max(abs(heights[row][col]-heights[nrow][ncol]),dis);
//                     if(neweffort<dist[nrow][ncol]){
//                         dist[nrow][ncol]=neweffort;
//                         pq.push({neweffort,{nrow,ncol}});
//                     }
//                 }
//             }
//         }
//         return 0;
//     }
// };
// int main() {
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int n,m; cin>>n>>m;
//         vector<vector<int>> heights;
//         for(int i=0; i<n; ++i){
//             vector<int> temp;
//             for(int j=0; j<m; ++j){
//                 int x; cin>>x;
//                 temp.push_back(x);
//             }
//             heights.push_back(temp);
//         }  
//         Solution obj;
//         cout<<obj.MinimumEffort(heights)<<"\n";
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     int minimumTime(vector<vector<int>>& grid) {
//         int n = grid.size(); int m = grid[0].size();
//         vector<vector<int>> vis(n, vector<int> (m,0));

//         if(grid[0][1] > 1 && grid[1][0] > 1) return -1;

//         priority_queue<pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>>,
//         greater<pair<int,pair<int,int>>>> pq;

//         pq.push({0,{0,0}});
//         vector<int> drow = {1,0,-1,0};
//         vector<int> dcol = {0,1,0,-1};

//         while(!pq.empty()){
//             auto it = pq.top(); pq.pop();
//             int row = it.second.first;
//             int col = it.second.second;
//             int dis = it.first;

//             if(row == n-1 && col == m-1) return dis;

//             for(int i=0; i<4; i++){
//                 int nrow = drow[i] + row;
//                 int ncol = dcol[i] + col;
//                 if(nrow >= 0 && ncol >= 0 && nrow < n && ncol < m &&
//                 vis[nrow][ncol] != 1){
//                     int check = (grid[nrow][ncol] - dis) %2 == 0) ? 1 : 0;
//                     int newdis = max(grid[nrow][ncol] + check , dis+1);       
//                     pq.push({newdis,{nrow,ncol}});
//                     vis[nrow][ncol] = 1;
//                 }
//             }
//         }
//         return -1;
//     }
// };
// int main() {
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int n,m; cin>>n>>m;
//         vector<vector<int>> grid;
//         for(int i=0; i<n; ++i){
//             vector<int> temp;
//             for(int j=0; j<m; ++j){
//                 int x; cin>>x;
//                 temp.push_back(x);
//             }
//             grid.push_back(temp);
//         }  
//         Solution obj;
//         cout<<obj.minimumTime(grid)<<"\n";
//     }
//     return 0;
// }




// class Solution {
// public:
//     int minCost(vector<vector<int>>& grid) {
//         int n = grid.size(); int m = grid[0].size();
//         vector<vector<int>> distance(n, vector<int> (m, INT_MAX));
//         vector<vector<int>> vis(n,vector<int>(m,0));
//         distance[0][0] = 0;
//         priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,
//         greater<pair<int,pair<int,int>>>> pq;
//         pq.push({0,{0,0}});

//         vector<int> delrow = {0,0,1,-1};
//         vector<int> delcol = {+1,-1,0,0};

//         while(!pq.empty()){
//             auto it = pq.top(); pq.pop();
//             int row = it.second.first;
//             int col = it.second.second;
//             int add = it.first;
//             if(vis[row][col] == 1) continue;
//             vis[row][col] = 1;

//             if(row == n-1 && col == m-1) return add;
//             for(int i=0; i<4; i++){
//                 int nrow = row + delrow[i];
//                 int ncol = col + delcol[i];
//                 if(nrow >= 0 && ncol >= 0 && nrow < n && ncol < m){
//                     int newadd = add + ((i + 1 != grid[row][col]) ? 1 : 0);
//                     if(distance[nrow][ncol] > newadd ){
//                         distance[nrow][ncol] = newadd;
//                         pq.push({newadd,{nrow,ncol}});
//                     }
//                 }
//             }
//         }
//         return distance[n-1][m-1];
//     }
// };






// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     int minTimeToReach(vector<vector<int>>& grid) {
//         int n = grid.size(); int m = grid[0].size();
//         vector<vector<int>> distance(n, vector<int> (m,INT_MAX));
//         distance[0][0] = 0;

//         priority_queue<pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>>,
//         greater<pair<int,pair<int,int>>>> pq;

//         pq.push({0,{0,0}});
//         vector<int> drow = {1,0,-1,0};
//         vector<int> dcol = {0,1,0,-1};

//         while(!pq.empty()){
//             auto it = pq.top(); pq.pop();
//             int dis = it.first;
//             int row = it.second.first; int col = it.second.second;

//             if(row == n-1 && col == m-1) return dis;

//             for(int i=0; i<4; i++){
//                 int nrow = drow[i] + row;
//                 int ncol = dcol[i] + col;
//                 if(nrow >= 0 && ncol >= 0 && nrow < n && ncol < m){
//                     int newdis = max(dis,grid[nrow][ncol]) + 1; 
//                     if(newdis < distance[nrow][ncol]){
//                         distance[nrow][ncol] = newdis;
//                         pq.push({newdis,{nrow,ncol}});
//                     } 
//                 }
//             }
//         }
//         return distance[n-1][m-1];
//     }
// };
// int main() {
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int n,m; cin>>n>>m;
//         vector<vector<int>> grid;
//         for(int i=0; i<n; ++i){
//             vector<int> temp;
//             for(int j=0; j<m; ++j){
//                 int x; cin>>x;
//                 temp.push_back(x);
//             }
//             grid.push_back(temp);
//         }  
//         Solution obj;
//         cout<<obj.minTimeToReach(grid)<<"\n";
//     }
//     return 0;
// }








// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     int minTimeToReach(vector<vector<int>>& grid) {
//         int n = grid.size(); int m = grid[0].size();
//         vector<vector<int>> distance(n, vector<int> (m,INT_MAX));
//         distance[0][0] = 0;

//         priority_queue<pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>>,
//         greater<pair<int,pair<int,int>>>> pq;

//         pq.push({0,{0,0}});
//         vector<int> drow = {1,0,-1,0};
//         vector<int> dcol = {0,1,0,-1};

//         while(!pq.empty()){
//             auto it = pq.top(); pq.pop();
//             int dis = it.first;
//             int row = it.second.first; int col = it.second.second;

//             if(row == n-1 && col == m-1) return dis;

//             for(int i=0; i<4; i++){
//                 int nrow = drow[i] + row;
//                 int ncol = dcol[i] + col;
//                 if(nrow >= 0 && ncol >= 0 && nrow < n && ncol < m){
//                     int newmove = ((nrow+ncol)%2 == 0) ? 2:1; 
//                     int newdis = max(dis,grid[nrow][ncol])+newmove; 
//                     if(newdis < distance[nrow][ncol]){
//                         distance[nrow][ncol] = newdis;
//                         pq.push({newdis,{nrow,ncol}});
//                     } 
//                 }
//             }
//         }
//         return distance[n-1][m-1];
//     }
// };
// int main() {
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int n,m; cin>>n>>m;
//         vector<vector<int>> grid;
//         for(int i=0; i<n; ++i){
//             vector<int> temp;
//             for(int j=0; j<m; ++j){
//                 int x; cin>>x;
//                 temp.push_back(x);
//             }
//             grid.push_back(temp);
//         }  
//         Solution obj;
//         cout<<obj.minTimeToReach(grid)<<"\n";
//     }
//     return 0;
// }








// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     int CheapestFLight(int n, vector<vector<int>>& flights, int src, int dst, int k)  {
//          vector<pair<int,int>> adj[n];
//             for(auto it : flights){
//                 adj[it[0]].push_back({it[1],it[2]});
//             }
//             queue<pair<int,pair<int,int>>> q;
//             q.push({0,{src,0}});
//             vector<int> dist(n,1e9);
//             dist[src]=0;
//             while(!q.empty()){
//                 auto it=q.front(); q.pop();
//                 int stop=it.first;
//                 int node=it.second.first;
//                 int cost=it.second.second;
//                 if(stop>k) continue;
//                 for(auto it: adj[node]){
//                     int adjnode=it.first;
//                     int weight=it.second;
//                     if(cost+weight<dist[adjnode] && stop<=k){
//                         dist[adjnode] =cost+weight;
//                         q.push({stop+1,{adjnode,dist[adjnode]}});
//                     }
//                 }
//             }
//             if(dist[dst] == 1e9) return -1;
//             return dist[dst];
//     }
// };
// int main() {
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int n; cin>>n;
//         int edge; cin>>edge;
//         vector<vector<int>> flights;
//         for(int i=0; i<edge; ++i){
//             vector<int> temp;
//             for(int j=0; j<3; ++j){
//                 int x; cin>>x;
//                 temp.push_back(x);
//             }
//             flights.push_back(temp);
//         }
//         int src,dst,k;
//         cin>>src>>dst>>k;
//         Solution obj;
//         cout<<obj.CheapestFLight(n,flights,src,dst,k)<<"\n";
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     int countPaths(int n, vector<vector<int>>& roads) {
//         vector<pair<long,long>> adj[n];
//         for(auto it : roads){
//             adj[it[0]].push_back({it[1],it[2]});
//             adj[it[1]].push_back({it[0],it[2]});
//         }
//         priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,
//         greater<pair<long long ,long long>>> pq;
//         pq.push({0,0});
//         vector<long long> dist(n,LONG_MAX) ,way(n,0);
//         dist[0]=0;
//         way[0]=1;
//         int mod=(int)(1e9+7);
//         while(!pq.empty()){
//             auto it=pq.top(); pq.pop();
//             long long dis=it.first;
//             long long node=it.second;
//             for(auto it: adj[node]){
//                 long long adjnode=it.first;
//                 long long weight=it.second;
//                 if(dis+weight<dist[adjnode]){
//                     dist[adjnode] =dis+weight;
//                     pq.push({dist[adjnode],adjnode});
//                     way[adjnode]=way[node];
//                 }
//                 else if(dis+weight==dist[adjnode]){
//                     way[adjnode]=(way[adjnode]+way[node])%mod;
//                 }
//             }
//         }
//         return way[n-1]%mod;
//     }
// };
// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int n, m;
//         cin >> n >> m;
//         int u, v;
//         vector<vector<int>> adj;
//         for (int i = 0; i < m; ++i) {
//             vector<int> temp;
//             for (int j = 0; j < 3; ++j) {
//                 int x;
//                 cin >> x;
//                 temp.push_back(x);
//             }
//             adj.push_back(temp);
//         }
//         Solution obj;
//         cout << obj.countPaths(n, adj) << "\n";
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     int minimumMultiplications(vector<int>& arr, int start, int end) {
//         if(start == end) return 0;
//         queue<pair<int,int>> q;
//         q.push({start,0});
//         vector<int> dist(100000,1e9);
//         dist[start]=0;
//         while(!q.empty()){
//             auto it=q.front(); q.pop();
//             int node=it.first;
//             int dis=it.second;
//             for(auto i:arr){
//                 int nums=(i*node)%100000;
//                 if(dis+1<dist[nums]){
//                     dist[nums]=dis+1;
//                     if(nums == end) return dis+1;
//                     q.push({nums,dis+1});
//                 }
//             }
//         }
//         return -1;
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         int start, end;
//         cin >> start >> end;
//         Solution obj;
//         cout << obj.minimumMultiplications(arr, start, end) << endl;
//     }
// }




// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
//         vector<int> dist(V,1e8);
//         dist[S]=0;
//         for(int i=0;i<V-1;i++){
//             for(auto it : edges){
//                 int u=it[0];
//                 int v=it[1];
//                 int weight=it[2];
//                 if(dist[u]!=1e8 && dist[u]+weight<dist[v]){
//                     dist[v]=dist[u]+weight;
//                 }
//             }
//         }
//         for(auto it : edges){
//                 int u=it[0];
//                 int v=it[1];
//                 int weight=it[2];
//                 if(dist[u]!=1e9 && dist[u]+weight<dist[v]){
//                     return {-1};
//                 }
//             }
//             return dist;
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int N, m;
//         cin >> N >> m;
//         vector<vector<int>> edges;
//         for (int i = 0; i < m; ++i) {
//             vector<int> temp;
//             for (int j = 0; j < 3; ++j) {
//                 int x;
//                 cin >> x;
//                 temp.push_back(x);
//             }
//             edges.push_back(temp);
//         }
//         int src;
//         cin >> src;
//         Solution obj;
//         vector<int> res = obj.bellman_ford(N, edges, src);
//         for (auto x : res) {
//             cout << x << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
// 	void shortest_distance(vector<vector<int>>&matrix){
// 	   int n =matrix.size();
// 	   for(int i=0;i<n;i++){
// 	       for(int j=0;j<n;j++){
// 	           if(matrix[i][j] == -1){
// 	               matrix[i][j]=1e9;
// 	           }
// 	           if( i == j) {
// 	               matrix[i][j]=0;
// 	           }
// 	       }
// 	   }
// 	   for(int k=0;k<n;k++){
// 	       for(int i=0;i<n;i++){
// 	           for(int j=0;j<n;j++){
// 	               matrix[i][j]=min(matrix[i][j],(matrix[i][k]+matrix[k][j]));
// 	           }
// 	       }
// 	   }
// 	   for(int i=0;i<n;i++){
// 	       for(int j=0;j<n;j++){
// 	           if(matrix[i][j] == 1e9) {
// 	               matrix[i][j]=-1;
// 	           }
// 	       }
// 	   }
// 	}
// };
// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		int n;
// 		cin >> n;
// 		vector<vector<int>>matrix(n, vector<int>(n, -1));
// 		for(int i = 0; i < n; i++){
// 			for(int j = 0; j < n; j++){
// 				cin >> matrix[i][j];
// 			}
// 		}
// 		Solution obj;
// 		obj.shortest_distance(matrix);
// 		for(int i = 0; i < n; i++){
// 			for(int j = 0; j < n; j++){
// 				cout << matrix[i][j] << " ";
// 			}
// 			cout << "\n";
// 		}
// 	}
// 	return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     int findCity(int n, int m, vector<vector<int>>& edges, int distanceThreshold) {
//         vector<vector<int>> dist(n,vector<int> (n,1e9));
//         for(auto it: edges){
//             dist[it[0]][it[1]]=it[2];
//             dist[it[1]][it[0]]=it[2];
//         }
//         for(int i=0;i<n;i++) {dist[i][i] == 0;}
//         for(int k=0;k<n;k++){
//             for(int i=0;i<n;i++){
//                 for(int j=0;j<n;j++){
//                     if(dist[i][k] == 1e9 || dist[k][j] == 1e9) continue;
//                     dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
//                 }
//             }
//         }
//         int countcity=n;
//         int cityno=-1;
//         for(int i=0;i<n;i++){
//             int count=0;
//             for(int j=0;j<n;j++){
//                 if(dist[i][j] <= distanceThreshold) {count++;}
//             }
//             if(count<=countcity){
//                countcity=count;
//                cityno=i;
//             }
//         }
//         return cityno;
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         vector<vector<int>> adj;
//         for (int i = 0; i < m; ++i) {
//             vector<int> temp;
//             for (int j = 0; j < 3; ++j) {
//                 int x;
//                 cin >> x;
//                 temp.push_back(x);
//             }
//             adj.push_back(temp);
//         }
//         int dist;
//         cin >> dist;
//         Solution obj;
//         cout << obj.findCity(n, m, adj, dist) << "\n";
//     }
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
//         int sum=0;
//         pq.push({0,0});
//         while(!pq.empty()){
//             auto it=pq.top(); pq.pop();
//             int node=it.second;
//             int weight=it.first;
//             if(vis[node] ==1) continue;
//             vis[node]=1;
//             sum+=weight;
//             for(auto it : adj[node]){
//                 int v=it[0];
//                 int weig=it[1];
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

// #include<bits/stdc++.h>
// using namespace std;
// class Solution
// {
// 	public:
//     int spanningTree(int V, vector<vector<int>> adj[])
//     {
//      vector<int> vis(V,0);
//      priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
//      pq.push({0,0});
//      int sum = 0;
//      while(!pq.empty()){
//         auto it  = pq.top(); pq.pop();
//         int node = it.second;
//         int distance = it.first;
//          if(vis[node] == 1) continue;
//          vis[node] = 1;
//          sum +=distance;
//          for(auto it :  adj[node]){
//             int v = it[0];
//             int w = it[1];
//             pq.push({w,v});
//          }
//      }
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








// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     int numberOfEnclaves(vector<vector<int>> &grid) {       
//         int n = grid.size();
//         int m = grid[0].size();
//         queue<pair<int,int>> q;
//         vector<vector<int>> vis(n,vector<int> (m,0));
        
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(i == 0 || i == n-1 || j == 0 || j == m-1){
//                     if(grid[i][j] == 1){
//                         q.push({i,j});
//                         vis[i][j] = 1;
//                     }
//                 }
//             }
//         }
//         int delrow[] = {0,+1,0,-1};
//         int delcol[] = {+1,0,-1,0};
        
//         while(!q.empty()){
//             auto it = q.front(); q.pop();
//             int row = it.first;
//             int col = it.second;          
//             for(int i=0;i<4;i++){
//                 int nrow = row + delrow[i];
//                 int ncol = col + delcol[i];
//                 if(nrow >= 0 && ncol >= 0 && nrow<n && ncol<m &&
//                 vis[nrow][ncol] == 0 && grid[nrow][ncol] ==1 ){
//                     q.push({nrow,ncol});
//                     vis[nrow][ncol] = 1;
//                 }
//             }
//         }
//         int count=0;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(grid[i][j] == 1 && vis[i][j] == 0){
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         vector<vector<int>> grid(n, vector<int>(m));
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 cin >> grid[i][j];
//             }
//         }
//         Solution obj;
//         cout << obj.numberOfEnclaves(grid) << endl;
//     }
// }








// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
//   private:
//     void dfscheck(int node,vector<int>&vis,vector<int>&temp,vector<vector<int>>& adj){
//         vis[node] = 1;
//         temp.push_back(node);
//         for(auto it : adj[node]){
//             if(!vis[it]){
//                 dfscheck(it,vis,temp,adj);
//             }
//         }
//     }
//   public:
//     int findNumberOfGoodComponent(int V, vector<vector<int>>& adj) {
//         vector<int> vis(V+1,0);
//         int count = 0;
//         for(int i=1;i<=V;i++){
//             if(!vis[i] ){

//                 vector<int> temp;
//                 dfscheck(i,vis,temp,adj);
//                 bool ans = true;
//                 for(int i=0;i<temp.size();i++){
//                     if(adj[temp[i]].size() < temp.size()-1){
//                         ans = false;
//                         break;
//                     }
//                 }
//                 if(ans == true) {
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int E, V;
//         cin >> E >> V;
//         vector<vector<int>> adj(V + 1, vector<int>());
//         for (int i = 0; i < E; i++) {
//             int u, v;

//             cin >> u >> v;

//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }
//         Solution obj;

//         int res = obj.findNumberOfGoodComponent(V, adj);
//         cout << res << "\n";
//     }
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// class Solution
// {
//     private: 
//     void dfscheck(int row,int col,int n,int m,vector<vector<int>> &vis,vector<vector<char>>& grid){
//         vis[row][col] = 1;
        
//         int delrow[] = {+1,0,-1,0};
//         int delcol[] = {0,+1,0,-1};
        
//         for(int i=0;i<4;i++){
//             int nrow = row + delrow[i];
//             int ncol = col + delcol[i];
//             if(nrow >= 0 && ncol >= 0 && nrow < n && ncol < m  &&
//             grid[nrow][ncol] == 'X' && vis[nrow][ncol] != 1){
//                 dfscheck(nrow,ncol,n,m,vis,grid);
//             }
//         }
//     }
//     public:
//     //Function to find the number of 'X' total shapes.
//     int xShape(vector<vector<char>>& grid) 
//     {
//         int n =grid.size();
//         int m = grid[0].size();
        
//         vector<vector<int>> vis(n,vector<int> (m,0));
        
//         int count = 0;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(grid[i][j] == 'X' && vis[i][j] != 1){
//                     dfscheck(i,j,n,m,vis,grid);
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };

// //{ Driver Code Starts.
// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		int n, m;
// 		cin >> n >> m;
// 		vector<vector<char>>grid(n, vector<char>(m, '#'));
// 		for(int i = 0; i < n; i++){
// 			for(int j = 0; j < m; j++){
// 				cin >> grid[i][j];
// 			}
// 		}
// 		Solution obj;
// 		int ans = obj.xShape(grid);
// 		cout << ans <<'\n';
// 	}
// 	return 0;
// }
// // } Driver Code Ends




// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
//   private: 
//     void dfscheck(int row,int col,int n, int m, vector<vector<int>>& vis,vector<vector<char>>& grid){
//         vis[row][col] = 1;
        
//         int delrow[] = {+1,0,-1,0,+1,-1,-1,+1};
//         int delcol[] = {0,+1,0,-1,+1,+1,-1,-1};
        
//         for(int i=0;i<8;i++){
//             int nrow = row + delrow[i];
//             int ncol = col + delcol[i];
            
//             if(nrow >= 0 && ncol >= 0 && nrow<n && ncol<m && 
//             vis[nrow][ncol] != 1 && grid[nrow][ncol] == '1'){
//                 dfscheck(nrow,ncol,n,m,vis,grid);
//             }
//         }
//     }
//   public:
//     int numIslands(vector<vector<char>>& grid) {
//         int n = grid.size();
//         int m = grid[0].size();
        
//         vector<vector<int>> vis(n,vector<int> (m,0));
        
//         int count = 0;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(grid[i][j] == '1' && vis[i][j] != 1){
//                     dfscheck(i,j,n,m,vis,grid);
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };

// //{ Driver Code Starts.
// int main() {
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int n, m;
//         cin >> n >> m;
//         vector<vector<char>> grid(n, vector<char>(m, '#'));
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 cin >> grid[i][j];
//             }
//         }
//         Solution obj;
//         int ans = obj.numIslands(grid);
//         cout << ans << '\n';
//     }
//     return 0;
// }
// // } Driver Code Ends



// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
//   private : 
//     void dfscheck(int &count,int so,int dest,vector<int> adj[]){
//         if(so == dest){
//             count++; return;
//         }
//         for(auto it : adj[so]){
//             dfscheck(count,it,dest,adj);
//         }
//     }
//   public:
//     // Function to count paths between two vertices in a directed graph.
//     int countPaths(int V, vector<int> adj[], int source, int destination) {
//         int count = 0;
//         dfscheck(count,source,destination,adj);
//         return count;
//     }
// };

// //{ Driver Code Starts.
// int main() {
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int V, E;
//         cin >> V >> E;
//         vector<int> adj[V];
//         for (int i = 0; i < E; i++) {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//             // adj[v].push_back(u);
//         }
//         int source, destination;
//         cin >> source >> destination;
//         Solution obj;
//         cout << obj.countPaths(V, adj, source, destination) << endl;
//     }
//     return 0;
// }
// // } Driver Code Ends







// #include<bits/stdc++.h>
// using namespace std;
// class Solution
// {
// 	public:
//     int spanningTree(int V, vector<vector<int>> adj[])
//     {
//         vector<int> vis(V,0);
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
//         int sum = 0;
//         pq.push({0,0});

//         while(!pq.empty()){
//             auto it = pq.top(); pq.pop();
//             int node = it.second;
//             int dist = it.first;
//             if(vis[node] == 1) continue;
//             vis[node] = 1;
//             sum += dist;

//             for(auto it : adj[node]){
//                 int pushnode = it[0];
//                 int distance = it[1];
//                 pq.push({distance,pushnode});
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








// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     private: 
//     void dfscheck1(int node , vector<int> &vis,stack<int> &s,vector<vector<int>> adj){
//         vis[node] = 1;
//         for(auto it : adj[node]){
//             if(!vis[it]){
//                 dfscheck1(it,vis,s,adj);
//             }
//         }
//         s.push(node);
//     }
//     private: 
//     void dfscheck2(int node, vector<int> &vis,vector<vector<int>> &adj){
//         vis[node] = 1;
//         for(auto it : adj[node]){
//             if(!vis[it]){
//                 dfscheck2(it,vis,adj);
//             }
//         }
//     }
// 	public:
//     int kosaraju(int V, vector<vector<int>>& adj){
//         vector<int> vis(V,0);
//         stack<int> s;
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 dfscheck1(i,vis,s,adj);
//             }
//         }

//         vector<vector<int>> trans(V);
//         for(int i=0;i<V;i++){
//             vis[i]  = 0;
//             for(auto it : adj[i]){
//                 trans[it].push_back(i);
//             }
//         }
//         int count = 0;
//         while(!s.empty()){
//             auto node = s.top(); s.pop();
//             if(!vis[node]){
//                 dfscheck2(node,vis,trans);
//                 count++;
//             } 
//         }
//         return count;
//     }
// };
// int main(){ 
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
//     	cout << obj.kosaraju(V, adj) << "\n";
//     }
//     return 0;
// }










// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   private: 
//     void dfscheck(int row,int col,int n,int m,vector<vector<int>> &vis,vector<vector<int>> &grid){
//         vis[row][col] = 1;

//         vector<int> delrow = {0,+1,0,-1};
//         vector<int> delcol = {+1,0,-1,0};

//         for(int i=0;i<4;i++){
//             int nrow = row + delrow[i];
//             int ncol = col + delcol[i];
//             if(nrow >= 0  && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 1 && !vis[nrow][ncol] ){
//                 dfscheck(nrow,ncol,n,m,vis,grid);
//             } 
//         }
//     }
//   public:
//     int numberOfEnclaves(vector<vector<int>> &grid) {
//        int n = grid.size();
//        int m = grid[0].size();
//        vector<vector<int>> vis(n,vector<int> (m,0));

//        for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if ((i == 0 || j == 0 || i == n - 1 || j == m - 1) && grid[i][j] == 1 && vis[i][j] == 0){
//                     dfscheck(i,j,n,m,vis,grid);
//                 }
//             }   
//         }
//         int count = 0;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(grid[i][j] == 1 && vis[i][j] == 0){
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         vector<vector<int>> grid(n, vector<int>(m));
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 cin >> grid[i][j];
//             }
//         }
//         Solution obj;
//         cout << obj.numberOfEnclaves(grid) << endl;
//     }
// }




// #include<bits/stdc++.h>
// using namespace std;
// class Solution
// {
//     private:
//     void dfscheck(vector<vector<int>> &graph , vector<vector<int>> &vis,int row, int col,
//     int & ans, int sum ,int n, int m){
        
//         if(row == n-1 && col == m-1){
//             ans = min(ans,sum);
//             return;
//         }
//         vector<int> delrow = {+1,0,-1,0};
//         vector<int> delcol = {0,+1,0,-1};
        
//         vis[row][col] = 1;
//         for(int i=0; i<4; i++){
//             int nrow = delrow[i] + row;
//             int ncol = delcol[i] + col;
            
//             if(nrow >= 0 && nrow < n && ncol < m && ncol >= 0 && vis[nrow][ncol] != 1){
//                 dfscheck(graph,vis,nrow,ncol,ans,sum + graph[nrow][ncol],n,m);
//             }
//         }
//         vis[row][col] = 0;
//     }
//     public:
//     int minimumCostPath(vector<vector<int>>& grid) 
//     {
        
//         // SOLVING USING DFS BUT TIME LIMIT (USE BFS AND DISKASTRA) 
//         // int n = grid.size(); int m = grid[0].size();
//         // int ans = INT_MAX;
//         // int sum = grid[0][0];
//         // vector<vector<int>> vis(n , vector<int> (m,0));
//         // dfscheck(grid,vis,0,0,ans,sum,n,m);
//         // return ans;
        
        
//         // SOLVING USING BFS (DISKATRA (MIN - HEAP))
//         int n = grid.size(); int m = grid[0].size();
//         vector<vector<int>> vis(n , vector<int> (m,0));  
//         vis[0][0] = 1;
//         vector<vector<int>> distance(n , vector<int> (m,INT_MAX));
//         distance[0][0] = grid[0][0];
//         priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
        
//         pq.push({grid[0][0],{0,0}});
        
//         while(!pq.empty()){
//             auto it = pq.top(); pq.pop();
//             int sum = it.first;
//             int row = it.second.first;
//             int col = it.second.second;
            
//             vector<int> delrow = {+1,0,-1,0};
//             vector<int> delcol = {0,+1,0,-1};
            
//             for(int i=0; i<4; i++){
//                 int nrow = delrow[i] + row;
//                 int ncol = delcol[i] + col;
//                 if(nrow < n && ncol < m && nrow >=0 && ncol >= 0 && vis[nrow][ncol] != 1){
//                     vis[nrow][ncol] = 1;
//                     int newsum  = sum + grid[nrow][ncol];
//                     if(distance[nrow][ncol] > newsum){
//                         distance[nrow][ncol] = newsum;
//                         pq.push({newsum,{nrow,ncol}});
//                     }
//                 }
//             }
//         }
//         return distance[n-1][m-1];
//     }
// };
// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		int n;
// 		cin >> n;
// 		vector<vector<int>>grid(n, vector<int>(n, -1));
// 		for(int i = 0; i < n; i++){
// 			for(int j = 0; j < n; j++){
// 				cin >> grid[i][j];
// 			}
// 		}
// 		Solution obj;
// 		int ans = obj.minimumCostPath(grid);
// 		cout << ans << "\n";
// 	}
// 	return 0;
// }







// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     int shotestPath(vector<vector<int>> grid, int n, int m, int k) {
//         vector<int> drow = {-1, 0, 1, 0};
//         vector<int> dcol = {0, 1, 0, -1};
//         vector<vector<vector<bool>>> visited(n, vector<vector<bool>>(m, vector<bool>(k + 1, false)));
        
//         queue<vector<int>> q;
//         q.push({0, k, 0, 0});
//         visited[0][0][k] = true;
        
//         while (!q.empty()) {
//             auto current = q.front();
//             q.pop();
//             int steps = current[0];
//             int remaining_k = current[1];
//             int row = current[2];
//             int col = current[3];
//             if (row == n - 1 && col == m - 1) {
//                 return steps;
//             }
            
//             for (int i = 0; i < 4; i++) {
//                 int nrow = row + drow[i];
//                 int ncol = col + dcol[i];
                
//                 if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m) {
//                     if (grid[nrow][ncol] == 0) {
//                         if (!visited[nrow][ncol][remaining_k]) {
//                             visited[nrow][ncol][remaining_k] = true;
//                             q.push({steps + 1, remaining_k, nrow, ncol});
//                         }
//                     } else if (remaining_k > 0) {
//                         if (!visited[nrow][ncol][remaining_k - 1]) {
//                             visited[nrow][ncol][remaining_k - 1] = true;
//                             q.push({steps + 1, remaining_k - 1, nrow, ncol});
//                         }
//                     }
//                 }
//             }
//         }
//         return -1;
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m, k, x;
        
//         cin>>n>>m>>k;
//         vector<vector<int>> mat;
    
//         for(int i=0; i<n; i++)
//         {
//             vector<int> row;
//             for(int j=0; j<m; j++)
//             {
//                 cin>>x;
//                 row.push_back(x);
//             }
//             mat.push_back(row);
//         }

//         Solution ob;
//         cout<<ob.shotestPath(mat,n,m,k);
//         cout<<"\n";
    
// cout << "~" << "\n";
// }
//     return 0;
// }
