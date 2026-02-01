#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int o = n;
  int p = 1;
  while (n >= 10) {
    p *= 10;
    n /= 10;
  }
  cout << (n + 1) * p - o << endl;

  return 0;
}