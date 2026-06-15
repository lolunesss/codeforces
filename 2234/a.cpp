#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<long long> as(n);
    for (auto& a : as) {
      cin >> a;
    }
    sort(as.begin(), as.end(), greater());
    bool euclid = true;
    for (int i = 2; i < n; i++) {
      if (as[i - 2] % as[i - 1] != as[i]) {
        euclid = false;
        break;
      }
    }
    if (!euclid) {
      cout << -1 << endl;
      continue;
    }
    cout << as[0] << " " << as[1] << endl;
  }
}