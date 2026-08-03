#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  cin >> c;
  while (c--) {
    int m, a, b, c;
    cin >> m >> a >> b >> c;
    
    int sr = m - min(a, m);
    sr += m - min(b, m);
    cout << min(a, m) + min(b, m) + min(c, sr) << endl; 
  }
  return 0;
}
