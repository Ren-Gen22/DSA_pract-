#include<bits/stdc++.h>
using namespace std;

string commonPre(vector<string> s) {
    int n = s.size();
    if (n == 0) return "";  
    if (n == 1) return s[0];  
    string c;  
    int sn = s[0].size();  
    for (int i = 0; i < sn; i++) {
        char curr = s[0][i];
        bool flag = true;
        for (int j = 1; j < n; j++) {  
             if (i >= s[j].size() || s[j][i] != curr) {
                flag = false;
                break;
            }
        }
        if (flag) {
            c += curr;
        } else {
            break;  
        }
    }
    return c;
}
int main(){
    vector<string> arr{"geeksforgeeks", "geeks", "geek", "geezer"};
    cout<<commonPre(arr);
    return 0;
}
