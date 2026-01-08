#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  long long t;
  cin >> t;
  int a;
  int res = 0;
  while (t--) {
    cin >> a;
    res |= a;
  }
  if (!res) {
    cout << "EASY" << endl;
  } else {
    cout << "HARD" << endl;
  }
  return 0;
}