


Using toposort to  check the cycle exist in directed graph because   toposort is exist for directed a cyclic graph known as DAG ,    FOR OTHER CYCLE CHECK  USE PARENT  AND VISITED 

class Solution {                                
  public:
    bool isCyclic(int n, vector<vector<int>> &edges) {
        // code here
        vector<int> graph[n];
        vector<int> indegree(n,0);
        for(auto  it : edges){
            graph[it[0]].push_back(it[1]);
            indegree[it[1]]++;
        }
        queue<int> q;
        for(int i=0; i<n; i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        int count = 0;
        while(!q.empty()){
            auto it = q.front(); q.pop();
            count++;
            for(auto i : graph[it]){
                indegree[i]--;
                if(indegree[i] == 0) q.push(i);
            }
        }
        return count != n;
    }
};










gcd(a,b)xlcm(a,b)=axb
From this you can get:
lcm(a,b)=(axb)/gcd(a,b)








#include <iostream>
#include <string>
#include <algorithm>

std::string add(std::string s1, std::string s2) {
    std::string result = "";
    int carry = 0;
    int i = s1.length() - 1;
    int j = s2.length() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int digit1 = (i >= 0) ? s1[i--] - '0' : 0;
        int digit2 = (j >= 0) ? s2[j--] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        result.push_back((sum % 10) + '0');
        carry = sum / 10;
    }

    std::reverse(result.begin(), result.end());
    return result;
}

int main() {
    std::string s1 = "9223372036854775807"; 
    std::string s2 = "1";
    std::cout << add(s1, s2) << std::endl; 

    std::string s3 = "123456789012345678901234567890";
    std::string s4 = "987654321098765432109876543210";
    std::cout << add(s3, s4) << std::endl; 

    return 0;
}









#include <iostream>
#include <string>

int main() {
    std::string text = "Hello, world!";
    std::string substring = "world";

    // Search for the substring
    size_t found_pos = text.find(substring);

    // Compare the return value to string::npos
    if (found_pos != std::string::npos) {
        std::cout << "Substring found at position: " << found_pos << std::endl;
    } else {
        std::cout << "Substring not found." << std::endl;
    }

    return 0;
}







#include <iostream>
#include <string>

int main() {
    std::string text = "C++ programming is fun.";

    // The substr() function can take an optional length parameter.
    // If you omit the length or pass npos, it goes to the end of the string.
    std::string sub = text.substr(12, std::string::npos);

    std::cout << sub << std::endl;
    return 0;
}






// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    getline(cin,s);
    getline(cin,t);
    int x = t.size(); int count = 0;
    while(true){
        int index = 0;
        if(s.find(t) != string::npos){
            index = s.find(t);
            cout<<"Pattern found at index "<<index + count<<endl;
            s.erase(index,x);
            count += x;
        }
        else break;
    }
    return 0;
}








Permutataion :    use      next_permutation(nums) in  do -while loop ,   to all permunation sort the string or  vector


  do{

}while(nxt_permutation(nums_begin));



