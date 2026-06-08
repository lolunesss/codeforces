#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long a, b, x, y;
    cin >> a >> b >> x >> y;
    if (a - b == 1 && a % 2 == 1) {
      cout << y << endl;
      continue;
    }
    if (b < a) {
      cout << -1 << endl;
      continue;
    }
    int sc = (b - a) * x;
    int s = a % 2 == 0 ? a : a + 1;
    int ne = ((b - s) + 1) / 2;
    int mc = ne * y + (b - a - ne) * x;
    cout << (sc > mc ? mc : sc) << endl;
  }
  return 0;
}