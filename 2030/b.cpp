#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  cin >> c;
  while (c--) {
    int n;
    cin >> n;
    if (n == 1) {
      cout << "0" << endl;
      continue;
    }
    cout << "1";
    for (int i = 0; i < n - 1; i++) {
      cout << "0";
    }
    cout << endl;
  }
  return 0;
}
