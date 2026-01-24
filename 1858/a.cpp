#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;
    int k = (c + 1) / 2;
    a += k;
    b += (c - k);
    if (a > b) {
      cout << "First" << endl;
    } else {
      cout << "Second" << endl;
    }
  }

  return 0;
}