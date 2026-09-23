#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> ns(n);
  for (auto & a: ns) {
    cin >> a;
  }

  int curr = ns[0];
  int l = 1;
  int m = 1;
  for (int i = 1; i < n; i++) {
    if (ns[i] >= curr) {
      l += 1;
    } else {
      l = 1;
    }
    curr = ns[i];
    m = max(m, l);
  }
  cout << m << endl;

  return 0;
}
