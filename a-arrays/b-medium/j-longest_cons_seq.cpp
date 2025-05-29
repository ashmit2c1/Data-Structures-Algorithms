#include<bits/stdc++.h>
using namespace std;
int longestConsequetiveSequence(vector<int>&arr){
    sort(arr.begin(),arr.end());
    int current=0;
    int maxseq=0;
    if(arr.size()==1){
        return 1;
    }
    for(int i=1;i<arr.size();i++){
        int element = arr[i];
        int prev = arr[i-1];
        if(element == prev+1){
            current++;
        }else{
            maxseq=max(maxseq,current);
            current=1;
        }
    }
    return maxseq;
}