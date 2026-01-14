#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, a;
    cin >> n;
    int parity = -1;
    int c = 1;
    int res = 0;
    for (int i = 0; i < n; i++) {
      cin >> a;
      if (a % 2 == parity) {
        c++;
      } else {
        res += c - 1;
        c = 1;
        parity = a % 2;
      }
    }
    if (c > 1) res += c - 1;
    cout << res << endl;
  }
  return 0;
}