#include<bits/stdc++.h>
using namespace std;
// SORT 0 1 2 
void sort(vector<int>&arr){
    int one=0;
    int two=0;
    int zero=0;
    for(int i=0;i<arr.size();i++){
        int element = arr[i];
        if(element==0){
            zero++;
        }
        if(element==1){
            one++;
        }
        if(element==2){
            two++;
        }
    }
    int index=0;
    while(zero--){
        arr[index]=0;
        index++;
    }
    while(one--){
        arr[index]=1;
        index++;
    }
    while(two--){
        arr[index]=2;
        index++;
    }
}