#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;
    set<pair<int, int> > ps;
    ps.insert({xk - a, yk - b});
    ps.insert({xk - a, yk + b});
    ps.insert({xk + a, yk + b});
    ps.insert({xk + a, yk - b});
    ps.insert({xk + b, yk - a});
    ps.insert({xk + b, yk + a});
    ps.insert({xk - b, yk + a});
    ps.insert({xk - b, yk - a});

    set<pair<int, int> > pqs;
    pqs.insert({xq - a, yq - b});
    pqs.insert({xq - a, yq + b});
    pqs.insert({xq + a, yq + b});
    pqs.insert({xq + a, yq - b});
    pqs.insert({xq + b, yq - a});
    pqs.insert({xq + b, yq + a});
    pqs.insert({xq - b, yq + a});
    pqs.insert({xq - b, yq - a});

    set<pair<int, int> > result;
    set_intersection(ps.begin(), ps.end(), pqs.begin(), pqs.end(),
                     inserter(result, result.begin()));

    cout << result.size() << endl;
  }
  return 0;
}