#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int count = 0;
    while (n >= 10) {
      count += 9;
      n /= 10;
    }
    count += n;
    cout << count << endl;
  }
  return 0;
}