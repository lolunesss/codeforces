#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> ns(n);
    for (int i = 0; i < n; i++) {
      cin >> ns[i];
    }
    bool all_equal = true;
    for (int i = 1; i < n; i++) {
      if (ns[i] != ns[0]) {
        all_equal = false;
        break;
      }
    }
    if (all_equal) {
      cout << -1 << endl;
      continue;
    }
    int ch = ns[0];
    int c = 0;
    int m = INT_MAX;
    for (int i = 0; i < n; i++) {
      // cout << "c :" << c << endl;
      if (ns[i] == ch) {
        c++;
      } else {
        m = min(m, c);
        c = 0;
      }
    }
    m = min(m, c);
    cout << m << endl;
  }
  return 0;
}