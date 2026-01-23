#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int xdiff = c - a;
    int ydiff = d - b;
    if (ydiff < xdiff || ydiff < 0) {
      cout << -1 << endl;
    } else {
      cout << 2 * ydiff - xdiff << endl;
    }
  }

  return 0;
}