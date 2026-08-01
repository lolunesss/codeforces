#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  cin >> c;
  while (c--) {
    int k;
    cin >> k;
    vector<int> as(k);
    for (auto &a: as) {
      cin >> a;
    }
    sort(as.begin(), as.end());
    for (int i = 0; i < k; i++) {
      int m = as[i];
      if ((k - 2) % m == 0) {
	int n = (k - 2) / m;
	if (binary_search(as.begin() + i + 1, as.end(), n)) {
	  cout << m << " " << n << endl;
	  break;
	}
      }
    }
  }
  return 0;
}
