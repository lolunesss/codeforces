#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    int res = -1;
    int u = -1;
    int ui = -1;
    int vi = -1;
    int v = -1;
    int uf = 0;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      if (a == u) {
        uf = 1;
      }
      if (u == -1) {
        u = a;
        ui = i + 1;
      }
      if (v == -1 && a != u) {
        v = a;
        vi = i + 1;
      }
    }
    cout << (uf == 1 ? vi : ui) << endl; 
  }
  return 0;
}
