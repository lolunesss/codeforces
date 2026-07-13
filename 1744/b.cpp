#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  cin >> c;
  while (c--) {
    int n, q;
    cin >> n >> q;
    vector<long long> ns(n);
    long long sum = 0;
    int ec = 0;
    int oc = 0;
    for (auto& x : ns) {
      cin >> x;
      sum += x;
      if (x & 1)
        oc++;
      else
        ec++;
    }
    for (int i = 0; i < q; i++) {
      int a, x;
      cin >> a >> x;
      if (a == 1) {
        sum += oc * x;
        if (x & 1) {
          ec += oc;
          oc = 0;
        }
      } else {
        sum += ec * x;
        if (x & 1) {
          oc += ec;
          ec = 0;
        }
      }
      cout << sum << endl;
    }
  }
  return 0;
}
