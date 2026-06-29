#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int chances = 6 - max(a, b) + 1;
  int g = __gcd(chances, 6);
  cout << (chances / g) << "/" << (6 / g) << endl;
  return 0;
}