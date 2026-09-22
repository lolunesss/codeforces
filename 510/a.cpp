#include <bits/stdc++.h>

using namespace std;

int main() {
  int m, n;
  cin >> m >> n;
  int ind = n - 1;
  for (int i = 0; i < m; i++) {
    if (i & 1) {
      for (int j = 0; j < n; j++) {
	cout << (j == ind ? "#" : ".");
      }
      cout << endl;
      ind = (ind == n - 1 ? 0 : n - 1);
    } else {
      for (int j = 0; j < n; j++) {
	cout << "#";
      }
      cout << endl;
    }
  }
  return 0;
}
