#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  long long t;
  cin >> t;
  int e = 0, o = 0, p = 0, n = 0;
  int a;
  while (t--) {
    cin >> a;
    if (a & 1)
      o++;
    else
      e++;
    if (a > 0)
      p++;
    else if (a < 0)
      n++;
  }
  cout << "Even: " << e << endl;
  cout << "Odd: " << o << endl;
  cout << "Positive: " << p << endl;
  cout << "Negative: " << n << endl;
  return 0;
}