#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (2 * k > n) {
      cout << -1 << endl;
      continue;
    }
    int c = 0;
    for (int i = 0; i < k; i++) {
      if (s[i] == 'L') c++;
      if (s[n - 1 - i] == 'R') c++;
    }
    cout << c << endl;
  }
  return 0;
}
