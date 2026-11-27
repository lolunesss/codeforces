#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> as;
  vector<int> bs;
  vector<int> cs;
  for (int i = 1; i <= n; i++) {
    int x;
    cin >> x;
    if (x == 1) {
      as.push_back(i);
    } else if (x == 2) {
      bs.push_back(i);
    } else if (x == 3) {
      cs.push_back(i);
    }
  }
  int c = min(as.size(), min(bs.size(), cs.size()));
  cout << c << endl;
  for (int i = 0 ; i < c; i++) {
    cout << as[i] << " " << bs[i] << " " << cs[i] << endl;
  }
  return 0;
}

