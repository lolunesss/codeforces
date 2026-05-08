#include <bits/stdc++.h>

using namespace std;

vector<int> rotate(vector<int> x) {
  vector<int> res;
  for (int i = 1; i < x.size(); i++) {
    res.push_back(x[i]);
  }
  res.push_back(x[0]);
  return res;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> p(n);
    for (auto& x : p) {
      cin >> x;
    }
    map<int, vector<int> > f;
    for (int i = 0; i < n; i++) {
      f[p[i]].push_back(i);
    }
    bool has_solution = true;

    for (auto pr : f) {
      if (pr.second.size() == 1) {
        has_solution = false;
      }
    }
    if (!has_solution) {
      cout << -1 << endl;
      continue;
    }

    for (auto pr : f) {
      f[pr.first] = rotate(pr.second);
    }

    map<int, int> c;
    for (int i = 0; i < n; i++) {
      cout << f[p[i]][c[p[i]]] + 1 << " ";
      c[p[i]]++;
    }
    cout << endl;
  }
  return 0;
}