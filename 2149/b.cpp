#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> ns(n);
    for (auto& a : ns) {
      cin >> a;
    }
    sort(ns.begin(), ns.end());
    int res = INT_MIN;
    for (int i = 0; i < n / 2; i++) {
      res = max(res, ns[2 * i + 1] - ns[2 * i]);
    }
    cout << res << endl;
  }
  return 0;
}