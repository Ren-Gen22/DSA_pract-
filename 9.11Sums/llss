#include<bits/stdc++.h>
using namespace std;
int maxSumSubarray(vector<int> arr){
    int maxSum=arr[0],currSum=arr[0],n=arr.size();
    for(int i=0;i<n;i++){
        maxSum=max(maxSum+arr[i],arr[i]);
        currSum=max(currSum,maxSum);
    }
    return currSum;
}
int main(){
    //vector<int> arr{2,3,-8,7,-1,2,3};//op 11
    vector<int> arr{-2,-4};
    cout<<maxSumSubarray(arr);
    return 0;
}
