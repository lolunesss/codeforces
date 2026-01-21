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
    sort(ns.begin(), ns.end());
    if (ns.front() == ns.back()) {
      cout << "NO" << endl;
      continue;
    }
    cout << "YES" << endl;
    if (ns[n - 1] == ns[n - 2]) {
      int t = ns[n - 2];
      ns[n - 2] = ns[0];
      ns[0] = t;
    }
    for (int i = n - 1; i >= 0; i--) {
      cout << ns[i];
      if (i != 0) cout << " ";
    }
    cout << endl;
  }
  return 0;
}