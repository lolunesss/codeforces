#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<int> ns(n), ms(m);
    for (auto &x: ns) {
      cin >> x;
    }
    for (auto &x: ms) {
      cin >> x;
    }
    cout << n + m << endl;
  }
  return 0;
}
