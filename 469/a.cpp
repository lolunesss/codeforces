#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  int a;
  cin >> n;
  
  int present[101] = { 0 };
  int p;
  cin >> p;
  for (int i = 0; i < p; i++) {
    cin >> a;
    present[a - 1] = 1;
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    cin >> a;
    present[a - 1] = 1;
  }
  bool possible = true;
  for (int i = 0; i < n; i++) {
    possible = possible && (present[i] == 1);
  }
  cout << (possible ? "I become the guy." : "Oh, my keyboard!") << endl;
  return 0;
}
