#include <bits/stdc++.h>

using namespace std;

int main() {
  int k, r;
  cin >> k >> r;
  int c = 1;
  while ((c * k) % 10 != r && (c * k) % 10 != 0) {
    c++;
  }
  cout << c << endl;
  return 0;
}
