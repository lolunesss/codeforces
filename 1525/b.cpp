#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> ns(n);
    for (auto &x: ns) {
      cin >> x;
    }
    if (is_sorted(ns.begin(), ns.end())) {
      cout << 0 << endl;
    } else if (ns[0] == n && ns[ns.size() - 1] == 1) {
      cout << 3 << endl;
    } else if (ns[0] == 1 || ns[n - 1] == n) {
      cout << 1 << endl;
    } else {
      cout << 2 << endl;
    }
  }
  return 0;
}
