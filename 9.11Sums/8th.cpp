#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> overlInterval(vector<pair<int, int>> arr) {
    sort(arr.begin(), arr.end());
    vector<pair<int, int>> res;
    res.push_back(arr[0]);
    for (int i = 1; i < arr.size(); i++) {
        pair<int, int>& last = res.back();
        if (arr[i].first <= last.second) {
            last.second = max(last.second, arr[i].second);
        } else {
            res.push_back(arr[i]);
        }
    }
    return res;
}

int main() {
    vector<pair<int, int>> arr = {{1, 3}, {2, 4}, {6, 8}, {9, 10}};
    vector<pair<int, int>> res = overlInterval(arr);
    for (auto& i : res) {
        cout << "[" << i.first << ", " << i.second << "] ";
    }
        return 0;
}

