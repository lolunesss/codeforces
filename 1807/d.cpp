#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, q;
    cin >> n >> q;
    vector<long long int> ns(n + 1, 0);
    for (int i = 1; i <= n; i++) {
      long long int a;
      cin >> a;
      ns[i] = ns[i - 1] + a;
    }
    long long ts = ns[n];
    for (int i = 0; i < q; i++) {
      long long int l, r, k;
      cin >> l >> r >> k;
      long long int rs = (r - l + 1) * k;
      long long as = ns[r] - ns[l - 1];
      if ((ts - as + rs) & 1) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }
  }
  return 0;
}