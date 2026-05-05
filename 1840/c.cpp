#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n + 1);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    a[n] = q + 1;
    long long int c = 0;
    long long int res = 0;
    for (int i = 0; i < n + 1; i++) {
      if (a[i] <= q) {
        c++;
      } else {
        if (c >= k) {
          res += (c - k + 1) * (c - k + 2) / 2;
        }
        c = 0;
      }
    }
    cout << res << endl;
  }
  return 0;
}