#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    int cg = 0;
    if (c == 'g') {
      cout << 0 << endl;
      continue;
    }
    while (s[cg] != 'g') {
      cg++;
    }
    cg += n;
    int res = 0;
    for (int i = n - 1; i >= 0; i--) {
      if (s[i] == c) {
        res = max(res, cg - i);
      } else if (s[i] == 'g') {
        cg = i;
      }
    }
    cout << res << endl;
  }
  return 0;
}
