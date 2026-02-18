#include <bits/stdc++.h>

using namespace std;

void print(pair<int, int> x) {
  cout << "t :" << x.first << ":" << x.second << endl;
}

pair<int, int> subtract(pair<int, int> x, pair<int, int> y) {
  int oh = x.first - y.first;
  int om = x.second - y.second;
  if (om < 0) {
    om += 60;
    oh--;
  }
  if (oh < 0) oh += 24;
  return {oh, om};
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, h, m;
    cin >> n >> h >> m;
    pair<int, int> tim{h, m};
    vector<pair<int, int> > times;

    for (int i = 0; i < n; i++) {
      int hh, mm;
      cin >> hh >> mm;
      times.push_back({hh, mm});
    }
    sort(times.begin(), times.end());
    times.push_back({times[0].first + 24, times[0].second});

    pair<int, int> mini{25, 60};
    for (int i = 0; i <= n; i++) {
      mini = min(mini, subtract(times[i], tim));
    }
    cout << mini.first << " " << mini.second << endl;
  }
  return 0;
}