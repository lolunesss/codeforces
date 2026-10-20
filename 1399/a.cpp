#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> as(n);
    for (auto &a: as) {
      cin >> a;
    }
    sort(as.begin(), as.end());
    bool possible = true;
    for (int i = 0; i < n - 1; i++) {
      if (as[i + 1] - as[i] > 1) {
        possible = false;
        break;
      }
    }
    cout << (possible ? "YES" : "NO") << endl;
  }
  return 0;
}
