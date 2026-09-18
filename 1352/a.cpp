#include <bits/stdc++.h>

using namespace std;

void print(int n, int c, int m) {
  if (n == 0) {
    cout << c << endl;
    return;
  }
  print(n / 10, c + (n % 10 > 0 ? 1 : 0), m * 10);
  if (n % 10 != 0) {
    cout << (n % 10) * m << (c == 0 ? "\n" : " ");
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    print(n, 0, 1);
  }
  return 0;
}
