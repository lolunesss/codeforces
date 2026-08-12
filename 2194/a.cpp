#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  cin >> c;
  while (c--) {
    int n, w;
    cin >> n >> w;
    cout << n - (n / w) << endl;
  }
  return 0;
}
