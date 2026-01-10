#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;

  if (t <= 2) {
    cout << t - 1 << endl;
    return 0;
  }
  long long int a = 0, b = 1, c;
  for (int i = 3; i <= t; i++) {
    c = a + b;
    a = b;
    b = c;
  }
  cout << c << endl;

  return 0;
}