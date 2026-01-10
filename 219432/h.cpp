#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;

  bool is_prime = true;

  for (int i = 2; i < t; i++) {
    if (t % i == 0) {
      is_prime = false;
      break;
    }
  }
  if (is_prime) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}