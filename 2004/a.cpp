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
    sort(ns.begin(), ns.end());
    if (n == 2 && ns[1] - ns[0] > 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
