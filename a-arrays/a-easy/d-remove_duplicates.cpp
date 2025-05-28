#include<bits/stdc++.h>
using namespace std;
// REMOVE DUPLICATES method 1 
int removeDuplicates(vector<int>&arr){
    set<int>st;
    for(int i=0;i<arr.size();i++){
        st.insert(arr[i]);
    }
    return st.size();
}
// REMOVE DUPLICATES method 2 
int removeDuplicatse2(vector<int>&arr){
    int k=0;
    for(int i=0;i<arr.size();i++){
        if(k==0 || arr[i]!=arr[k-1]){
            arr[k]=arr[i];
            k++;
        }
    }
    return k;
}
