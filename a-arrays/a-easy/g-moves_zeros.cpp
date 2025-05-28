#include<bits/stdc++.h>
using namespace std;
// MOVE ZEROES TO END method 1 
void moveZeroes(vector<int>&arr){
    int zero=0;
    vector<int>temp;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            zero++;
        }else{
            temp.push_back(arr[i]);
        }
    }
    for(int i=0;i<zero;i++){
        temp.push_back(0);
    }
    int index=0;
    for(int i=0;i<temp.size();i++){
        arr[index]=temp[i];
        index++;
    }
}
// MOVE ZEROES TO END method 2 
void moveZeroes2(vector<int>&arr){
    int index=0;
    for(int i=0;i<arr.size();i++){
        int element = arr[i];
        if(element!=0){
            arr[index]=element;
            index++;
        }
    }
    for(int i=index;i<arr.size();i++){
        arr[i]=0;
    }
}