#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, d;
  cin >> n >> d;
  vector<int> ns(n);
  for (auto &x: ns) {
    cin >> x;
  }
  int c = 0;
  for (int i = 0; i < n - 1; i++) {
    int k = ns[i + 1] - ns[i];
    if (k > 2 * d) {
      c += 2;
    } else if (k == 2 * d) {
      c += 1;
    }
  }
  cout << c + 2 << endl;
  return 0;
}
