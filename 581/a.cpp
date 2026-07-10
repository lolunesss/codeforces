#include <bits/stdc++.h>

using namespace std;

int main() {
  int r, b;
  cin >> r >> b;
  int d = min(r, b);
  cout << d << " " << (r - d) / 2 + (b - d) / 2 << endl;
  return 0;
}