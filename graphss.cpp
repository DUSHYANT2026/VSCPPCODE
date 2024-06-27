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
// int main(){
// disjoint ds(7);
// // ds.unionbyrank(1,2);
// // ds.unionbyrank(2,3);
// // ds.unionbyrank(4,5);
// // ds.unionbyrank(6,7);
// // cout<<"CHECK PANENT OF 5 AND 6 BEFORE UNION BY RANK:"<<endl;
// // if(ds.findultparent(5) == ds.findultparent(6))
// //     cout<<"BOTH HAVE SAME PARENT:"<<endl;
// // else
// //     cout<<"NOT HAVE SAME PARENT:"<<endl;
// // cout<<"CHECK PARENT OF 5 AND 6 AFTER UNION BY RANK: "<<endl;
// // ds.unionbyrank(5,6);
// // if(ds.findultparent(5) == ds.findultparent(6))
// //     cout<<"BOTH HAVE SAME PARENT:"<<endl;
// // else
// //     cout<<"NOT HAVE SAME PARENT:"<<endl;
// // ds.unionbyrank(3,7);

// ds.unionbysize(1,2);
// ds.unionbysize(2,3);
// ds.unionbysize(4,5);
// ds.unionbysize(6,7);
// cout<<"CHECK PANENT OF 5 AND 6 BEFORE UNION BY RANK:"<<endl;
// if(ds.findultparent(5) == ds.findultparent(6))
//     cout<<"BOTH HAVE SAME PARENT:"<<endl;
// else
//     cout<<"NOT HAVE SAME PARENT:"<<endl;
// cout<<"CHECK PARENT OF 5 AND 6 AFTER UNION BY RANK: "<<endl;
// ds.unionbysize(5,6);
// if(ds.findultparent(5) == ds.findultparent(6))
//     cout<<"BOTH HAVE SAME PARENT:"<<endl;
// else
//     cout<<"NOT HAVE SAME PARENT:"<<endl;
// ds.unionbysize(3,7);
// return 0;    
// }




#include<bits/stdc++.h>
using namespace std;
class disjoint{
    private: 
    vector<int> rank,parent,size;
    public:
    disjoint(int n){
        rank.resize(n+1 , 0);
        parent.resize(n+1);
        size.resize(n+1 , 1);
        for(int i=0;i<=n;i++){
            parent[i] = i;
        }
    }

    int findultparent(int node){
        if(node == parent[node]){
            return node;
        }
        return parent[node] = findultparent(parent[node]);
    }

    void unionbyrank(int u, int v){
        int ult_u = findultparent(u);
        int ult_v = findultparent(v);
        if(ult_u == ult_v){
            return ;
        }
        if(ult_u < ult_v){
            parent[ult_u] = ult_v;
        }
        else if(ult_v < ult_u){
            parent[ult_v] = ult_u;
        }
        else{
            parent[ult_v] = ult_u;
            rank[ult_u]++;
        }
    }

    void unionbysize(int u,int v){
        int ult_u = findultparent(u);
        int ult_v = findultparent(v);
        if(ult_u == ult_v) return;
        if(ult_u < ult_v){
            parent[ult_u] = ult_v;
            size[ult_v] += size[ult_u];
        }
        else{
            parent[ult_v] = ult_u;
            size[ult_u] += size[ult_v];
        }
    }
};

class Solution1
{
	public:
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<pair<int,pair<int,int>>> edges;
        for(int i=0;i<V;i++){
           for(auto it :  adj[i]){
               int adjnode = it[0];
               int weight = it[1];
               int node = i;
               edges.push_back({weight,{node,adjnode}});
            }
        }
        disjoint ds(V);
        sort(edges.begin(),edges.end());
        int sum = 0;
        for(auto it :  edges){
            int wt = it.first;
            int u = it.second.first;
            int v = it.second.second;

            if(ds.findultparent(u) != ds.findultparent(v)){
                sum += wt;
                ds.unionbyrank(u,v); 
            }
        }
        return sum;
    }
};

class Solution2 {
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        disjoint ds(V);
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(adj[i][j] == 1){
                    ds.unionbyrank(i,j);
                }
            }
        }
        int count = 0;
        for(int i=0;i<V;i++){
            if(ds.findultparent(i) == i){
                count++;
            }
        }
        return count;
    }
};

class Solution3 {
  public:
    int Solve(int n, vector<vector<int>>& edge) {
        disjoint ds(n);
        int extraedge=0;
        for(auto it : edge){
            int u = it[0];
            int v = it[1];
            
            if(ds.findultparent(u) == ds.findultparent(v)) extraedge++;
            else ds.unionbyrank(u,v);
        }
        int numofprovince=0;
        for(int i=0;i<n;i++){
            if(ds.findultparent(i) ==i) numofprovince++;
        }
        int ans=numofprovince-1;
        if(extraedge >= ans) return ans;
        return -1;
    }
};

class Solution4 {
  public:
    int maxRemove(vector<vector<int>>& stones, int n) {
        int maxrow=0;
        int maxcol=0;
        for(auto it : stones){
            maxrow = max(maxrow,it[0]);
            maxcol = max(maxcol,it[1]);
        }
        disjoint ds(maxrow + maxcol + 1);
        unordered_map<int, int> stoneNodes;
        for(auto it : stones){
            int noderow = it[0];
            int nodecol = it[1] + maxrow + 1;
            ds.unionbyrank(noderow,nodecol);
            stoneNodes[noderow]=1;
            stoneNodes[nodecol]=1;
        }
        int count =0 ;
        for(auto it : stoneNodes){
            if(ds.findultparent(it.first) == it.first) count++;
        }
        return n-count;
    }
};

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

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int V,x;
//         cin>>V;
//         vector<vector<int>> adj;
//         for(int i=0; i<V; i++)
//         {
//             vector<int> temp;
//             for(int j=0; j<V; j++)
//             {
//                 cin>>x;
//                 temp.push_back(x);
//             }
//             adj.push_back(temp);
//         }
//         Solution2 ob;
//         cout << ob.numProvinces(adj,V) << endl;
//     }
//     return 0;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         vector<vector<int>> adj;
//         for (int i = 0; i < m; ++i) {
//             vector<int> temp;
//             for (int j = 0; j < 2; ++j) {
//                 int x;
//                 cin >> x;
//                 temp.push_back(x);
//             }
//             adj.push_back(temp);
//         }
//         Solution3 Obj;
//         cout << Obj.Solve(n, adj) << "\n";
//     }
//     return 0;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<vector<int>> adj;
//         for (int i = 0; i < n; ++i) {
//             vector<int> temp;
//             for (int i = 0; i < 2; ++i) {
//                 int x;
//                 cin >> x;
//                 temp.push_back(x);
//             }
//             adj.push_back(temp);
//         }
//         Solution4 obj;
//         cout << obj.maxRemove(adj, n) << "\n";
//     }
// }
