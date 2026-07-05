#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<long long> es(n);
  vector<long long> ts(3, 0);
  for (int i = 0; i < n; i++) {
    long long a;
    cin >> a;
    ts[i % 3] += a;
  }
  auto it = max_element(ts.begin(), ts.end());
  string display[] = {"chest", "biceps", "back"};
  cout << display[it - ts.begin()] << endl;
  return 0;
}