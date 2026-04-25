#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int zc = 0, oc = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '0')
        zc++;
      else
        oc++;
    }
    int t = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '0' && oc > 0) {
        t++;
        oc--;
      } else if (s[i] == '1' && zc > 0) {
        t++;
        zc--;
      } else {
        break;
      }
    }
    cout << s.size() - t << endl;
  }
  return 0;
}