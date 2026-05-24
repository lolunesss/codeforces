#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, y, r;
    cin >> n >> y >> r;
    int re = y / 2 + r;
    cout << min(n, re) << endl;
  }
  return 0;
}