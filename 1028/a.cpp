#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> b(n);
  for (auto &in: b) {
    cin >> in;
  }
  auto first = make_pair(-1, -1);
  auto last = make_pair(-1, -1);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (b[i][j] == 'B') {
        if (first.first == -1) {
          first = make_pair(i, j);
        }
        last = make_pair(i, j);
      }
    }
  }
  cout << (first.first + last.first) / 2 + 1 << " " << (first.second + last.second) / 2 + 1 << endl;
  return 0;
}
