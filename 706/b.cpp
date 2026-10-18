#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> shops(n);
  for (auto &x: shops) {
    cin >> x;
  }
  sort(shops.begin(), shops.end());
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int m;
    cin >> m;
    auto it = upper_bound(shops.begin(), shops.end(), m);
    cout << distance(shops.begin(), it) << endl;
  }

  return 0;
}
