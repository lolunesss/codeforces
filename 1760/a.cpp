#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;
    int mi = min(a, min(b, c));
    int ma = max(a, max(b, c));
    cout << (a + b + c - mi - ma) << endl;
  }
  return 0;
}
