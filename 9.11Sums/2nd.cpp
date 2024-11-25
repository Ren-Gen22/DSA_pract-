#include<bits/stdc++.h>
#include <climits>
using namespace std;
int maxProd(vector<int> arr){
    int n=arr.size(),m=INT_MIN;
    int l=1,r=1;
    for(int i=0;i<n;i++){
        if(l==0)
            l=1;
        if(r==0)
            r=1;
        l*=arr[i];
        r*=arr[n-i-1];
        m=max(m,max(l,r));
    }
    return m;
}
int main(){
    vector<int> arr{-2,6,-3,-10,0,60};
    cout<<maxProd(arr);
    return 0;
}
