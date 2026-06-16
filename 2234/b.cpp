#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;

    if (n == 10) {
      cout << -1 << endl;
      continue;
    }
    long long r = n % 12;
    long long q = n / 12;
    if (r == 10) {
      cout << 22 << " " << (q - 1) * 12 << endl;
    } else {
      cout << r << " " << q * 12 << endl;
    }
  }
  return 0;
}