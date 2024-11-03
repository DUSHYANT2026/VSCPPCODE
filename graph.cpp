// #include<iostream>
// #include <vector>
// #include <list>
// #include <iterator>
// using namespace std;
// class Edge;
// class Vertex;
// class Edge {
//   public:
//     int DestinationVertexID;
//   int weight;
//   Edge() {}
//   Edge(int destVID, int w) {
//     DestinationVertexID = destVID;
//     weight = w;
//   }
//   void setEdgeValues(int destVID, int w) {
//     DestinationVertexID = destVID;
//     weight = w;
//   }
//   void setWeight(int w) {
//     weight = w;
//   }
//   int getDestinationVertexID() {
//     return DestinationVertexID;
//   }
//   int getWeight() {
//     return weight;
//   }
// };
// class Vertex {
//   public:
//     int state_id;
//   string state_name;
//   list < Edge > edgeList;
//   Vertex() {
//     state_id = 0;
//     state_name = "";
//   }
//   Vertex(int id, string sname) {
//     state_id = id;
//     state_name = sname;
//   }
//   int getStateID() {
//     return state_id;
//   }
//   string getStateName() {
//     return state_name;
//   }
//   void setID(int id) {
//     state_id = id;
//   }
//   void setStateName(string sname) {
//     state_name = sname;
//   }
//   list < Edge > getEdgeList() {
//     return edgeList;
//   }
//   //  void addEdgeToEdgelist(int toVertexID, int weight)
//   //  {
//   //	  	Edge e(toVertexID,weight);
//   //		edgeList.push_back(e); 
//   //		cout<<"Edge between "<<state_id<<" and "<<toVertexID<<" added Successfully"<<endl; 	
//   //  }
//   void printEdgeList() {
//     cout << "[";
//     for (auto it = edgeList.begin(); it != edgeList.end(); it++) {
//       cout << it -> getDestinationVertexID() << "(" << it -> getWeight() << ") --> ";
//     }
//     cout << "]";
//     cout << endl;
//   }
//   void updateVertexName(string sname) {
//     state_name = sname;
//     cout << "Vertex Name Updated Successfully";
//   }
// };
// class Graph {
//   vector < Vertex > vertices;
//   public:
//     bool checkIfVertexExistByID(int vid) {
//       bool flag = false;
//       for (int i = 0; i < vertices.size(); i++) {
//         if (vertices.at(i).getStateID() == vid) {
//           return true;
//         }
//       }
//       return flag;
//     }
//   void addVertex(Vertex newVertex) {
//     bool check = checkIfVertexExistByID(newVertex.getStateID());
//     if (check == true) {
//       cout << "Vertex with this ID already exist" << endl;
//     } else {
//       vertices.push_back(newVertex);
//       cout << "New Vertex Added Successfully" << endl;
//     }
//   }
//   Vertex getVertexByID(int vid) {
//     Vertex temp;
//     for (int i = 0; i < vertices.size(); i++) {
//       temp = vertices.at(i);
//       if (temp.getStateID() == vid) {
//         return temp;
//       }
//     }
//     return temp;
//   }
//   bool checkIfEdgeExistByID(int fromVertex, int toVertex) {
//     Vertex v = getVertexByID(fromVertex);
//     list < Edge > e;
//     e = v.getEdgeList();
//     bool flag = false;
//     for (auto it = e.begin(); it != e.end(); it++) {
//       if (it -> getDestinationVertexID() == toVertex) {
//         flag = true;
//         return flag;
//         break;
//       }
//     }
//     return flag;
//   }
//   void updateVertex(int oldVID, string vname) {
//     bool check = checkIfVertexExistByID(oldVID);
//     if (check == true) {
//       for (int i = 0; i < vertices.size(); i++) {
//         if (vertices.at(i).getStateID() == oldVID) {
//           vertices.at(i).setStateName(vname);
//           break;
//         }
//       }
//       cout << "Vertex(State) Updated Successfully " << endl;
//     }
//   }
//   void addEdgeByID(int fromVertex, int toVertex, int weight) {
//     bool check1 = checkIfVertexExistByID(fromVertex);
//     bool check2 = checkIfVertexExistByID(toVertex);
//     bool check3 = checkIfEdgeExistByID(fromVertex, toVertex);
//     if ((check1 && check2 == true)) {
//       if (check3 == true) {
//         cout << "Edge between " << getVertexByID(fromVertex).getStateName() << "(" << fromVertex << ") and " << getVertexByID(toVertex).getStateName() << "(" << toVertex << ") Already Exist" << endl;
//       } else {
//         for (int i = 0; i < vertices.size(); i++) {
//           if (vertices.at(i).getStateID() == fromVertex) {
//             Edge e(toVertex, weight);
//             //edgeList.push_back(e); 
//             //vertices.at(i).addEdgeToEdgelist(toVertex,weight);
//             vertices.at(i).edgeList.push_back(e);
//           } else if (vertices.at(i).getStateID() == toVertex) {
//             Edge e(toVertex, weight);
//             //edgeList.push_back(e); 
//             //vertices.at(i).addEdgeToEdgelist(fromVertex,weight);
//             vertices.at(i).edgeList.push_back(e);
//           }
//         }
//         cout << "Edge between " << fromVertex << " and " << toVertex << " added Successfully" << endl;
//       }
//     } else {
//       cout << "Invalid Vertex ID entered.";
//     }
//   }
//   void updateEdgeByID(int fromVertex, int toVertex, int newWeight) {
//     bool check = checkIfEdgeExistByID(fromVertex, toVertex);
//     if (check == true) {
//       for (int i = 0; i < vertices.size(); i++) {
//         if (vertices.at(i).getStateID() == fromVertex) {
//           for (auto it = vertices.at(i).edgeList.begin(); it != vertices.at(i).edgeList.end(); it++) {
//             if (it -> getDestinationVertexID() == toVertex) {
//               it -> setWeight(newWeight);
//               break;
//             }
//           }
//         } else if (vertices.at(i).getStateID() == toVertex) {
//           for (auto it = vertices.at(i).edgeList.begin(); it != vertices.at(i).edgeList.end(); it++) {
//             if (it -> getDestinationVertexID() == fromVertex) {
//               it -> setWeight(newWeight);
//               break;
//             }
//           }
//         }
//       }
//       cout << "Edge Weight Updated Successfully " << endl;
//     } else {
//       cout << "Edge between " << getVertexByID(fromVertex).getStateName() << "(" << fromVertex << ") and " << getVertexByID(toVertex).getStateName() << "(" << toVertex << ") DOES NOT Exist" << endl;
//     }
//   }
//   void deleteEdgeByID(int fromVertex, int toVertex) {
//     bool check = checkIfEdgeExistByID(fromVertex, toVertex);
//     if (check == true) {
//       for (int i = 0; i < vertices.size(); i++) {
//         if (vertices.at(i).getStateID() == fromVertex) {
//           for (auto it = vertices.at(i).edgeList.begin(); it != vertices.at(i).edgeList.end(); it++) {
//             if (it -> getDestinationVertexID() == toVertex) {
//               vertices.at(i).edgeList.erase(it);
//               //cout<<"First erase"<<endl;
//               break;
//             }
//           }
//         }
//         if (vertices.at(i).getStateID() == toVertex) {
//           for (auto it = vertices.at(i).edgeList.begin(); it != vertices.at(i).edgeList.end(); it++) {
//             if (it -> getDestinationVertexID() == fromVertex) {
//               vertices.at(i).edgeList.erase(it);
//               //cout<<"second erase"<<endl;
//               break;
//             }
//           }
//         }
//       }
//       cout << "Edge Between " << fromVertex << " and " << toVertex << " Deleted Successfully." << endl;
//     }
//   }
//   void deleteVertexByID(int vid) {
//     int vIndex = 0;
//     for (int i = 0; i < vertices.size(); i++) {
//       if (vertices.at(i).getStateID() == vid) {
//         vIndex = i;
//       }
//     }
//     for (int i = 0; i < vertices.size(); i++) {
//       for (auto it = vertices.at(i).edgeList.begin(); it != vertices.at(i).edgeList.end(); it++) {
//         if (it -> getDestinationVertexID() == vid) {
//           vertices.at(i).edgeList.erase(it);
//           break;
//         }
//       }
//     }
//     vertices.erase(vertices.begin() + vIndex);
//     cout << "Vertex Deleted Successfully" << endl;
//   }
//   void getAllNeigborsByID(int vid) {
//     cout << getVertexByID(vid).getStateName() << " (" << getVertexByID(vid).getStateID() << ") --> ";
//     for (int i = 0; i < vertices.size(); i++) {
//       if (vertices.at(i).getStateID() == vid) {
//         cout << "[";
//         for (auto it = vertices.at(i).edgeList.begin(); it != vertices.at(i).edgeList.end(); it++) {
//           cout << it -> getDestinationVertexID() << "(" << it -> getWeight() << ") --> ";
//         }
//         cout << "]";
//       }
//     }
//   }
//   void printGraph() {
//     for (int i = 0; i < vertices.size(); i++) {
//       Vertex temp;
//       temp = vertices.at(i);
//       cout << temp.getStateName() << " (" << temp.getStateID() << ") --> ";
//       temp.printEdgeList();
//     }
//   }
// };
// int main() {
//   Graph g;
//   string sname;
//   int id1, id2, w;
//   int option;
//   bool check;
//   do {
//     cout << "What operation do you want to perform? " <<
//       " Select Option number. Enter 0 to exit." << endl;
//     cout << "1. Add Vertex" << endl;
//     cout << "2. Update Vertex" << endl;
//     cout << "3. Delete Vertex" << endl;
//     cout << "4. Add Edge" << endl;
//     cout << "5. Update Edge" << endl;
//     cout << "6. Delete Edge" << endl;
//     cout << "7. Check if 2 Vertices are Neigbors" << endl;
//     cout << "8. Print All Neigbors of a Vertex" << endl;
//     cout << "9. Print Graph" << endl;
//     cout << "10. Clear Screen" << endl;
//     cout << "0. Exit Program" << endl;
//     cin >> option;
//     Vertex v1;
//     switch (option) {
//     case 0:
//       break;
//     case 1:
//       cout << "Add Vertex Operation -" << endl;
//       cout << "Enter State ID :";
//       cin >> id1;
//       cout << "Enter State Name :";
//       cin >> sname;
//       v1.setID(id1);
//       v1.setStateName(sname);
//       g.addVertex(v1);
//       break;
//     case 2:
//       cout << "Update Vertex Operation -" << endl;
//       cout << "Enter State ID of Vertex(State) to update :";
//       cin >> id1;
//       cout << "Enter State Name :";
//       cin >> sname;
//       g.updateVertex(id1, sname);
//       break;
//     case 3:
//       cout << "Delete Vertex Operation -" << endl;
//       cout << "Enter ID of Vertex(State) to Delete : ";
//       cin >> id1;
//       g.deleteVertexByID(id1);
//       break;
//     case 4:
//       cout << "Add Edge Operation -" << endl;
//       cout << "Enter ID of Source Vertex(State): ";
//       cin >> id1;
//       cout << "Enter ID of Destination Vertex(State): ";
//       cin >> id2;
//       cout << "Enter Weight of Edge: ";
//       cin >> w;
//       g.addEdgeByID(id1, id2, w);
//       break;
//     case 5:
//       cout << "Update Edge Operation -" << endl;
//       cout << "Enter ID of Source Vertex(State): ";
//       cin >> id1;
//       cout << "Enter ID of Destination Vertex(State): ";
//       cin >> id2;
//       cout << "Enter UPDATED Weight of Edge: ";
//       cin >> w;
//       g.updateEdgeByID(id1, id2, w);
//       break;
//     case 6:
//       cout << "Delete Edge Operation -" << endl;
//       cout << "Enter ID of Source Vertex(State): ";
//       cin >> id1;
//       cout << "Enter ID of Destination Vertex(State): ";
//       cin >> id2;
//       g.deleteEdgeByID(id1, id2);
//       break;
//     case 7:
//       cout << "Check if 2 Vertices are Neigbors -" << endl;
//       cout << "Enter ID of Source Vertex(State): ";
//       cin >> id1;
//       cout << "Enter ID of Destination Vertex(State): ";
//       cin >> id2;
//       check = g.checkIfEdgeExistByID(id1, id2);
//       if (check == true) {
//         cout << "Vertices are Neigbors (Edge exist)";
//       } else {
//         cout << "Vertices are NOT Neigbors (Edge does NOT exist)"; }
//       break;
//     case 8:
//       cout << "Print All Neigbors of a Vertex -" << endl;
//       cout << "Enter ID of Vertex(State) to fetch all Neigbors : ";
//       cin >> id1;
//       g.getAllNeigborsByID(id1);
//       break;
//     case 9:
//       cout << "Print Graph Operation -" << endl;
//       g.printGraph();
//       break;
//     default:
//       cout << "Enter Proper Option number " << endl;}
//     cout << endl;
//   } while (option != 0);
//   return 0; 
//   }



// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n,m;
// cout<<"ENTER THE NUMBER OF NODES IN THE GRAPH:"<<endl;
// cin>>n;
// cout<<"ENTER THE NUMBER OF EDGES BETWEEN THE NODES:"<<endl;
// cin>>m;
// cout<<"GRPHA USING ADJACENCY MATRIX:"<<endl;
// cout<<"ENTER THE EDGE BEWTEEN THE NODES: ACCORDING THE NUMBER OF EDGES:"<<endl;
// cout<<"UNDIRECTED GRAPH:"<<endl;
// int a[n+1][n+1];
// for(int i=0;i<m;i++){
// int v,u;
// cin>>v>>u;
// a[v][u]=1;
// a[u][v]=1;}
// cout<<endl;
// cout<<"DIRECTED GRAPH: WITH WEIGHTED:"<<endl;
// int weight;
// cin>>weight;
// int a[n+1][n+1];
// for(int i=0;i<m;i++){
// int v,u;
// cin>>v>>u;
// a[v][u]=weight;}
// return 0;}



// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n,m;
// cout<<"ENTER THE NUMBER OF NODES IN THE GRAPH:"<<endl;
// cin>>n;
// cout<<"ENTER THE NUMBER OF EDGES BETWEEN THE NODES:"<<endl;
// cin>>m;
// cout<<"GRAPH USING ADJACENCY LIST"<<endl;
// cout<<"UNDIRECTED GRAPH: USING LIST:"<<endl;
// vector<int> adjlist[n+1];
// for(int i=0;i<m;i++){
// int v,u;
// cin>>v>>u;
// adjlist[v].push_back(u);
// adjlist[u].push_back(v);}
// cout<<"FOR WEIGHTED GRAPH :"<<endl;
// vector<pair<int,int>> adj[n+1];
// return 0;}



// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n, m;
//     cout << "ENTER THE NUMBER OF NODES IN THE GRAPH:" << endl;
//     cin >> n;
//     cout << "ENTER THE NUMBER OF EDGES BETWEEN THE NODES:" << endl;
//     cin >> m;
//     cout << "GRAPH USING ADJACENCY MATRIX:" << endl;
//     cout << "ENTER THE EDGE BETWEEN THE NODES (0-based indexing):" << endl;
//     cout << "UNDIRECTED GRAPH:" << endl;
//     vector<vector<int>> adjMatrix(n, vector<int>(n, 0));
//     for (int i = 0; i < m; i++) {
//         int v, u;
//         cin >> v >> u;
//         adjMatrix[v][u] = 1;
//         adjMatrix[u][v] = 1;
//     }
//     cout << "ENTER THE EDGE BETWEEN THE NODES (1st-based indexing):" << endl;
//     cout << "UNDIRECTED GRAPH:" << endl;
//     vector<vector<int>> adjMatrix(n+1, vector<int>(n+1, 0));
//     for (int i = 0; i < m; i++) {
//         int v, u;
//         cin >> v >> u;
//         adjMatrix[v][u] = 1;
//         adjMatrix[u][v] = 1;
//     }
//     cout << endl;
//     cout << "DIRECTED GRAPH WITH WEIGHTED EDGES:" << endl;
//     vector<vector<int>> weightedAdjMatrix(n, vector<int>(n, 0));
//     for (int i = 0; i < m; i++) {
//         int v, u, weight;
//         cin >> v >> u >> weight;
//         weightedAdjMatrix[v][u] = weight;
//     }
//     return 0;
//   }



// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     vector<int> bfsOfGraph(int v, vector<int> adj[]) {
//         vector<int> ans , vis(v,0);
//         vis[0] = 1;
//         queue<int> q;
//         q.push(0);
//         while(!q.empty()){
//             auto node = q.front(); q.pop();
//             ans.push_back(node);
//             for(auto it : adj[node]){
//                 if(!vis[it]){
//                     vis[it] = 1;
//                     q.push(it);
//                 }
//             }
//         }
//         return ans;
//     } 
// };
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
//         }
//         Solution obj;
//         vector<int> ans = obj.bfsOfGraph(V, adj);
//         for (int i = 0; i < ans.size(); i++) {
//             cout << ans[i] << " ";  
//         }
//         cout << endl; 
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   private :
//     void dfscheck(int node,vector<int> &vis,vector<int> &ans,vector<int> adj[]){
//         vis[node] = 1;
//         ans.push_back(node);
//         for(auto it : adj[node]){
//             if(!vis[it]){
//                 dfscheck(it,vis,ans,adj);
//             }
//         }
//     }
//   public:
//     vector<int> dfsOfGraph(int V, vector<int> adj[]) {
//         vector<int> vis(V,0);
//         vector<int> ans;
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 dfscheck(i,vis,ans,adj);
//             }
//         }
//         return ans;
//     }
// };
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
//             adj[v].push_back(u);
//         }
//         Solution obj;
//         vector<int> ans = obj.dfsOfGraph(V, adj);
//         for (int i = 0; i < ans.size(); i++) {
//             cout << ans[i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   private: 
//     void dfscheck(int node,vector<int> &vis,vector<int> ans[]){
//         vis[node] = 1;
//         for(auto  it : ans[node]){
//             if(!vis[it]){
//                 dfscheck(it,vis,ans);
//             }
//         }
//     }
//   public:
//     int numProvinces(vector<vector<int>> adj, int V) {
//         vector<int> ans[V];
//         for(int i=0;i<V;i++){
//             for(int j=0;j<V;j++){
//                 if(adj[i][j] == 1 && i!=j){
//                     ans[i].push_back(j);
//                     ans[j].push_back(i);
//                 }
//             }
//         }
//         int count =0 ;
//         vector<int> vis(V,0);
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 dfscheck(i,vis,ans);
//                 count++;
//             }
//         }
//         return count;
//     }
// };
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
//         Solution ob;
//         cout << ob.numProvinces(adj,V) << endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// class Solution 
// {
//     public:
//     int orangesRotting(vector<vector<int>>& grid) {
//         int n = grid.size();
//         int m = grid[0].size();

//         queue<pair<pair<int,int>,int>> q;
//         int drow[]={-1,0,+1,0};
//         int dcol[]={0,+1,0,-1};
        
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(grid[i][j]==2){
//                     q.push({{i,j},0});
//                 }
//             }
//         }
//         int time = 0;
//         while(!q.empty()){
//             int row = q.front().first.first;
//             int col = q.front().first.second;
//             int tim = q.front().second;
//             q.pop();
//             time = max(time, tim);
            
//             for(int i=0; i<4; i++){
//                 int nrow = row + drow[i];
//                 int ncol = col + dcol[i];
//                 if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 1){
//                     grid[nrow][ncol] = 2;
//                     q.push({{nrow, ncol}, tim+1});
//                 }
//             }
//         }
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(grid[i][j] == 1){
//                     return -1;
//                 }
//             }
//         }
//         return time;
//     }
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
// 				cin >> grid[i][j];}}
// 		Solution obj;
// 		int ans = obj.orangesRotting(grid);
// 		cout << ans << "\n";
// 	}	return 0;}



// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// private: 
// void dfs( int row,int col, vector<vector<int>>& image , vector<vector<int>>& ans,int newcolor,
//  int initialcolor,int delrow[], int delcol[]){
//     int n=image.size();
//     int m=image[0].size();
//     ans[row][col]=newcolor;

//     for(int i=0;i<4;i++){
//         int nrow= row+delrow[i];
//         int ncol= col+delcol[i];

//         if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && 
//         image[nrow][ncol]== initialcolor && ans[nrow][ncol] !=newcolor){
//          dfs(nrow,ncol,image,ans,newcolor,initialcolor,delrow,delcol);   
//         }
//     }
// }
// public:
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
//         int initialcolor = image[sr][sc];
//         vector<vector<int>> ans= image;
//         int delrow[]={+1,0,-1,0};
//         int delcol[]={0,+1,0,-1};
//         dfs(sr,sc,image,ans,newcolor,initialcolor,delrow,delcol);
//         return ans;
//     }
// };
// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		int n, m;
// 		cin >> n >> m;
// 		vector<vector<int>>image(n, vector<int>(m,0));
// 		for(int i = 0; i < n; i++){
// 			for(int j = 0; j < m; j++)
// 				cin >> image[i][j];
// 		}
// 		int sr, sc, newColor;
// 		cin >> sr >> sc >> newColor;
// 		Solution obj;
// 		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
// 		for(auto i: ans){
// 			for(auto j: i)
// 				cout << j << " ";
// 			cout << "\n";
//         }
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
// private:
// bool cycledetectusingbfs(int i,int vis[],vector<int> adj[]){
//     vis[i]=1;
//     queue<pair<int,int>> q;
//     q.push({i,-1});
//     while(!q.empty()){
//         int node=q.front().first;
//         int parent=q.front().second;
//         q.pop();
//         for(auto it:adj[node]){
//             if(vis[it]!=1){
//                 vis[it]=1;
//                 q.push({it,node});
//             }
//             else if(it != parent) return true;
//         }
//     }
//     return false;
// }
//   public:
//     bool isCycleundiractedgraph(int V, vector<int> adj[]) {
//        int vis[V]={0};
//        for(int i=0;i<V;i++){
//            if(!vis[i]){
//                if(cycledetectusingbfs(i,vis,adj)==true)
//                return true;
//            }
//        }
//        return false;
//     }
// };
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
//             adj[v].push_back(u);
//         }
//         Solution obj;
//         bool ans = obj.isCycleundiractedgraph(V, adj);
//         if (ans)
//             cout << "1\n";
//         else
//             cout << "0\n";
//     }
//     return 0;
// }
  



// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
// private:
// bool cycledetectusingdfs(int node,int parent,vector<int> adj[],int vis[]){
//     vis[node]=1;
//     for(auto it:adj[node]){
//         if(vis[it] == 0){
//             if(cycledetectusingdfs(it,node,adj,vis) == true)
//             return true;
//             else if(it != parent)
//             return true;
//         }
//     }
//     return false;
// }
// public:
//     bool isCycleundiractedgraph(int V, vector<int> adj[]) {
//        int vis[V]={0};
//        for(int i=0;i<V;i++){
//         if(!vis[i]){
//             if(cycledetectusingdfs(i,-1,adj,vis) == true)
//             return true;
//          }
//        }
//        return false;
//     }
// };
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
//             adj[v].push_back(u);
//         }
//         Solution obj;
//         bool ans = obj.isCycleundiractedgraph(V, adj);
//         if (ans)
//             cout << "1\n";
//         else
//             cout << "0\n";
//     }
//     return 0;}




// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     bool dfs(int node,int vis[],int pathvis[], vector<int> adj[]){
//         vis[node] =1;
//         pathvis[node] =1;
//         for(auto it: adj[node]){
//             if(!vis[it]){
//                 if(dfs(it,vis,pathvis,adj) == true)
//                 return true;
//             }
//             else if(pathvis[it]){
//             return true;
//         }
//         }
//         pathvis[node]=0;
//         return false;   
//     }
//     bool isCyclicdirectedgraph(int V, vector<int> adj[]) {
//        int vis[V] = {0};
//         int pathvis[V] = {0};
//        for(int i=0;i<V;i++){
//            if(!vis[i]){
//                if(dfs(i,vis,pathvis,adj) == true)
//                return true;
//            }
//        }
//        return false;
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
//         cout << obj.isCyclicdirectedgraph(V, adj) << "\n";
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     bool isCyclicdirectedgraphusingbfsindegree(int V, vector<int> adj[]) {
//         int indegree[V] = {0};
//         for(int i=0;i<V;i++){
//             for(auto it: adj[i]){
//                 indegree[it]++;
//             }
//         }
//         queue<int>q;
//         for(int i=0;i<V;i++){
//             if(indegree[i] == 0)
//             q.push(i);
//         }
//         int count=0;
//         while(!q.empty()){
//             int temp=q.front();
//             q.pop();
//             count++;
//             for(auto it : adj[temp]){
//                 indegree[it]--;
//                 if(indegree[it] == 0) q.push(it);
//             }
//         }
//         if(count==V){ return true;}
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
//         cout << obj.isCyclicdirectedgraphusingbfsindegree(V, adj) << "\n";
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// class Solution{
// private: 
// void dfstopo(int node,int vis[],stack<int> &s ,vector<int> adj[]){
//     vis[node]=1;
//     for(auto it: adj[node]){
//         if(!vis[it]){
//             dfstopo(it,vis,s,adj);
//         }
//     }
//     s.push(node);
// }
// 	public:
// 	vector<int> topoSort(int V, vector<int> adj[]) 
// 	{
// 	    int vis[V]={0};
// 	    stack<int> s;
// 	    for(int i=0;i<V;i++){
// 	        if(!vis[i]){
// 	            dfstopo(i,vis,s,adj);
// 	        }
// 	    }
// 	    vector<int> ans;
// 	    while(!s.empty()){
// 	        ans.push_back(s.top());
// 	        s.pop();
// 	    }
// 	    return ans;
// 	}
// };
// int check(int V, vector <int> &res, vector<int> adj[]) {
//     if(V!=res.size())
//     return 0;
//     vector<int> map(V, -1);
//     for (int i = 0; i < V; i++) {
//         map[res[i]] = i;
//     }
//     for (int i = 0; i < V; i++) {
//         for (int v : adj[i]) {
//             if (map[i] > map[v]) return 0;
//         }
//     }
//     return 1;
// }
// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int N, E;
//         cin >> E >> N;
//         int u, v;
//         vector<int> adj[N];
//         for (int i = 0; i < E; i++) {
//             cin >> u >> v;
//             adj[u].push_back(v);
//         }
//         Solution obj;
//         vector <int> res = obj.topoSort(N, adj);
//         cout << check(N, res, adj) << endl;}
//     return 0;}




// #include <bits/stdc++.h>
// using namespace std;
// class Solution{
// public:
// 	vector<int> topoSort(int V, vector<int> adj[]) 
// 	{
// 	  vector<int> ans;
//       int indegree[V] ={0};
//       for(int i=0;i<V;i++){
//         for(auto it : adj[i]){
//             indegree[it]++;
//         }
//       }
//       queue<int> q;
//       for(int i=0;i<V;i++){
//         if(indegree[i] == 0){
//             q.push(i);
//         }
//       }
//       while(!q.empty()){
//         int temp=q.front();
//         ans.push_back(temp);
//         q.pop();
//         for(auto it: adj[temp]){
//         indegree[it]--;
//         if(indegree[it] == 0) q.push(it);
//       }
//       }
//       return ans;
// 	}
// };
// int check(int V, vector <int> &res, vector<int> adj[]) {
//     if(V!=res.size())
//     return 0; 
//     vector<int> map(V, -1);
//     for (int i = 0; i < V; i++) {
//         map[res[i]] = i;
//     }
//     for (int i = 0; i < V; i++) {
//         for (int v : adj[i]) {
//             if (map[i] > map[v]) return 0;
//         }
//     }
//     return 1;
// }
// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int N, E;
//         cin >> E >> N;
//         int u, v;
//         vector<int> adj[N];
//         for (int i = 0; i < E; i++) {
//             cin >> u >> v;
//             adj[u].push_back(v);
//         }
//         Solution obj;
//         vector <int> res = obj.topoSort(N, adj);
//         cout << check(N, res, adj) << endl;}
//     return 0;}




// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
// 	bool isPossible(int V,int P, vector<pair<int, int> >& prerequisites) {
// 	   vector<int> adj[V];
// 		for (auto it : prerequisites) {
// 			adj[it.first].push_back(it.second);
// 		}
// 		vector<int> ans;
//       int indegree[V] ={0};
//       for(int i=0;i<V;i++){
//         for(auto it : adj[i]){
//             indegree[it]++;
//         }
//       }
//       queue<int> q;
//       for(int i=0;i<V;i++){
//         if(indegree[i] == 0){
//             q.push(i);
//         }
//       }
//       while(!q.empty()){
//         int temp=q.front();
//         ans.push_back(temp);
//         q.pop();
//         for(auto it: adj[temp]){
//         indegree[it]--;
//         if(indegree[it] == 0) q.push(it);
//       }
//       }
//       if(ans.size() == V) return true;
//       return false;
// 	}
// };
// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
//     	int N, P;
//         vector<pair<int, int> > prerequisites;
//         cin >> N;
//         cin >> P;
//         for (int i = 0; i < P; ++i) {
//             int x, y;
//             cin >> x >> y;
//             prerequisites.push_back(make_pair(x, y));
//         }
//         Solution ob;
//         if (ob.isPossible(N,P, prerequisites))
//             cout << "Yes";
//         else
//             cout << "No";
//         cout << endl;
// 	}
// 	return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
//   public:
//     vector<int> findOrder(int V, int m, vector<vector<int>> prerequisites) 
//     {
//         vector<int> adj[V];
// 		for (auto it : prerequisites) {
// 			adj[it[1]].push_back(it[0]);
// 		}
// 		vector<int> ans;
//       int indegree[V] ={0};
//       for(int i=0;i<V;i++){
//         for(auto it : adj[i]){
//             indegree[it]++;
//         }
//       }
//       queue<int> q;
//       for(int i=0;i<V;i++){
//         if(indegree[i] == 0){
//             q.push(i);
//         }
//       }
//       while(!q.empty()){
//         int temp=q.front();
//         ans.push_back(temp);
//         q.pop();
//         for(auto it: adj[temp]){
//         indegree[it]--;
//         if(indegree[it] == 0) q.push(it);
//       }
//       }
//       if(ans.size() == V) return ans;
//       return {};
//     }
// };
// int check(int V, vector <int> &res, vector<int> adj[]) {
//     vector<int> map(V, -1);
//     for (int i = 0; i < V; i++) {
//         map[res[i]] = i;
//     }
//     for (int i = 0; i < V; i++) {
//         for (int v : adj[i]) {
//             if (map[i] > map[v]) return 0;
//         }
//     }
//     return 1;
// }
// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int n, m;
//         cin >> n >> m;
//         int u, v;
//         vector<vector<int>> prerequisites;
//         for (int i = 0; i < m; i++) {
//             cin >> u >> v;
//             prerequisites.push_back({u,v});
//         }     
//         vector<int> adj[n];
//         for (auto pre : prerequisites)
//             adj[pre[1]].push_back(pre[0]);
//         Solution obj;
//         vector <int> res = obj.findOrder(n, m, prerequisites);
//         if(!res.size())
//             cout<<"No Ordering Possible"<<endl;
//         else
//             cout << check(n, res, adj) << endl;
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
//         vector<int> adjRev[V];
// 		int indegree[V] = {0};
// 		for (int i = 0; i < V; i++) {
// 			for (auto it : adj[i]) {
// 				adjRev[it].push_back(i);
// 				indegree[i]++;
// 			}
// 		}
// 		queue<int> q;
// 		vector<int> safeNodes;
// 		for (int i = 0; i < V; i++) {
// 			if (indegree[i] == 0) {
// 				q.push(i);
// 			}
// 		}
// 		while (!q.empty()) {
// 			int node = q.front();
// 			q.pop();
// 			safeNodes.push_back(node);
// 			for (auto it : adjRev[node]) {
// 				indegree[it]--;
// 				if (indegree[it] == 0) q.push(it);
// 			}
// 		}
// 		sort(safeNodes.begin(), safeNodes.end());
// 		return safeNodes;
// 	}
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
//         vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
//         for (auto i : safeNodes) {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// }



// #include <bits/stdc++.h>
// using namespace std;
// class Solution{
//     private: 
//     void dfscheck(int node,int vis[],stack<int> &st,vector<int> adj[]){
//         vis[node]=1;
//         for(auto it :adj[node]){
//             if(!vis[it]){
//                 dfscheck(it,vis,st,adj);
//             }
//         }
//         st.push(node);
//     }
//     private:
//     vector<int> toposort(vector<int> adj[],int v){
//         int vis[v]={0};
//         stack<int> st;
//         for(int i=0;i<v;i++){
//             if(!vis[i]){
//                 dfscheck(i,vis,st,adj);
//             }
//         }
//         vector<int> vt;
//         while(!st.empty()){
//             int node=st.top(); st.pop();
//             vt.push_back(node);
//         }
//         return vt;
//     }
//     public:
//     string findOrder(string dict[], int N, int K) {
//         vector<int> adj[K];
//         for(int i=0;i<N-1;i++){
//             string s1=dict[i];
//             string s2=dict[i+1];
//             int len=min(s1.size(),s2.size());
//             for(int i=0;i<len;i++){
//                 if(s1[i]!=s2[i]){
//                     adj[s1[i]-'a'].push_back(s2[i]-'a');
//                     break;
//                 }
//             }
//         }
//         vector<int> topo=toposort(adj,K);
//         string s="";
//         for(auto it : topo){
//             s=s+char(it+'a');
//         }
//         return s;
//     }
// };
// string order;
// bool f(string a, string b) {
//     int p1 = 0;
//     int p2 = 0;
//     for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++) {
//         p1 = order.find(a[i]);
//         p2 = order.find(b[i]);
//     }
//     if (p1 == p2 and a.size() != b.size()) return a.size() < b.size();
//     return p1 < p2;
// }
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int N, K;
//         cin >> N >> K;
//         string dict[N];
//         for (int i = 0; i < N; i++) cin >> dict[i];
//         Solution obj;
//         string ans = obj.findOrder(dict, N, K);
//         order = "";
//         for (int i = 0; i < ans.size(); i++) order += ans[i];
//         string temp[N];
//         std::copy(dict, dict + N, temp);
//         sort(temp, temp + N, f);
//         bool f = true;
//         for (int i = 0; i < N; i++)
//             if (dict[i] != temp[i]) f = false;
//         if(f)cout << 1;
//         else cout << 0;
//         cout << endl;
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// private:
// bool dfs(int node,int col,int color[],vector<int> adj[]){
//     color[node] = col;
//     for(auto it:adj[node]){
//         if(color[it] == -1){
//             if(dfs(it,!col,color,adj)==false)
//             return false;
//         }
//         else if(color[it] == col)
//         return false;
//     }
//     return true;
// }
// public:
// 	bool isBipartite(int V, vector<int>adj[]){
// 	    int color[V];
// 	    for(int i=0;i<V;i++){
// 	        color[i] = -1;
// 	    }
// 	    for(int i=0;i<V;i++){
// 	        if(color[i] == -1){
// 	            if(dfs(i,0,color,adj) == false)
// 	            return false;
// 	        }
// 	    }
// 	    return true;
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
// 		bool ans = obj.isBipartite(V, adj);    
// 		if(ans)cout << "1\n";
// 		else cout << "0\n";  
// 	}
// 	return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// class Solution
// {
// private: 
// void dfswithstack(int node,vector<int> &vis ,vector<vector<int>>& adj,stack<int> &s){
//     vis[node] =1;
//     for(auto it: adj[node]){
//         if(!vis[it]){
//             dfswithstack(it,vis,adj,s);
//         }
//     }
//     s.push(node);
// }
// void dfswithoutstack(int node,vector<int> &vis ,vector<vector<int>>& adjtrans){
//     vis[node]=1;
//     for(auto it: adjtrans[node]){
//         if(!vis[it]){
//             dfswithoutstack(it,vis,adjtrans);
//         }
//     }
// }
// 	public:
//     int kosaraju(int V, vector<vector<int>>& adj)
//     {
//       vector<int> vis(V,0);
//       stack<int> s;
//       for(int i=0;i<V;i++){
//           if(!vis[i]){
//               dfswithstack(i,vis,adj,s);
//           }
//       }
//       vector<vector<int>> adjtrans(V);
//       for(int i=0;i<V;i++){
//           vis[i]=0;
//           for(auto it: adj[i]){
//               adjtrans[it].push_back(i);
//           }
//       }
//       int count=0;
//   while(!s.empty()){
//       int node=s.top();
//       s.pop();
//       if(!vis[node]){
//           dfswithoutstack(node,vis,adjtrans);
//           count++;
//       }
//   }
//       return count;
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
//     	cout << obj.kosaraju(V, adj) << "\n";
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// class Solution
// {
//     private: 
//     void dfswithstack(vector<int> &vis,int node,vector<vector<int>>& adj,stack<int> &s){
//         vis[node] =1;
//         for(auto it : adj[node]){
//             if(!vis[it]){
//                 dfswithstack(vis,it,adj,s);
//             }
//         }
//         s.push(node);
//     }
//     void dfswithoutstack(vector<int> &vis ,int node,vector<vector<int>>& adjtrans){
//         vis[node] = 1;
//         for(auto it: adjtrans[node]){
//             if(!vis[it]){
//                 dfswithoutstack(vis,it,adjtrans);
//             }
//         }
//     }
// 	public:
//     vector<int> kosaraju(int V, vector<vector<int>>& adj)
//     {
//       vector<int> ans;
//       vector<int> vis(V,0);
//       stack<int> s;
//       for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 dfswithstack(vis,i,adj,s);           
//             }
//         }
//       vector<vector<int>> adjtrans(V);
//       for(int i=0;i<V;i++){
//         vis[i] =0;
//         for(auto it: adj[i]){
//             adjtrans[it].push_back(i);
//         }
//       }
//       while(!s.empty()){
//         int node=s.top();
//         s.pop();
//             if(!vis[node]){
//                 dfswithoutstack(vis,node,adjtrans);
//                 ans.push_back(node);
//             }
//         }
//       return ans;
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




// #include<bits/stdc++.h>
// using namespace std;
// class Solution
// {   
//     private:
//     int timer=0;
//     void dfscheck(int node,int parent,vector<int> &vis,vector<int> adj[],int low[],int tin[],int &ans,int c,int d){
//         vis[node]=1;
//         low[node] = tin[node] = timer;
//         timer++;
//         for(auto  it : adj[node]){
//             if( it == parent ) continue;
//             if(!vis[it]){
//                 dfscheck(it,node,vis,adj,low,tin,ans,c,d);
//                 low[node] = min(low[node],low[it]);
//                 if(low[it] > tin[node] && node == c && it ==d){
//                     ans=1;
//                 }
//             }
//             else {
//                 low[node] = min(low[node],low[it]);
//             }
//         }
//     }
// 	public:
//     int isBridge(int V, vector<int> adj[], int c, int d) {
//         vector<int> vis(V,0);
//         int low[V];
//         int tin[V];
//         int ans=0;
//         dfscheck(0,-1,vis,adj,low,tin,ans,c,d);
//         return ans;
//     }
// };
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--) {
//         int V, E;
//         cin >> V >> E;
//         vector<int> adj[V];
//         int i=0;
//         while (i++<E) {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back (v);
//             adj[v].push_back (u);
//         } 
//         int c,d;
//         cin>>c>>d;  
//         Solution obj;
//     	cout << obj.isBridge(V, adj, c, d) << "\n";
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
//   private:
//     int timer=0;
//     void dfscheck(int node,int parent,vector<int>& vis,vector<int> &mark,
//     vector<int>adj[],int low[],int tin[]){
//         vis[node]=1;
//         low[node]=tin[node]=timer;
//         timer++;
//         int child=0;
//         for(auto it : adj[node]){
//             if(it == parent) continue;
//             if(!vis[it]){
//                 dfscheck(it,node,vis,mark,adj,low,tin);
//                 low[node]=min(low[node],low[it]);
//                 if(low[it]>=tin[node] && parent != -1){
//                     mark[node]=1;
//                 }
//                 child++;
//             }
//             else{
//                 low[node]=min(low[node],low[it]);
//             }
//         }
//         if(child>1 && parent == -1){
//             mark[node] =1;
//         }
//     }
//   public:
//     vector<int> articulationPoints(int V, vector<int>adj[]) {
//         vector<int> vis(V,0);
//         vector<int> mark(V,0);
//         int low[V];
//         int tin[V];
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 dfscheck(i,-1,vis,mark,adj,low,tin);
//             }
//         }
//         vector<int> ans;
//         for(int i=0;i<V;i++){
//             if(mark[i] == 1){
//                 ans.push_back(i);
//             }
//         }
//         if(ans.size() == 0) return {-1 };
//         return ans;
//     }
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
// 		vector<int> ans = obj.articulationPoints(V, adj);
// 		for(auto i: ans)cout << i << " ";
// 		cout << "\n";
// 	}
// 	return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
//   private:
//   int timer=0;
//   void dfscheck(int node,int parent,vector<int> &vis,vector<int>adj[],vector<int> &mark,int low[],int tin[]){
//     vis[node]=1;
//     low[node] = tin[node] = timer;
//     timer++;
//     int child=0;
//     for(auto it : adj[node]){
//         if( it  ==  parent) continue;
//         if(!vis[it]){
//             dfscheck(it,node,vis,adj,mark,low,tin);
//             low[node]=min(low[node],low[it]);
//             if(low[it] >= tin[node] && parent !=-1){
//                 mark[node] =1;
//             }
//             child++;
//         }
//         else {
//             low[node]=min(low[node],low[it]);
//         }
//     }
//     if( parent == -1 && child> 0){
//         mark[node]=1;
//     }
//   }
//   public:
//     vector<int> articulationPoints(int n, vector<int>adj[]) {
//         vector<int> vis(n,0),mark(n,0);
//         int low[n];int tin[n];
//         for(int i=0;i<n;i++){
//             if(!vis[i]){
//                 dfscheck(i,-1,vis,adj,mark,low,tin);
//             }
//         }
//         vector<int> ans;
//         for(int i=0;i<n;i++){
//             if(mark[i] == 1){
//                 ans.push_back(i);
//             }
//         }
//         if(ans.size() == 0) return {-1};
//         return ans;
//     }
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
// 		vector<int> ans = obj.articulationPoints(V, adj);
// 		for(auto i: ans)cout << i << " ";
// 		cout << "\n";
// 	}
// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
//   private:
//   int timer=1;
//   void dfs(int node, int parent,vector<int>adj[],vector<int>&visited,int low[], int tn[], vector<int>&mark) {
//       visited[node] = 1;
//       low[node] = tn[node] = timer;
//       timer++;
//       int child=0;
//       for(auto it:adj[node]) {
//           if(it==parent) continue;
//           if(!visited[it]) {
//               dfs(it,node,adj,visited,low,tn,mark);
//               low[node] = min(low[node],low[it]);
//               if(low[it] >= tn[node] && parent!=-1) {
//                   mark[node] = 1;
//               }
//               child++;
//           }
//           else {
//               low[node] = min(low[node],tn[it]);
//           }
//       }
//       if(child>1 && parent==-1) {
//           mark[node] = 1;
//       }
//   }
//   public:
//     vector<int> articulationPoints(int V, vector<int>adj[]) {
//         vector<int>visited(V,0);
//         int low[V],tn[V];
//         vector<int>mark(V,0);
//         for(int i=0;i<V;i++){
//             if(!visited[i]) {
//                 dfs(i,-1,adj,visited,low,tn,mark);
//             }
//         }
//         vector<int>ans;
//         for(int i=0;i<V;i++) {
//             if(mark[i]==1) ans.push_back(i);
//         }
//         if(ans.size()==0) return {-1};
//         return ans;
//     }
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
// 		vector<int> ans = obj.articulationPoints(V, adj);
// 		for(auto i: ans)cout << i << " ";
// 		cout << "\n";
	
// cout << "~" << "\n";
// }
// 	return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// class Solution
// {
//     int timer = 1;
//     private:
//     void dfscheck(int node,int parent,vector<int> &tin,vector<int> &low,vector<int> &vis,
//     vector<int> adj[],int c, int d,int &ans){
//         vis[node] = 1;
//         low[node] = tin[node] = timer;
//         timer++;
        
//         for(auto  it : adj[node]){
//             if(parent == it) continue;;
//             if(!vis[it]){
//                 dfscheck(it,node,tin,low,vis,adj,c,d,ans);
//                 low[node] = min(low[node],low[it]);
//                 if(low[it] > tin[node]){
//                     if((it == c && node == d)||(it == d && node == c)) ans = 1;
//                 }
//             }
//             else low[node] = min(low[node],low[it]);
//         }
//     }
// 	public:
//     //Function to find if the given edge is a bridge in graph.
//     int isBridge(int n, vector<int> adj[], int c, int d) 
//     {
//         vector<int> vis(n,0);
//         vector<int> tin(n, -1), low(n, -1);
//         int ans = 0;
        
//         for(int i=0;  i<n; i++){
//             if(!vis[i]){
//                 dfscheck(i,-1,tin,low,vis,adj,c,d,ans);
//             }
//         }
//         return ans;
//     }
// };
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--) {
//         int V, E;
//         cin >> V >> E;
//         vector<int> adj[V];
//         int i=0;
//         while (i++<E) {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back (v);
//             adj[v].push_back (u);
//         }
        
//         int c,d;
//         cin>>c>>d;
        
//         Solution obj;
//     	cout << obj.isBridge(V, adj, c, d) << "\n";
    
// cout << "~" << "\n";
// }
//     return 0;
// }


// private:
// int timer=0;
// void dfscheck(int node,int parent,vector<int> &vis,vector<int> adj[],vector<vector<int>> &ans,int low[],int tin[]){
//     vis[node]=1;
//     low[node] = tin[node] = timer;
//     timer++;
//     for(auto it : adj[node]){
//         if(it ==  parent) continue;
//         if(!vis[node]){
//             dfscheck(it,node,vis,adj,ans,low,tin);
//             low[node] = min(low[it],low[node]);
//             if(low[it] > tin[node]){
//                 ans.push_back({it,node});
//             }
//         }
//         else {
//             low[node] = min(low[node] ,low[it]);
//         }
//     }
// }
// vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e) {
//    vector<int> vis(v,0);
//    vector<vector<int>> ans;
//    vector<int> adj[v];
//    for(auto it : edges){
//     adj[it[0]].push_back(it[1]);
//     adj[it[1]].push_back(it[0]);
//    }
//    int low[v];
//    int tin[v];
//    dsfcheck(0,-1,vis,adj,ans,low,tin);
//    return ans;
// }





// #include<bits/stdc++.h>
// using namespace std;
// class Solution
// {
//     private:
//     void dfscheck1(int node,vector<int> &vis,stack<int> &s,vector<int> adj[]){
//         vis[node] = 1;
//         for(auto it : adj[node]){
//             if(!vis[it]){
//                 dfscheck1(it,vis,s,adj);
//             }
//         }
//         s.push(node);
//     }
//     private:
//     void dfscheck2(int node,vector<int> &vis,vector<int> newadj[],vector<int> &nums){
//         vis[node] = 1;
//         nums.push_back(node);
//         for(auto it : newadj[node]){
//             if(!vis[it]){
//                 dfscheck2(it,vis,newadj,nums);
//             }
//         }
//     }
// 	public:
//     vector<vector<int>> tarjans(int V, vector<int> adj[])
//     {
//         stack<int> s;
//         vector<int> vis(V,0);
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 dfscheck1(i,vis,s,adj);
//             }
//         }
//         vector<int> newadj[V];
//         for (int i = 0; i < V; i++) {
//             vis[i] = 0;
//             for (auto it : adj[i]) {
//                 newadj[it].push_back(i); 
//             }
//         }
        
//         vector<vector<int>> ans;
//         while(!s.empty()){
//             auto it  = s.top(); s.pop();
//             if(!vis[it]){
//                 vector<int> nums;
//                 dfscheck2(it,vis,newadj,nums);
//                 sort(nums.begin(),nums.end());
//                 ans.push_back(nums);
//             }
//         }
//         sort(ans.begin(),ans.end());
//         return ans;
//     }
// };
// int main()
// {
    
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int V, E;
//         cin >> V >> E;

//         vector<int> adj[V];

//         for(int i = 0; i < E; i++)
//         {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//         }

//         Solution obj;
//         vector<vector<int>> ptr = obj.tarjans(V, adj);

//         for(int i=0; i<ptr.size(); i++)
//         {
//             for(int j=0; j<ptr[i].size(); j++)
//             {
//                 if(j==ptr[i].size()-1)
//                     cout<<ptr[i][j];
//                 else
//                     cout<<ptr[i][j]<<" ";
//             }
//             cout<<',';
//         }
//         cout<<endl;
//     }
//     return 0;
// }






// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   private:
//     bool dfscheck(int node, vector<int> &path,vector<int> & vis,vector<vector<int>> graph){
//         vis[node] = 1;
//         path[node] = 1;
        
//         for(auto it : graph[node]){
//             if(path[it]) return true;
//             if(!vis[it]){
//                 if(dfscheck(it,path,vis,graph)) return true;
//             }
//         }
//         path[node] = 0;
//         return false;
//     }
//   public:
//     // Function to detect cycle in a directed graph.
//     bool isCyclic(int n, vector<vector<int>> adj) {
//         vector<int> vis(n,0);
//         vector<int> path(n,0);
 
//         for(int i=0; i<n; i++){
//             if(!vis[i]) if(dfscheck(i,path,vis,adj)) return true;
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

//         vector<vector<int>> adj(V);

//         for (int i = 0; i < E; i++) {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
        
//         Solution obj;
//         cout << obj.isCyclic(V, adj) << "\n";

//         cout << "~"
//              << "\n";
//     }
//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
// private:
// bool cycledetect(int i,int vis[],vector<vector<int>> &adj){
//     vis[i]=1;
//     queue<pair<int,int>> q;
//     q.push({i,-1});
//     while(!q.empty()){
//         int node=q.front().first;
//         int parent=q.front().second;
//         q.pop();
//         for(auto it:adj[node]){
//             if(vis[it]!=1){
//                 vis[it]=1;
//                 q.push({it,node});
//             }
//             else if(parent!=it) return true;
//         }
//     }
//     return false;
// }
// bool dfscheck(int node, int parent,vector<int> &vis,vector<vector<int>>& adj){
//     vis[node] = 1;
//     for(auto it : adj[node]){
//         if(!vis[it]){
//             if(dfscheck(it,node,vis,adj)) return true;
//         }else if(it != parent) return true;
//     }
//     return false;
// }
//   public:
//         //Function to detect cycle in an undirected graph.
//     bool isCycle1(vector<vector<int>>& adj){
//       int V = adj.size();
//       int vis[V]={0};
//       for(int i=0;i<V;i++){
//           if(!vis[i]){
//               if(cycledetect(i,vis,adj)==true)
//               return true;
//           }
//       }
//       return false;
//     }
//     bool isCycle(vector<vector<int>>& adj){
//       int V = adj.size();
//       vector<int> vis(V,0);
      
//        for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 if(dfscheck(i,-1,vis,adj)) return true;
//             }
//         }
//       return false;
//     }
// };
// int main() {
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int V, E;
//         cin >> V >> E;
//         vector<vector<int>> adj(V);
//         for (int i = 0; i < E; i++) {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }
//         Solution obj;
//         bool ans = obj.isCycle(adj);
//         if (ans)
//             cout << "1\n";
//         else
//             cout << "0\n";

//         cout << "~"
//              << "\n";
//     }
//     return 0;
// }
