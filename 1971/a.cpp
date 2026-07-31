#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  cin >> c;
  while (c--) {
    int a, b;
    cin >> a >> b;
    cout << min(a, b) << " " << max(a, b) << endl;
  }
  return 0;
}
