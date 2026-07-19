#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  cin >> c;
  while (c--) {
    int k;
    cin >> k;
    int n2 = 0;
    int n3 = 0;
    for (int i = 0; i < k; i++) {
      int a;
      cin >> a;
      if (a >= 2) n2++;
      if (a >= 3) n3++;
    }
    if (n2 >= 2 || n3 >= 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
