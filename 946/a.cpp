#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  long long b = 0;
  long long c = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (a > 0) {
      b += a;
    } else {
      c += a;
    }
  }
  cout << b - c << endl;
  return 0;
}
