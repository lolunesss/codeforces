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
    cin >> n >> a;
    if (n % a == 0) {
      cout << 2 << endl;
      cout << n - 1 << " " << 1 << endl;
    } else {
      cout << 1 << endl;
      cout << n << endl;
    }
  }
  return 0;
}