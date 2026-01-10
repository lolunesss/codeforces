#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int prev = -1, a;
    bool is_sorted = true;
    for (int i = 0; i < n; i++) {
      cin >> a;
      if (a < prev) {
        is_sorted = false;
      }
      prev = a;
    }
    if (k > 1 || is_sorted) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}