#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> ts(m);
  for (auto &x: ts) {
    cin >> x;
  }
  sort(ts.begin(), ts.end());
  int mini = INT_MAX;

  for (int i = 0; i <= m - n; i++) {
    mini = min(mini, ts[i + n - 1] - ts[i]);
  }
  cout << mini << endl;
  return 0;
}
