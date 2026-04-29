#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> ns(n);
    for (auto& ni : ns) {
      cin >> ni;
    }
    int c = 0;
    int co = 5;
    for (auto ni : ns) {
      int c = ni % k;
      if (c == 0) c = k;
      co = min(k - c, co);
    }

    if (k == 5 || k == 3 || k == 2) {
      cout << co << endl;
    } else if (k == 4) {
      int ce = 0;
      for (int i = 0; i < n; i++) {
        if (ns[i] % 2 == 0) {
          ce++;
          if ((ns[i] / 2) % 2 == 0) ce++;
        }
      }
      cout << min(2 - min(ce, 2), co) << endl;
    }
  }
  return 0;
}