#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector <int> as(n);
  for (auto &a: as) {
    cin >> a;
  }
  int s = as[k - 1];
  int c = 0;
  for (auto a: as) {
    if (a > 0 && a >= s) c++;
  }
  cout << c << endl;
  return 0;
}
