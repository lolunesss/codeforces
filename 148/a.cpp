#include <bits/stdc++.h>

using namespace std;

int main() {
  int k, l, m, n, d;
  cin >> k >> l >> m >> n >> d;
  int ma[100001] = { 0 };
  int divs[4] = { k, l, m, n };
  for (int i = 0; i < 4; i++) {
    int dd = divs[i];
    for (int j = 0; j <= d; j+= dd) {
      ma[j] = 1;
    }
  }
  int c = 0; 
  for (int i = 1; i <= d; i++) {
    c += (ma[i] == 1 ? 1 : 0);
  }
  cout << c << endl;

  return 0;
}
