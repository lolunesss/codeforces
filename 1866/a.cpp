#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n, a;
  cin >> n;
  int min = 1000001;
  for (int i = 0; i < n; i++) {
    cin >> a;
    a = a < 0 ? -a : a;
    if (min > a) {
      min = a;
    }
  }
  cout << min << endl;

  return 0;
}