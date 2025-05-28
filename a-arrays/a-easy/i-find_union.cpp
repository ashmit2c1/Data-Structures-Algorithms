#include<bits/stdc++.h>
using namespace std;
// FIND THE UNION OF TWO ARRAYS
vector<int>findUnion(vector<int>&arr1,vector<int>&arr2){
    vector<int>ans;
    set<int>st;
    for(int i=0;i<arr1.size();i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<arr2.size();i++){
        st.insert(arr2[i]);
    }
    for(auto it = st.begin();it!=st.end();it++){
        ans.push_back(*it);
    }
    return ans;
}
// FIND THE UNION OF TWO ARRAYS
vector<int>findUnion2(vector<int>&arr1,vector<int>&arr2){
    vector<int>ans;
    int i=0;
    int j=0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<=arr2[j]){
            if(ans.size()==0 || ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++;
        }else{
            if(ans.size()==0 || ans.back()!=arr2[j]){
                ans.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<arr1.size()){
        if(ans.size()==0 || ans.back()!=arr1[i]){
            ans.push_back(arr1[i]);
        }
        i++;
    }
    while(j<arr2.size()){
        if(ans.size()==0 || ans.back()!=arr2[j]){
            ans.push_back(arr2[j]);
        }
        j++;
    }
    return ans;
}