#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    vector<string> b(10);
    for (int i = 0; i < 10; i++) {
      cin >> b[i];
    }

    int c = 0;
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        if (b[i][j] == 'X') {
          int x = min(min(min(i, 9 - i), j), 9 - j);
          c += (x + 1);
        }
      }
    }
    cout << c << endl;
  }
  return 0;
}