#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    string ns, ks;
    cin >> ns >> ks;
    int found = 0;
    int c = 0;
    while (ns.size() <= 75) {
      int res = ns.find(ks);
      if (res != string::npos) {
        found = 1;
        break;
      }
      c += 1;
      ns += ns;
    }
    if (found) {
      cout << c << endl;
    } else {
      cout << -1 << endl;
    }
  }

  return 0;
}