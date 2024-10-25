// #include <bits/stdc++.h>
// using namespace std;
// class Solution{
// bool checkvalid(vector<vector<int>>& check, int row, int col,int n){
    
//     for(int i=0; i < row; i++){
//         if(check[i][col] == 1){
//             return false;
//         }
//     }
//     for(int i=row,j=col; i>=0 && j>=0; i--,j--){
//         if(check[i][j] == 1){
//             return false;
//         }
//     }
//     for(int i=row,j=col; i>=0 && j<n; i--,j++){
//         if(check[i][j] == 1){
//             return false;
//         }
//     }
//     return true;
// }
// void dfscheck(int row, int n,vector<vector<int>> &ans,vector<int>& temp,
// vector<vector<int>> &check){
//     if(row == n){
//         ans.push_back(temp);
//         return;
//     }
    
//     for(int col=0; col<n; col++){
//         if(checkvalid(check,row,col,n)){
//             check[row][col] = 1;
//             temp.push_back(col+1);
//             dfscheck(row+1,n,ans,temp,check);
//             check[row][col] = 0;
//             temp.pop_back();
//         }
//     }
    
    
// }
// public:
//     vector<vector<int>> nQueen(int n) {
//         vector<vector<int>> ans;
//         vector<vector<int>> check (n, vector<int>(n, 0));;
//         vector<int> nums;
//         dfscheck(0,n,ans,nums,check);
//         return ans;
//     }
// };
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
        
//         Solution ob;
//         vector<vector<int>> ans = ob.nQueen(n);
//         if(ans.size() == 0)
//             cout<<-1<<"\n";
//         else {
//             for(int i = 0;i < ans.size();i++){
//                 cout<<"[";
//                 for(int u: ans[i])
//                     cout<<u<<" ";
//                 cout<<"] ";
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }







#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> findCommonElements(const vector<int>& arr1, const vector<int>& arr2, const vector<int>& arr3) {
    vector<int> result;
    int i = 0, j = 0, k = 0;

    while (i < arr1.size() && j < arr2.size() && k < arr3.size()) {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            result.push_back(arr1[i]);
            i++; j++; k++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr3[k]) {
            j++;
        } else {
            k++;
        }
    }

    return result;
}

int main() {
    vector<int> arr1, arr2, arr3;


    int temp;
    while (cin.peek() != '\n') {
        cin >> temp;
        arr1.push_back(temp);
    }
    cin.ignore();  


    while (cin.peek() != '\n') {
        cin >> temp;
        arr2.push_back(temp);
    }
    cin.ignore();


    while (cin.peek() != '\n') {
        cin >> temp;
        arr3.push_back(temp);
    }

   
    vector<int> commonElements = findCommonElements(arr1, arr2, arr3);

    if (!commonElements.empty()) {
        cout << "Common elements: ";
        for (int elem : commonElements) {
            cout << elem << " ";
        }
        cout << endl;
    } else {
        cout << "No common elements" << endl;
    }

    return 0;
}




