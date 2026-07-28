#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  cin >> c;
  while (c--) {
    int n;
    cin >> n;
    vector<int> as(n);
    for (auto &a: as) {
      cin >> a;
    }
    int mi = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
      int ma = max(as[i], as[i + 1]);
      if (mi > ma) {
	mi = ma;
      }
    }
    cout << mi - 1 << endl;
  }
  return 0;
}
