#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  cin >> c;
  while (c--) {
    long long x, y;
    cin >> x >> y;
    if (x % y == 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}