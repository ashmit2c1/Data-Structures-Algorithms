#include<bits/stdc++.h>
using namespace std;
// FIND THE MISSING ELEMENT 
int findMissing(vector<int>&arr){
    int n=arr.size()+1;
    int sum = n*(n+1)/2;
    int tot=0;
    for(int i=0;i<arr.size();i++){
        tot+=arr[i];
    }
    return sum-tot;
}