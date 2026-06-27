#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int l, a, b;
    cin >> l >> a >> b;
    int m = a;
    int n = 1;
    while ((a + n * b) % l != a) {
      m = max(m, (a + n * b) % l);
      n++;
    }
    cout << m << endl;
  }
  return 0;
}