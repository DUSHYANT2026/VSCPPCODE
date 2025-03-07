#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main (){
    int nums[] = {4,9,9,13,9,13,4,4,4,9};

    // int c4 = 0; int c9 = 0 ; int c13 = 0;
    // for(auto it : nums){
    //     if(it == 4){
    //         c4++;
    //     }
    //     else if(it == 9) c9++;
    //     else c13++;
    // }
    // nums.clear();
    // while(c4--) nums.push_back(4);
    // while(c9--) nums.push_back(9);
    // while(c13--) nums.push_back(13);

    priority_queue<int, vector<int>,greater<int>> pq;
    for(int it : nums) pq.push(it);
    while(!pq.empty()){
        cout<<pq.top() << " ";
        pq.pop();
    }

    // for(auto it : nums){
    //     cout<<it<<" ";
    // } 

    return 0;

}