#include <bits/stdc++.h>

using namespace std;

bool is_prime(long long n) {
  for (long long i = 2; i * i <= n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long a, b;
    cin >> a >> b;
    if (a - b > 1) {
      cout << "NO" << endl;
      continue;
    }
    if (is_prime(a + b)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}