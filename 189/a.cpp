#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a, b, c;
  int maxi = 0;
  cin >> n >> a >> b >> c;
  for (int i = 0; i * a <= n; i++) {
    for (int j = 0; j * b <= n; j++) {
      int x = i * a + j * b;
      if (n - x >= 0 && (n - x) % c == 0) {
        maxi = max(maxi, i + j + (n - x) / c);
      }
    }
  }
  cout << maxi << endl;
  return 0;
}
