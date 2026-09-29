#include <bits/stdc++.h>

using namespace std;

int main() {
  int s, n;
  cin >> s >> n;
  int alive = true;
  vector<pair<int, int> > ps;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    ps.push_back({x, y});
  }
  sort(ps.begin(), ps.end());
  for (auto p: ps) {
    int x = p.first;
    int y = p.second;
    alive = alive && (s > x);
    s += y;
  }
  cout << (alive ? "YES" : "NO") << endl;
  return 0;
}
