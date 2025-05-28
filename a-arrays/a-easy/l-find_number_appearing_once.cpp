#include<bits/stdc++.h>
using namespace std;
 
// FIND THE NUMBER THAT APPEARS ONCE method 1 
int findNumber1(vector<int>&arr){
    unordered_map<int,int>mp;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        int freq=it->second;
        if(freq==1){
            return it->first;
        }
    }
    return -1;
}
// FIND THE MISSING NUMBER THAT APPEARS ONCE method 2 
int findNumber2(vector<int>&arr){
    int res=0;
    for(int i=0;i<arr.size();i++){
        res=res^arr[i];
    }
    return res;
}