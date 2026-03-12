#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  int a, b;

  cin >> n >> a >> b;
  bool found = false;
  for (int i = 0; a * i <= n; i++) {
    int cc = i * a;
    int cb = n - i * a;
    if (cb % b == 0) {
      cout << "YES" << endl;
      cout << i << " " << cb / b << endl;
      found = true;
      break;
    }
  }
  if (!found) {
    cout << "NO" << endl;
  }
  return 0;
}