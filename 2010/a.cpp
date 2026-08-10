#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int sum = 0;
    int sign = 1;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      sum += sign * a;
      sign *= -1;
    }
    cout << sum << endl;
  }
  return 0;
}
