#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  string s(n, 'o');
  int a = 1, b = 0;
  while (a + b - 1 < n) {
    int c = a + b;
    s[c - 1] = 'O';
    a = b;
    b = c;
  }
  cout << s << endl;
  return 0;
}