#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n, x, y, z;
    cin >> n >> x >> y >> z;
    long long a = (n + (x + y - 1)) / (x + y);
    long long b = (n + 10 * y * z + x + 10 * y - 1) / (x + 10 * y);
    // cout << a << ' ' << b << endl;
    if (b >= z) {
      cout << min(a, b) << endl;
    } else {
      cout << a << endl;
    }
  }
  return 0;
}