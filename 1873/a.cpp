#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string a, b;
    cin >> a;
    b = a;
    sort(a.begin(), a.end());
    int c = 0;
    for (int i = 0; i < 3; i++) {
      if (a[i] == b[i]) c++;
    }
    cout << (c >= 1 ? "YES" : "NO") << endl;
  }
  return 0;
}
