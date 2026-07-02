#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a = 0;
  int s = 1;
  for (int i = 0; i < n - 1; i++) {
    a = (a + s) % n;
    s += 1;
    cout << a + 1 << " ";
  }
  cout << endl;
  return 0;
}