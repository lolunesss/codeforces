#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  long long t;
  cin >> t;

  int res = 0;
  while (t--) {
    int n, a;
    cin >> n;
    int s = 0;
    int p = 1;
    for (int i = 0; i < n; i++) {
      cin >> a;
      s += a;
      p *= a;
    }
    int res = s < 0 ? (-s + 1) / 2 : 0;
    if (res & 1) {
      if (p == 1) res++;
    } else {
      if (p == -1) res++;
    }
    cout << res << endl;
  }
  return 0;
}