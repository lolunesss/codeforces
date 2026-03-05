#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int mini = INT_MAX;
    int sum = 0;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      sum += a;
      if (a % 2 == 1) {
        int count = 0;
        while (a % 2 != 0) {
          count++;
          a /= 2;
        }
        mini = min(mini, count);
      } else {
        int count = 0;
        while (a % 2 != 1) {
          count++;
          a /= 2;
        }
        mini = min(mini, count);
      }
    }
    if (sum % 2 == 0) {
      cout << 0 << endl;
    } else {
      cout << mini << endl;
    }
  }
  return 0;
}