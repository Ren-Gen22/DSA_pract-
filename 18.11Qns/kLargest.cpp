#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        priority_queue<int,vector<int>,greater<int>> minHeap;
        vector<int> res;
        for(int i:arr){
            if(minHeap.size()<k)
            minHeap.push(i);
            else if (i>minHeap.top()){
                minHeap.pop();
                minHeap.push(i);
            }
        }
        while(!minHeap.empty()){
            res.push_back(minHeap.top());
            minHeap.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};



int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.kLargest(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
