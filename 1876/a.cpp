#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n, p;
    cin >> n >> p;
    vector<long long> a(n);
    vector<long long> b(n);
    for (auto& x : a) {
      cin >> x;
    }
    for (auto& x : b) {
      cin >> x;
    }
    vector<pair<long long, long long> > ps(n);
    for (int i = 0; i < n; i++) {
      ps[i] = {b[i], a[i]};
    }
    sort(ps.begin(), ps.end());
    int i = 0;
    long long cost = p;
    long long cnt = 1;
    while (i < n && ps[i].first < p && cnt < n) {
      long long int m = ps[i].first;
      long long int add = min(n - cnt, ps[i].second);
      cost += m * add;
      cnt += add;
      // cout << "c : " << cost << " " << m << " " << add << endl;
      i++;
    }
    cost += p * (n - cnt);
    cout << cost << endl;
  }
  return 0;
}