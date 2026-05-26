#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long x, y;
    cin >> x >> y;
    if (y > 0) {
      x -= 2 * y;
    } else if (y < 0) {
      x += 4 * y;
    }
    if (x >= 0 && x % 3 == 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}