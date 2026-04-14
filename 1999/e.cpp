#include <bits/stdc++.h>

using namespace std;

long long log3(int n) {
  int c = 0;
  while (n) {
    c++;
    n /= 3;
  }
  return c;
}

long long pow3(int n, int e) {
  long long p = 1;
  for (int i = 0; i < e; i++) {
    p *= n;
  }
  return p;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long l, r;
    cin >> l >> r;
    long long int c = log3(l);
    long long int k = log3(l);
    while (l <= r) {
      c += k * (min(r, pow3(3, k) - 1) - l + 1);
      l = pow3(3, k);
      k += 1;
    }
    cout << c << endl;
  }
  return 0;
}