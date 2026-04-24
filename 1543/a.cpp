#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long a, b;
    cin >> a >> b;
    if (a == b) {
      cout << 0 << " " << 0 << endl;
      continue;
    }
    long long d = max(a, b) - min(a, b);
    long long mi = min(a, b);
    long long k = mi / d;

    cout << d << " " << min(mi - k * d, (k + 1) * d - mi) << endl;
  }
  return 0;
}