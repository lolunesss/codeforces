#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long int n, k;
    cin >> n >> k;
    vector<long long int> a(n);
    vector<pair<long long, int> > ps;
    for (int i = 0; i < n; i++) {
      long long int x;
      cin >> x;
      a[i] = (x % k == 0) ? k : x % k;
      ps.push_back({a[i], n - (i + 1)});
    }

    sort(ps.begin(), ps.end(), std::greater<pair<long long, int> >());
    for (auto x : ps) {
      cout << n - x.second << " ";
    }
    cout << endl;
  }

  return 0;
}