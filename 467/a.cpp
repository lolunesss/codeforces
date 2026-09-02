#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int c = 0;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    c += (b - a >= 2 ? 1 : 0);
  }
  cout << c << endl;
  return 0;
}
