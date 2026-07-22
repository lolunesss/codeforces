#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  cin >> c;
  while (c--) {
    int n;
    cin >> n;
    vector<int> ns(n);
    for (auto &x: ns) {
      cin >> x;
    }
    bool possible = false;
    for (int i = 0; i < n - 1; i++) {
      int mi = min(ns[i], ns[i + 1]);
      int ma = max(ns[i], ns[i + 1]);
      if (2 * mi > ma) {
	possible = true;
      }
    }
    cout << (possible ? "YES" : "NO") << endl;
  }
  return 0;
}
