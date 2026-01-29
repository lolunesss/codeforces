#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    int n2 = 0, n3 = 0;
    while (n % 2 == 0) {
      n2++;
      n /= 2;
    }
    while (n % 3 == 0) {
      n3++;
      n /= 3;
    }
    if (n > 1) {
      cout << -1 << endl;
    } else {
      if (n2 <= n3) {
        cout << n3 + (n3 - n2) << endl;
      } else {
        cout << -1 << endl;
      }
    }
  }
  return 0;
}