#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> as(n);
  vector<int> bs(n);
  for (int i = 0; i < n; i++) {
    cin >> as[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> bs[i];
  }
  sort(as.begin(), as.end());
  sort(bs.begin(), bs.end());
  cout << (as == bs ? "yes" : "no") << endl;
  return 0;
}