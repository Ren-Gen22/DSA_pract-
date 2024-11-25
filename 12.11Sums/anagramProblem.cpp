#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        int n=s1.size(),o=s2.size();
        if(n!=o) return false;
        unordered_map<char,int> m;
        for(int i=0;i<n;i++){
            m[s1[i]]++;
            m[s2[i]]--;
        }
        for(int i=0;i<n;i++){
            if(m[s1[i]]!=0) return false;
        }
        return true;
    }
};

int main() {

    int t;

    cin >> t;

    while (t--) {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.areAnagrams(c, d))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
}

