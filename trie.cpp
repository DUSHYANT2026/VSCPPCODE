// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     node * link[26];
//     bool mark = false;

//     bool containkey(char ch){
//         return (link[ch - 'a'] != NULL);
//     } 
//     void put(char ch,node * newnode){
//         link[ch-'a'] = newnode;
//     }
//     node* getnext(char ch){
//         return link[ch-'a'];
//     }
//     bool setend(){
//         mark = true;
//     }
//     bool isend(){
//         return mark;
//     }
// };
// class trie{
//     private: 
//     node* root;
//     public:
//     trie(){
//         root = new node();
//     }

//     void insert(string word){
//         node* temp = root;
//         for(int i=0;i<word.size();i++){
//             if(!temp->containkey(word[i])){
//                 temp->put(word[i],new node());
//             }
//             temp = temp->getnext(word[i]);
//         }
//         temp->setend();
//     }

//     bool search(string word){
//         node * temp = root;
//         for(int i=0;i<word.size();i++){
//             if(!temp->containkey(word[i])){
//                 return false;
//             }
//             temp = temp->getnext(word[i]);
//         }
//         return temp->isend();
//     }

//     bool startwith(string prefix){
//         node* temp = root;
//         for(int i=0;i<prefix.size();i++){
//             if(!temp->containkey(prefix[i])){
//                 return false;
//             }
//             temp = temp->getnext(prefix[i]);
//         }
//         return true;
//     }
// };
// int main(){
//     int n = 5;
// 	vector<int>type = {1, 1, 2, 3, 2};
// 	vector<string>value = {"hello", "help", "help", "hel", "hel"};
// 	trie tie;
// 	for (int i = 0; i < n; i++) {
// 		if (type[i] == 1) {
// 			tie.insert(value[i]);
// 		}
// 		else if (type[i] == 2) {
// 			if (tie.search(value[i])) {
// 				cout << "true" << "\n";
// 			}
// 			else {
// 				cout << "false" << "\n";
// 			}
// 		}
// 		else {
// 			if (tie.startwith(value[i])) {
// 				cout << "true" << "\n";
// 			}
// 			else {
// 				cout << "false" << "\n";
// 			}
// 		}
// 	}
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     node * link[26];
//     int countendwith = 0;
//     int countprefix = 0;

//     bool containkey(char ch){
//         return (link[ch - 'a'] != NULL);
//     }
//     void put(char ch, node * root){
//         link[ch - 'a'] = root;
//     }
//     node * getnext(char ch){
//         return link[ch-'a'];
//     }
//     void increendwith(){
//         countendwith++;
//     }
//     void increprefix(){
//         countprefix++;
//     }
//     void deleteendwith(){
//         countendwith--;
//     }
//     void deleteprefix(){
//         countprefix--;
//     }
//     int getend(){
//         return countendwith;
//     }
//     int getprefix(){
//         return countprefix;
//     }
// };
// class trie{
//     private:
//     node * root;
//     public:
//     trie(){
//         root = new node();
//     }
//     void insert(string word){
//         node *  temp = root;
//         for(int i=0;i<word.size();i++){
//             if(!temp->containkey(word[i])){
//                 temp->put(word[i],new node());
//             }
//             temp = temp->getnext(word[i]);
//             temp->increprefix();
//         }
//         temp->increendwith();
//     }
//     int countWordsEqualTo(string & word){
//         node* temp = root;
//         for(int i=0;i<word.size();i++){
//             if(temp->containkey(word[i])){
//                 temp = temp->getnext(word[i]);
//             }
//             else{
//                 return 0;
//             }
//         }
//         return temp->getend();
//     }
//      int countWordsStartingWith(string &word){
//         node * temp = root;
//         for(int i=0;i<word.size();i++){
//             if(temp->containkey(word[i])){
//                 temp = temp->getnext(word[i]);
//             }
//             else{
//                 return 0;
//             }
//         }
//         return temp->getprefix();
//     }
//     void erase(string &word){
//         node * temp = root;
//         for(int i=0;i<word.size();i++){
//             if(temp->containkey(word[i])){
//                 temp = temp->getnext(word[i]);
//                 temp->deleteprefix();
//             }
//             else{
//                 return;
//             }
//         }
//         temp->deleteendwith();
//     }
// };
// int main(){
//   trie T;
//   T.insert("apple");
//   T.insert("apple");
//   T.insert("apps");
//   T.insert("apps");
//   string word1 = "apps";
//   cout<<"Count Words Equal to "<< word1<<" "<<T.countWordsEqualTo(word1)<<endl;
//   string word2 = "abc";
//   cout<<"Count Words Equal to "<< word2<<" "<<T.countWordsEqualTo(word2)<<endl;
//   string word3 = "ap";
//   cout<<"Count Words Starting With "<<word3<<" "<<T.countWordsStartingWith(word3)
//   <<endl;
//   string word4 = "appl";
//   cout<<"Count Words Starting With "<< word4<<" "<<T.countWordsStartingWith(word4)
//   <<endl;
//   T.erase(word1);
//   cout<<"Count Words equal to "<< word1<<" "<<T.countWordsEqualTo(word1)<<endl;
//   return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    node* link[26];
    
    bool containkey(char ch){
        return (link[ch -'a'] != NULL);
    }
    void put(char ch,node * root){
        link[ch-'a'] = root;
    }
    node* getnext(char ch){
        return link[ch-'a'];
    }
};
int countDistinctSubstrings(string word){
    node* root = new node();
    int count = 0;

    for(int i=0;i<word.size();i++){
        node * temp = root;
        for(int j=i;j<word.size();j++){
            if(!temp->containkey(word[j])){
                temp->put(word[j],new node());
                count++;
            }
             temp = temp->getnext(word[j]);
        }
    }
    return count;
}
int main() {
  string s1 = "ababa";
  cout << "Total number of distinct substrings : " << countDistinctSubstrings(s1);
  cout << "\n";

  string s2 = "ccfdf";
  cout << "Total number of distinct substrings : " << countDistinctSubstrings(s2);

  return 0;
}