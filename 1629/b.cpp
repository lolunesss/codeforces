#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int l, r, k;

    cin >> l >> r >> k;
    if (l == r) {
      if (l == 1) {
        cout << "NO" << endl;
      } else {
        cout << "YES" << endl;
      }

      continue;
    }
    int evens = r / 2 - (l - 1) / 2;
    int odds = r - l + 1 - evens;
    if (odds > k) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
  return 0;
}