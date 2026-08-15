#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> ws(n);
    for (auto &w: ws) {
      cin >> w;
    }
    if (n & 1) {
      cout << "NO" << endl;
      continue;
    }
    int ll = 0;
    int ul = INT_MAX;
    bool possible = true;
    for (int i = 0; i < n; i += 2) {
      if (ws[i] < ws[i + 1]) {
	possible = false;
	break;
      }
      ll = max(ll, ws[i + 1]);
      ul = min(ul, ws[i]);
    }
    possible &= (ul - ll > 1);
    cout << (possible ? "YES" : "NO") << endl;
  }
  return 0;
}
