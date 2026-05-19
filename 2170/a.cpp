#include <bits/stdc++.h>

using namespace std;

int f(int i, int j, int n) { return i * n + j + 1; }

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int res = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        int s = f(i, j, n);
        if (i + 1 < n) s += f(i + 1, j, n);
        if (j - 1 >= 0) s += f(i, j - 1, n);
        if (i - 1 >= 0) s += f(i - 1, j, n);
        if (j + 1 < n) s += f(i, j + 1, n);
        res = max(res, s);
      }
    }
    cout << res << endl;
  }
  return 0;
}