#include<bits/stdc++.h>
using namespace std;

string sub(const string& s, int l, int r) {
    while (l >= 0 && r < s.size() && s[l] == s[r]) {
        l--;
        r++;
    }
    return s.substr(l + 1, r - l - 1);
}

string longestPal(string s) {
    string res = "";
    for (int i = 0; i < s.size(); i++) {
        string tmp = sub(s, i, i);
        if (tmp.size() > res.size()) {
            res = tmp;
        }
        tmp = sub(s, i, i + 1);
        if (tmp.size() > res.size()) {
            res = tmp;
        }
    }
    return res;
}

int main() {
    string s = "babad";
    cout <<longestPal(s);
    return 0;
}


