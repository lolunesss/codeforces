#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n, k, b, s;
    cin >> n >> k >> b >> s;
    if (s < k * b) {
      cout << -1 << endl;
      continue;
    }
    if (s >= k * b) {
      long long d = s - k * b;
      if (d > n * (k - 1)) {
        cout << -1 << endl;
        continue;
      }
      long long r = d;
      for (int i = 0; i < n - 1; i++) {
        cout << 0 + min(k - 1, r) << " ";
        r -= min(k - 1, r);
      }
      cout << k * b + r << endl;
    }
  }
  return 0;
}