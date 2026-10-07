#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> ns(n);
  for (auto &x: ns) {
    cin >> x;
  }
  int s = 0, d = 0;
  int l = 0, r = n - 1;
  bool st = true;
  while (l <= r) {
    int *v = st ? &s : &d;
    if (ns[l] > ns[r]) {
      *v += ns[l];
      l++;
    } else {
      *v += ns[r];
      r--;
    }
    st = !st;
  }
  cout << s << " " << d << endl;
  return 0;
}
