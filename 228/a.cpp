#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b,c, d;
  cin >> a >> b >> c >> d;
  map<int, bool> m;
  m[a] = true;
  m[b] = true;
  m[c] = true;
  m[d] = true;
  cout << 4 - m.size() << endl;
  return 0;
}
