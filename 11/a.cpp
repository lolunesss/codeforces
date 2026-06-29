#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, d;
  cin >> n >> d;
  int prev = 0;
  int c = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (a <= prev) {
      int k = ((prev + 1 - a) + d - 1) / d;
      c += k;
      prev = a + k * d;
    } else {
      prev = a;
    }
    // cout << a << " " << prev << endl;
  }
  cout << c << endl;
  return 0;
}