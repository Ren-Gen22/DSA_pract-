#include<bits/stdc++.h>
using namespace std;

void chk(stack<int>& s, int count, int size) {
    if (count == size / 2) {
        s.pop();
        return;
    }
    int t = s.top();
    s.pop();
    chk(s, count + 1, size);
    s.push(t);
}

void delMid(stack<int>& s) {
    int size = s.size();
    if (size == 0) return; 
    chk(s, 0, size);
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    delMid(s);
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
