#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long int x, n;
    cin >> x >> n;
    long long int s = (n / 4 * 4) + 1;
    long long delta = 0;
    if (n % 4 >= 1) {
      delta += s;
    }
    if (n % 4 >= 2) {
      delta -= (s + 1);
    }
    if (n % 4 == 3) {
      delta -= (s + 2);
    }
    if (x & 1) {
      cout << x + delta << endl;
    } else {
      cout << x - delta << endl;
    }
  }
  return 0;
}