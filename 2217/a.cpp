#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> ns(n);
    bool can_use = false;
    int s = 0;
    for (auto& x : ns) {
      cin >> x;
      s += x;
    }
    int s2 = k * n;
    if (s % 2 == 1) {
      cout << "YES" << endl;
    } else {
      if (s2 & 1 == 1) {
        cout << "NO" << endl;
      } else {
        cout << "YES" << endl;
      }
    }
  }
  return 0;
}