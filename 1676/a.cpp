#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int l = s[0] + s[1] + s[2];
    int r = s[4] + s[5] + s[3];
    cout << (r == l ? "YES" : "NO") << endl;
  }
  return 0;
}
