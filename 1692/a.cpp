#include <bits/stdc++.h>

using namespace std;

int main (int argc, char *argv[]) {
  int ca;
  cin >> ca;
  while (ca--) {
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    int t = a[0];
    sort(a, a + 4, greater<int>());
    int x = distance(a, find(a, a + 4, t));
    cout << x << endl;
  }
  return 0;
}
