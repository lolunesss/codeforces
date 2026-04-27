#include <bits/stdc++.h>

using namespace std;

bool is_ok(long long a, long long b, long long c) {
  if (a == b && b == c) return true;
  long long d = c - b;
  long long x = b - d;
  if (x > 0 && x % a == 0) return true;

  d = (a + c) / 2;
  if ((a + c) % 2 == 0 && d % b == 0) return true;

  d = b - a;
  x = b + d;
  if (x > 0 && x % c == 0) return true;

  return false;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long a, b, c;
    cin >> a >> b >> c;
    if (is_ok(a, b, c)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}