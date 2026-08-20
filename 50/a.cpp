#include <bits/stdc++.h>

using namespace std;

int main() {
  int m, n;
  cin >> m >> n;
  int d = (m & 1) && (n & 1) ? 1 : 0;
  cout << (m * n - d) / 2 << endl;

  return 0;
}
