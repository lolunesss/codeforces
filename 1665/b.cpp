#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> ns(n);
    for (auto& ni : ns) {
      cin >> ni;
    }
    sort(ns.begin(), ns.end());
    int elem = ns[0];
    int ec = 1;
    int mc = 1;
    int me = elem;
    for (int i = 1; i < n; i++) {
      if (ns[i] == elem) {
        ec++;
      } else {
        ec = 1;
        elem = ns[i];
      }
      if (ec > mc) {
        mc = ec;
        me = ns[i];
      }
    }
    int c = mc;
    int cost = 0;
    while (c < n) {
      cost += 1;
      cost += min(c, n - c);
      c += min(c, n - c);
    }
    cout << cost << endl;
  }
  return 0;
}