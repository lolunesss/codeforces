#include <bits/stdc++.h>

using namespace std;

bool is_power_of_two(int n) {
  while (n % 2 == 0) n /= 2;
  return n == 1;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    int l = 0, r = 0;
    for (int i = 0; i < n; i++) {
      int a, b, c, d;
      cin >> a >> b >> c >> d;
      if (b == c) l++;
      if (a == d) r++;
    }
    if (l >= 1 && m % 2 == 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}