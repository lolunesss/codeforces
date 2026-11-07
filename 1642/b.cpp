#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> ns(n);
    map<int, bool> m;
    for (auto &x: ns) {
      cin >> x;
      m[x] = true;
    }
    int si = m.size();
    for (int i = 0; i < n; i++) {
      if (i < m.size()) {
        cout << si << " ";
      } else {
        cout << i + 1 << " ";
      }
    }
    cout << endl;
  }
  return 0;
}
