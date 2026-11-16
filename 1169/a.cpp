#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a, x, b, y;
  cin >> n >> a >> x >> b >> y;
  int cx = a, cy = b;
  int possible = false;
  for (int i = 0; i < n; i++) {
    cx = cx == n ? 1 : cx + 1; 
    cy = cy == 1 ? n : cy - 1;
    if (cx == cy) possible = true;
    if (cx == x || cy == y) break;
  }
  cout << (possible ? "YES" : "NO") << endl;
  return 0;
}
