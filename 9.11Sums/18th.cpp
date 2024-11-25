#include<bits/stdc++.h>
#include <unordered_map>

using namespace std;

int main(){
    vector<int> arr{13 , 7, 6 , 12};
    int n=4;
    unordered_map<int,int> m;
    m[arr[n-1]]=-1;
    for (int i=0;i<n-1;i++){
        bool flag=false;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                m[arr[i]]=arr[j];
                flag=true;
            }
        }
        if(!flag) m[arr[i]]=-1;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" : "<<m[arr[i]]<<endl;
    }
}
