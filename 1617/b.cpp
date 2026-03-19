#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    n -= 1;
    if (n & 1) {
      cout << n / 2 << " " << n / 2 + 1 << " " << 1 << endl;
    } else {
      int k = n / 2;
      if (k & 1) {
        cout << k - 2 << " " << k + 2 << " " << 1 << endl;
      } else {
        cout << k - 1 << " " << k + 1 << " " << 1 << endl;
      }
    }
  }
  return 0;
}
