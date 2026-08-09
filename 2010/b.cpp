#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int c = 1 ^ 2 ^ 3;
  cout << (c ^ a ^ b) << endl;
  return 0;
}
