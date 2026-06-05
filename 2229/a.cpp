#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> ns(n);
    for (auto& a : ns) {
      cin >> a;
    }
    int r = INT_MAX;
    for (int i = 1; i <= 1000; i++) {
      int ma = 0;
      for (int j = 0; j < n; j++) {
        ma = max(ma, i - ns[j] > 0 ? i - ns[j] : ns[j] - i);
      }
      r = min(r, ma);
    }
    cout << r << endl;
  }
  return 0;
}