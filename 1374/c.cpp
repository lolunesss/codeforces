#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;
    int c = 0;
    int r = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == ')') {
        if (c > 0) {
          c--;
        } else {
          r++;
        }
      } else if (s[i] == '(') {
        c++;
      }
    }
    cout << r << endl;
  }
  return 0;
}