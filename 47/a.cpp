#include <bits/stdc++.h>

using namespace std;

int main() {
  int k;
  cin >> k;

  int r = sqrt(8 * k + 1);
  if (r * r == 8 * k + 1 && (r - 1) % 2 == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}