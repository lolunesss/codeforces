#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long int ma = 0, s = 0;
    long long int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
      long long int a;
      cin >> a;
      ma += (a + x - 1) / x;
      s += a;
    }
    cout << (s + (x - 1)) / x << " " << ma << endl;
  }
  return 0;
}