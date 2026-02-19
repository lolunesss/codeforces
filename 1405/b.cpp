#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    long long s = 0;
    long long a = 0;
    long long res = 0;
    for (int i = 0; i < n; i++) {
      cin >> a;
      res = min(s, res);
      s += a;
    }
    cout << (res < 0 ? -res : res) << endl;
  }
  return 0;
}