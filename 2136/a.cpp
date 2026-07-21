#include <bits/stdc++.h>

using namespace std;

bool score_possible(int a, int b) {
  int c = min(a, b);
  int d = max(a, b);
  if (d <= 2 * (c + 1)) return true;
  return false;
}

int main() {
  int c;
  cin >> c;
  while (c--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (score_possible(a, b) && score_possible(c - a, d - b)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
