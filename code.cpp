#include <bits/stdc++.h>
using namespace std;

class Graph {
    int V;
    list<int>* adj;
    vector<int> indegree;

public:
    Graph(int V);
    void addEdge(int v, int w);
    void allTopologicalSortsUtil(vector<int>& res, bool visited[], vector<vector<int>>& allOrders);
    vector<vector<int>> allTopologicalSorts();
    void printAdjacencyList();
};

Graph::Graph(int V) {
    this->V = V;
    adj = new list<int>[V];
    indegree.resize(V, 0);
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);
    indegree[w]++;
}

void Graph::printAdjacencyList() {
    cout << "Adjacency List Representation:" << endl;
    for (int i = 0; i < V; i++) {
        if (!adj[i].empty()) {
            cout << "Node " << i << " is connected to the following nodes ";
            for (auto it = adj[i].begin(); it != adj[i].end(); it++) {
                cout << *it;
                if (next(it) != adj[i].end()) {
                    cout << ",";
                }
            }
            cout << "," << endl;
        }
    }
}

void Graph::allTopologicalSortsUtil(vector<int>& res, bool visited[], vector<vector<int>>& allOrders) {
    bool flag = false;

    for (int i = 0; i < V; i++) {
        if (indegree[i] == 0 && !visited[i]) {
            for (auto it = adj[i].begin(); it != adj[i].end(); it++) {
                indegree[*it]--;
            }

            res.push_back(i);
            visited[i] = true;
            allTopologicalSortsUtil(res, visited, allOrders);

            visited[i] = false;
            res.pop_back();
            for (auto it = adj[i].begin(); it != adj[i].end(); it++) {
                indegree[*it]++;
            }

            flag = true;
        }
    }

    if (!flag) {
        allOrders.push_back(res);
    }
}

vector<vector<int>> Graph::allTopologicalSorts() {
    bool* visited = new bool[V];
    for (int i = 0; i < V; i++) {
        visited[i] = false;
    }

    vector<int> res;
    vector<vector<int>> allOrders;
    allTopologicalSortsUtil(res, visited, allOrders);
    
    delete[] visited;
    return allOrders;
}

int main() {
    int n;
    cin >> n;

    Graph g(n);
    int matrix[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                g.addEdge(i, j);
            }
        }
    }

    g.printAdjacencyList();
    
    vector<vector<int>> allOrders = g.allTopologicalSorts();
    reverse(allOrders.begin(),allOrders.end());
    
    cout << "Following is a Topological Sort of the given graph " << endl;
    if (!allOrders.empty()) {
        for (int i = 0; i < allOrders[0].size(); i++) {
            cout << allOrders[0][i] << " ";
        }
        cout << endl;
    }

    return 0;
}











#include <iostream>
#include <vector>
using namespace std;

long long mergeAndCount(vector<long long>& arr, int left, int mid, int right) {
    vector<long long> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;
    long long invCount = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            // arr[i] > arr[j] → inversion
            invCount += (mid - i + 1);
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];

    for (int idx = 0; idx < k; idx++) {
        arr[left + idx] = temp[idx];
    }

    return invCount;
}

long long mergeSortAndCount(vector<long long>& arr, int left, int right) {
    long long invCount = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;
        invCount += mergeSortAndCount(arr, left, mid);
        invCount += mergeSortAndCount(arr, mid + 1, right);
        invCount += mergeAndCount(arr, left, mid, right);
    }
    return invCount;
}

int main() {
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long result = mergeSortAndCount(arr, 0, n - 1);
    cout << result << endl;

    return 0;
}







#include <iostream>
#include <vector>
using namespace std;

void findPaths(vector<vector<int>>& matrix, int row, int col, vector<int>& path, vector<vector<int>>& allPaths) {
    int m = matrix.size();
    int n = matrix[0].size();
    
    path.push_back(matrix[row][col]);
    
    if (row == m - 1 && col == n - 1) {
        allPaths.push_back(path);
        path.pop_back();
        return;
    }
    
    if (row + 1 < m) {
        findPaths(matrix, row + 1, col, path, allPaths);
    }
    
    if (col + 1 < n) {
        findPaths(matrix, row, col + 1, path, allPaths);
    }
    
    path.pop_back();
}

int main() {
    int m, n;
    cin >> m >> n;
    
    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    
    vector<int> path;
    vector<vector<int>> allPaths;
    
    findPaths(matrix, 0, 0, path, allPaths);
    
    for (auto& p : allPaths) {
        cout << "[";
        for (int i = 0; i < p.size(); i++) {
            cout << p[i];
            if (i < p.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }
    
    return 0;
}







class Solution {
    
  public:
  void dfscheck(int node, vector<int> &vis, vector<int> &ans, vector<int> graph[]){                      // these code for just revesions
      vis[node] = 1;
      for(auto it : graph[node]){
          if(!vis[it]){
              dfscheck(it,vis,ans,graph);
          }
      }
      ans.push_back(node);
  }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        vector<int> graph[V];
        vector<int> indegree(V,0);
        for(auto it : edges){
            graph[it[0]].push_back(it[1]);
            indegree[it[1]]++;
        }
        queue<int> q;
        for(int i=0; i<V; i++){
            if(indegree[i] == 0) q.push(i);
        }
        vector<int> ans;
        
        while(!q.empty()){
            auto it = q.front(); q.pop();
            int node = it;
            ans.push_back(node);
            for(auto it : graph[node]){
                indegree[it]--;
                if(indegree[it] == 0){
                    q.push(it);
                }
            }
        }
  
        // for(int i=0; i<V; i++){
        //     if(!vis[i]){
        //         dfscheck(i,vis,ans,graph);
        //     }
        // }
        // reverse(ans.begin(),ans.end());
        
        return ans;
    }
};








#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

vector<string> backtrack(const string& s, int start, const unordered_set<string>& dict, unordered_map<int, vector<string>>& memo) {
    if (memo.find(start) != memo.end()) {
        return memo[start];
    }
    
    vector<string> res;
    if (start == s.length()) {
        res.push_back("");
        return res;
    }
    
    for (int end = start + 1; end <= s.length(); ++end) {
        string word = s.substr(start, end - start);
        if (dict.find(word) != dict.end()) {
            vector<string> suffixes = backtrack(s, end, dict, memo);
            for (const string& suffix : suffixes) {
                if (suffix.empty()) {
                    res.push_back(word);
                } else {
                    res.push_back(word + " " + suffix);
                }
            }
        }
    }
    
    memo[start] = res;
    return res;
}

vector<string> wordBreak(string s, vector<string>& wordDict) {
    unordered_set<string> dict(wordDict.begin(), wordDict.end());
    unordered_map<int, vector<string>> memo;
    return backtrack(s, 0, dict, memo);
}

int main() {
    string s;
    cin >> s;
    
    int n;
    cin >> n;
    
    vector<string> wordDict(n);
    for (int i = 0; i < n; i++) {
        cin >> wordDict[i];
    }
    
    vector<string> result = wordBreak(s, wordDict);
    
    // Format output
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    
    return 0;
}









class Solution {
private:
   void dfscheck(int node, vector<int> &vis, vector<int> graph[]){
    vis[node] = 1;
    for(auto it : graph[node]){
        if(!vis[it]){
            dfscheck(it,vis,graph);
        }
    }
   }
private:
    bool ndfscheck(int node, int parent, vector<int> &vis, vector<int> graph[]){
        vis[node] = 1;
        for(auto it : graph[node]){
            if(!vis[it]){
                if(ndfscheck(it,node,vis,graph)) return true;
            }
            else if(it != parent) return true;
        }
        return false;
    }
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        int count = 0;
        vector<int> graph[n];
        for(auto it : edges){
            graph[it[0]].push_back(it[1]);
            graph[it[1]].push_back(it[0]);
        }
        vector<int> vis(n,0);
        for(int i=0; i<n; i++){
            if(!vis[i]){
                dfscheck(i,vis,graph);
                count++;
            }
        }
        vector<int> nvis(n,0);
        bool cycle  = false;
        for(int i=0; i<n; i++){
            if(!nvis[i]){
                if(ndfscheck(i,-1,nvis,graph)) cycle = true;
            }
        }
        return (cycle == false && count == 1);
    }
};
