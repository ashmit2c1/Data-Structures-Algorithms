#include<bits/stdc++.h>
using namespace std;
// GIVEN THE ROW NUMBER OF A PASCAL TRIANGLE GET THAT ROW 
vector<int>getRow(int rowIndex){
    rowIndex++;
    vector<int>ans;
    ans.push_back(1);
    long long current = 1;
    for(int i=1;i<rowIndex;i++){
        current*=(rowIndex-i);
        current/=i;
        ans.push_back(current);
    }
    return ans;
}