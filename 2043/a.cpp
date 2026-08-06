#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  cin >> c;
  while (c--) {
    long long n;
    cin >> n;
    long long c = 1;
    while (n > 3) {
      n = n / 4;
      c = c * 2;
    }
    cout << c << endl;
  }
  return 0;
}
