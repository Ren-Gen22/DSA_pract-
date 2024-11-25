#include<bits/stdc++.h>
using namespace std;

bool paranthesisBal(string s) {
    stack<char> p; 
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            p.push('(');
        } else if (s[i] == ')') {
            if (p.empty()) {
                return false; 
            }
            p.pop();
        }
    }
    return p.empty(); 
}

int main(){
    string s="((()))()()";
    cout<<paranthesisBal(s);
    return 0;
}
