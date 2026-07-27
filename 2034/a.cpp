#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  cin >> c;
  while (c--) {
    int a, b;
    cin >> a >> b;
    int g = __gcd(a, b);
    cout << (a * b) / g << endl;
  }

  return 0;
}
