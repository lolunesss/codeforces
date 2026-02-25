#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<pair<int, int> > ns(n);
    for (int i = 0; i < n; i++) {
      cin >> ns[i].first;
      ns[i].second = i;
    }
    sort(ns.begin(), ns.end(), ::greater<pair<int, int> >());
    long long total_cost = 0;
    int current_pos = 1;
    vector<pair<int, int> > results;
    for (int i = 0; i < n; i += 2) {
      total_cost += 2LL * current_pos * ns[i].first;
      if (i + 1 < n) total_cost += 2LL * current_pos * ns[i + 1].first;
      results.push_back({ns[i].second, current_pos});
      if (i + 1 < n) results.push_back({ns[i + 1].second, -current_pos});

      current_pos++;
    }
    sort(results.begin(), results.end());
    cout << total_cost << endl;
    cout << "0";
    for (auto& x : results) {
      cout << " " << x.second;
    }
    cout << endl;
  }
  return 0;
}