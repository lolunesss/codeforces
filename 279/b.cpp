#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, t;
  cin >> n >> t;
  vector<int> bs(n);
  for (auto &b: bs) {
    cin >> b;
  }
  int res = 0;
  int l = 0, r = 0;
  int s = 0;
  for (int i = 0; i < n; i++) {
    while (r < n && s + bs[r] <= t) {
      s += bs[r];
      r++;
    }
    res = max(res, r - l);
    // cout << s << " : " << res << " " << r << " " << l << endl;
    s -= bs[l];
    l++;
  }
  cout << res << endl;
  return 0;
}
