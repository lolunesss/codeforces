#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int p = 0;
  int res = 0;
  for (int i = 0; i < n; i++) {
    int c;
    cin >> c;
    if (c < 0) {
      if (p > 0) {
	p -= 1;
      } else {
	res++;
      }
    } else {
      p += c;
    }
  }
  cout << res << endl;
  return 0;
}
