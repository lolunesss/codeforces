#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<long long> ns(n);
  for (int i = 0; i < n; i++) {
    cin >> ns[i];
  }
  long long m = LONG_LONG_MAX;
  for (int i = 0; i < n; i++) {
    vector<long long> cs(n, 0);
    long long c = 0;
    for (int l = i - 1; l >= 0; l--) {
      long long d = cs[l + 1] / ns[l] - 1;
      c -= d;
      cs[l] = d * ns[l];
    }
    for (int r = i + 1; r < n; r++) {
      long long d = cs[r - 1] / ns[r] + 1;
      c += d;
      cs[r] = d * ns[r];
    }
    m = min(m, c);
  }
  cout << m << endl;
  return 0;
}