#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n, m;
  cin >> n >> m;
  vector<long long> ms(m);
  for (auto &x: ms) {
    cin >> x;
  }
  long long p = 1;
  long long c = 0;
  for (int i = 0; i < m; i++) {
    long long cu = ms[i];
    while (cu < p) {
      cu += n;
    }
    c += cu - p;
    p = ms[i];
  }
  cout << c << endl;
  return 0;
}
