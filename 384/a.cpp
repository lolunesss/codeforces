#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  cout << (n + 1) / 2 * ((n + 1) / 2) + n / 2 * (n / 2) << endl;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i % 2 == 0) {
        cout << (j % 2 == 0 ? "C" : ".");
      } else {
        cout << (j % 2 == 1 ? "C" : ".");
      }
    }
    cout << endl;
  }
  return 0;
}