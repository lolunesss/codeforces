#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<long long> ns(n);
    for (int i = 0; i < n; i++) {
      cin >> ns[i];
    }
    sort(ns.begin(), ns.end(), ::greater<long long>());
    bool exists = true;
    for (int i = 1; i < n; i++) {
      if (ns[i] == ns[i - 1]) exists = false;
    }
    if (!exists) {
      cout << -1 << endl;
    } else {
      for (auto x : ns) {
        cout << x << " ";
      }
      cout << endl;
    }
  }
  return 0;
}