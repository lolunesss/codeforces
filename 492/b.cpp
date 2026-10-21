#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, l;
  cin >> n >> l;
  vector<int> ls;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    ls.push_back(a);
  }
  sort(ls.begin(), ls.end());
  double d = 0;
  for (int i = 1; i < n; i++) {
    d = max((double)ls[i] - ls[i - 1], d);
  } 
  double res = max(d / 2.0, (double)max(ls[0] - 0, l - ls[n - 1]));
  printf("%0.12lf\n", res);
  return 0;
}
