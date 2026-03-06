#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<string> rows(n);
    for (int i = 0; i < n; i++) {
      cin >> rows[i];
    }
    int tc = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        int c = 0;
        c += rows[i][j] == '0';
        c += rows[n - 1 - j][i] == '0';
        c += rows[n - 1 - i][n - 1 - j] == '0';
        c += rows[j][n - 1 - i] == '0';
        tc += min(c, 4 - c);
      }
    }

    cout << tc / 4 << endl;
  }
  return 0;
}