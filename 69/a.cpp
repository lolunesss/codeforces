#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int sa = 0, sb = 0, sc = 0;
  for (int i = 0; i < n; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    sa += a;
    sb += b;
    sc += c;
  }
  cout << (sa == 0 && sb == 0 && sc == 0 ? "YES" : "NO") << endl;
  return 0;
}
