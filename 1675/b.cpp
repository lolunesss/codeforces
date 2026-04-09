#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> ns(n);
    for (int i = 0; i < n; i++) {
      cin >> ns[i];
    }
    bool possible = true;
    int s = 0;
    for (int j = n - 2; j >= 0; j--) {
      if (ns[j + 1] == 0) {
        possible = false;
        break;
      }
      while (ns[j] >= ns[j + 1] && ns[j] != 0) {
        ns[j] /= 2;
        s++;
      }
    }
    if (possible) {
      cout << s << endl;
    } else {
      cout << -1 << endl;
    }
  }
  return 0;
}