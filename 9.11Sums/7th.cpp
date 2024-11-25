#include<bits/stdc++.h>
#include <climits>
using namespace std;

int minDiffCandies(vector<int> arr, int m){
    sort(arr.begin(),arr.end());
    int n=arr.size(),d=INT_MAX;
    for(int i=0;i<n-m;i++){
        //cout<<i<<i+m<<endl;
        d=min(d,arr[i+m-1]-arr[i]);
    }
    return d;
}

int main(){
    vector<int> arr{7, 3, 2, 4, 9, 12, 56};
    int m=5;
    cout<<minDiffCandies(arr, m);
    return 0;
}
