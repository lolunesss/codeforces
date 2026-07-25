#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  cin >> c;
  while (c--) {
    long long a, b;
    cin >> a >> b;
    if (b < a) {
      cout << a << endl;
      continue;
    }
    long long x = b - a;
    if (x <= a) {
      cout << a - x << endl;
    } else {
      cout << 0 << endl;
    }
  }
  return 0;
}
