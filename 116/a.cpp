#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int r = 0;
  int c = 0;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    c -= a;
    c += b;
    r = max(r, c);
  }
  cout << r << endl;
  return 0;
}
