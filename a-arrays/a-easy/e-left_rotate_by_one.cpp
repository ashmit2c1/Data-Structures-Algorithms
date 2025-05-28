#include<bits/stdc++.h>
using namespace std;
// LEFT ROTATE AN ARRAY BY ONE PLACE 
void leftRotate(vector<int>&arr){
    int element = arr[0];
    int k=0;
    for(int i=1;i<arr.size();i++){
        arr[k]=arr[i];
        k++;
    }
    arr[arr.size()-1]=element;
}
