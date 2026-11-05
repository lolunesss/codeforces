#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int c = 0;
  while (n) {
    if (n % 2 == 1) c++;
    n /= 2;
  }
  cout << c << endl;
  return 0;
}
