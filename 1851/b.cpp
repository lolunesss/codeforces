#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> ns(n);
    vector<int> copy;
    for (auto &x: ns) {
      cin >> x;
      copy.push_back(x);
    }
    sort(ns.begin(), ns.end());
    bool possible = true;
    for (int i = 0; i < n; i++) {
      if ((copy[i] & 1) ^ (ns[i] & 1) == 1) {
        possible = false;
        break;
      }
    }
    cout << (possible ? "YES" : "NO") << endl;
  }
  return 0;
}
