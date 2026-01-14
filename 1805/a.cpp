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
    int x = 0;
    for (int i = 0; i < n; i++) {
      cin >> a;
      x = x ^ a;
    }
    if (n % 2 == 1) {
      cout << x << endl;
    } else if (n % 2 == 0) {
      if (x == 0) {
        cout << 0 << endl;
      } else {
        cout << -1 << endl;
      }
    }
  }
  return 0;
}