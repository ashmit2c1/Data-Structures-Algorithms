#include<bits/stdc++.h>
using namespace std;
// MAJORITY ELEMENT WITH ELEMENT APPEARING N/3 TIMES 
vector<int>majority2(vector<int>&arr){
    int cand1=-1;
    int cand2=-1;
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<arr.size();i++){
        int element = arr[i];
        if(element==cand1){
            cnt1++;
        }
        else if(element==cand2){
            cnt2++;
        }
        else if(cnt1==0){
            cand1=element;
            cnt1=1;
        }else if(cnt2==0){
            cand2=element;
            cnt2=1;
        }else{
            cnt1--;
            cnt2--;
        }
    }
    cnt1=0;
    cnt2=0;
    for(int i=0;i<arr.size();i++){
        int element = arr[i];
        if(element==cand1){
            cnt1++;
        }
        if(element==cand2){
            cnt2++;
        }
    }
    vector<int>ans;
    if(cnt1>arr.size()/3){
        ans.push_back(cand1);
    }
    if(cnt2>arr.size()/3){
        ans.push_back(cand2);
    }
    if(cand1==cand2){
        ans.clear();
        ans.push_back(cand1);
    }
    return ans;
}