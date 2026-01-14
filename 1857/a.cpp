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
      x += a;
    }
    if (x % 2 == 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}