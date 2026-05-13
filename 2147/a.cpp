#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x, y;
    cin >> x >> y;
    if (x < y) {
      cout << 2 << endl;
    } else if (x == y) {
      cout << -1 << endl;
    } else {
      if (y < x - 1 && y > 1) {
        cout << 3 << endl;
      } else {
        cout << -1 << endl;
      }
    }
  }
  return 0;
}