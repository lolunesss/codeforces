#include <bits/stdc++.h>

using namespace std;

void print(vector<int> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << i << " : " << a[i] << ", ";
  }
  cout << endl;
}

vector<int> max_frequencies(vector<int> a, int n) {
  vector<int> f(2 * n + 1, 0);
  int cnt = 0;
  int prev = a[0];
  a.push_back(2 * n + 2);
  for (auto x : a) {
    if (x == prev) {
      cnt++;
    } else {
      f[prev] = max(f[prev], cnt);
      cnt = 1;
    }
    prev = x;
  }
  return f;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto& x : a) {
      cin >> x;
    }
    for (auto& x : b) {
      cin >> x;
    }
    vector<int> af = max_frequencies(a, n);
    vector<int> bf = max_frequencies(b, n);

    int res = 0;
    for (int i = 0; i < 2 * n + 1; i++) {
      res = max(res, af[i] + bf[i]);
    }
    cout << res << endl;
  }

  return 0;
}