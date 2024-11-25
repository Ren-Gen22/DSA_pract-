#include<bits/stdc++.h>
using namespace std;
int maxVol(vector<int> arr){
    int left=0,n=arr.size(),right=n;
    int maxi=INT_MIN;
    while(left<right){
        int w = right - left;
        int h = min(arr[left], arr[right]);
        int area = h * w;
        maxi = max(maxi, area);
        if(arr[left] < arr[right]) left++;
        else if(arr[left] > arr[right]) right--;
        else {
            left++;
            right--;
        }
    }
    return maxi;
}

int main(){
    vector<int> arr{3,1,2,4,5};
    cout<<maxVol(arr);
    return 0;
}
