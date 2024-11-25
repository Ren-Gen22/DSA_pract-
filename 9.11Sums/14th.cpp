#include<bits/stdc++.h>
using namespace std;

bool areAna(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    unordered_map<char, int> countMap;
    for (char c : s1) {
        countMap[c]++;
    }
    for (char c : s2) {
        countMap[c]--;
    }
    for (auto& entry : countMap) {
        if (entry.second != 0) {
            return false;
        }
    }
    return true;
}

int main(){
    string a="geeks",b="keegs";
    cout<<areAna (a,b);
    return 0;
}
