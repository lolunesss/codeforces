#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> ns(n);
    for (int i = 0; i < n; i++) {
      cin >> ns[i];
    }
    sort(ns.begin(), ns.end());
    int count = 1;
    int max_c = 1;
    for (int i = 0; i < n - 1; i++) {
      if (abs(ns[i] - ns[i + 1]) > k) {
        count = 1;
      } else {
        count += 1;
      }
      max_c = max(max_c, count);
    }
    cout << n - max_c << endl;
  }
  return 0;
}