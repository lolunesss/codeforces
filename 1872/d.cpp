#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long int n, x, y;
    cin >> n >> x >> y;
    long long int l = lcm(x, y);
    long long ny = n / y - n / l;
    long long nx = n / x - n / l;

    long long ns = n - nx;
    long long int sy = ny * (ny + 1);

    long long int sx = (nx * (ns + 1 + n));
    cout << (sx - sy) / 2 << endl;
  }
  return 0;
}