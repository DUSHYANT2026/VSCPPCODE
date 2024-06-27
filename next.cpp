// #include <bits/stdc++.h> 
// using namespace std;
// class node{
//     public:
//     node * link[26];
//     int countend = 0;
//     int countprefix = 0;

//     bool containkey(char ch){
//         return (link[ch-'a'] != NULL);
//     }
//     void put(char ch,node* root){
//         link[ch-'a'] = root;
//     }
//     node * getnext(char ch){
//         return link[ch-'a'];
//     }
//     void inccountend(){
//         countend++;
//     }
//     void inccountprefix(){
//         countprefix++;
//     }
//     void deletecountend(){
//         countend--;
//     }
//     void deletecountprefix(){
//         countprefix--;
//     }
//     int getcountend(){
//         return countend;
//     }
//     int getcountprefix(){
//         return countprefix;
//     }
// };
// class Trie{ 
//     public:
//     node * root;

//     Trie(){
//         root = new node();
//     }

//     void insert(string &word){
//         node * temp = root;
//         for(int i=0;i<word.size();i++){
//             if(!temp->containkey(word[i])){
//                 temp->put(word[i],new node());
//             }
//             temp = temp->getnext(word[i]);
//             temp->inccountprefix();
//         }
//         temp->inccountend();
//     }

//     int countWordsEqualTo(string &word){
//         node * temp = root;
//         for(int i=0;i<word.size();i++){
//             if(temp->containkey(word[i])){
//                 temp = temp->getnext(word[i]);
//             }
//             else{
//                 return 0;
//             }
//         }
//         return temp->getcountend();
//     }

//     int countWordsStartingWith(string &word){
//         node * temp = root;
//         for(int i=0;i<word.size();i++){
//             if(temp->containkey(word[i])){
//                 temp = temp->getnext(word[i]);
//             }
//             else{
//                 return 0;
//             }
//         }
//         return temp->getcountprefix();
//     }

//     void erase(string &word){
//         node * temp = root;
//         for(int i=0;i<word.size();i++){
//             if(temp->containkey(word[i])){
//                 temp = temp->getnext(word[i]);
//                 temp->deletecountprefix();
//             }
//             else{
//                 return;
//             }
//         }
//         temp->deletecountend();
//     }
// };






#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    node * link[26];
    bool mark = false;

    bool containkey(char ch){
        return (link[ch-'a'] != NULL);
    }
    node* getnext(char ch){
        return link[ch-'a'];
    }
    void put(char ch,node * root){
        link[ch-'a'] = root;
    }
    void setend(){
        mark = true;
    }
    bool isend(){
        return mark;
    }
};
class trie{
    public:
    node * root;
    trie(){
        root = new node();
    }
    void insert(string & word){
        node *temp = root;
        for(int i=0;i<word.size();i++){
            if(!temp->containkey(word[i])){
                temp->put(word[i],new node());
            }
            temp = temp->getnext(word[i]);
        } 
        temp->setend();
    }
    bool checkprefixexist(string word){
        bool flage = true;
        node* temp = root;
        for(int i=0;i<word.size();i++){
            if(temp->containkey(word[i])){
                temp = temp->getnext(word[i]);
                if(!temp->isend()){
                    return false;
                }  
            }
            else{
                return false;
            }
        }
        return true;
    }
};
class Solution
{
public:
    string longestString(vector<string> &words)
    {
    trie t;
    for(auto &it : words){
        t.insert(it);
    }
    string ans = "";
    for(auto &it : words){
        if(t.checkprefixexist(it)){
            if(it.size() > ans.size()){
                ans = it;
            }
            else {
                if(it.size() == ans.size() && it < ans){
                    ans = it;
                }
            }
        }
    }
    if(ans == "") return "";
    return ans;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        string w = obj.longestString(v);
        cout << w << "\n";
    }
    return 0;
}



