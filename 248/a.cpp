#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int zlc = 0, zrc = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (a == 0) zlc++;
    cin >> a;
    if (a == 0) zrc++;
  }
  cout << min(zlc, n - zlc) + min(zrc, n - zrc) << endl;
  return 0;
}