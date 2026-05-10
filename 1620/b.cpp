#include <bits/stdc++.h>

using namespace std;

vector<long long> read_sides(int d) {
  int k;
  cin >> k;
  vector<long long> ret;
  for (int i = 0; i < k; i++) {
    long long a;
    cin >> a;
    ret.push_back(a);
  }
  return ret;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int w, h;
    cin >> w >> h;
    vector<long long> x0 = read_sides(0);
    vector<long long> xh = read_sides(h);
    vector<long long> y0 = read_sides(0);
    vector<long long> yw = read_sides(w);

    long long a = (x0.back() - x0.front()) * h;
    long long b = (xh.back() - xh.front()) * h;
    long long c = (y0.back() - y0.front()) * w;
    long long d = (yw.back() - yw.front()) * w;
    cout << max(a, max(b, max(c, d))) << endl;
  }
  return 0;
}