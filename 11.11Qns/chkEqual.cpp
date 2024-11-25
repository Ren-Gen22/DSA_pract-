#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to check if two arrays are equal or not.
    bool check(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> freq;
        for(auto i : arr1){
            freq[i]++;
        }
        for (auto i : arr2){
            if(freq.find(i)==freq.end()) return false;
            if(freq[i]==0) return false;
            freq[i]--;
        }
        return true;
    }
};

int main(){
    vector<int> a{1,2,5}, b{2,4,5};
    Solution s;
    cout<<s.check(a,b);
    return 0;
}
