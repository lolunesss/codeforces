#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int an, bn;
    string a, b;
    cin >> an >> a >> bn >> b;
    string o;
    cin >> o;
    string res = a;
    for (int i = 0; i < bn; i++) {
      if (o[i] == 'V') {
        res = b[i] + res;
      } else {
        res += b[i];
      }
    }
    cout << res << endl;
  }
  return 0;
}
