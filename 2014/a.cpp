#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int g = 0;
    int c = 0;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      if (a >= k) {
	g += a;
      } else if (a == 0) {
	if (g > 0) {
	  c++;
	  g--;
	}
      }
    }
    cout << c << endl;
  }
  return 0;
}
