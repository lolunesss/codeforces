#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long int n, k, x;
    cin >> n >> k >> x;
    long long int mi = k * (k + 1) / 2;
    long long int re = (n - k) * (n - k + 1) / 2;
    long long int ma = n * (n + 1) / 2 - re;
    if (x >= mi && x <= ma) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}