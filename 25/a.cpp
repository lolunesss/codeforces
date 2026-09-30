#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int oc = 0;
  int odd, even;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (a & 1) {
      odd = i + 1;
      oc++;
    } else {
      even = i + 1;
    }
  }
  cout << (oc == 1 ? odd : even) << endl;
  return 0;
}
