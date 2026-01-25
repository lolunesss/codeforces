#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k, a;
    cin >> n >> k;
    int res = 0;
    for (int i = 0; i < n; i++) {
      cin >> a;
      if (a == k) {
        res = 1;
      }
    }
    cout << (res == 1 ? "YES" : "NO") << endl;
  }

  return 0;
}