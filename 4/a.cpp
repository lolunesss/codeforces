#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  long long a;

  cin >> a;
  if (a & 1 || a < 3) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
  return 0;
}