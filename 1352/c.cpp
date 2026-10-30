#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n, k;
    cin >> n >> k;
    long long q = k / (n - 1);
    long long r = k % (n - 1);
    if (r == 0) r = -1;
    long long res = q * n + r;
    cout << res << endl;
  }
  return 0;
}
