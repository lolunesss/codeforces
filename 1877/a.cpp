#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, a;
    cin >> n;
    long long sum = 0;

    for (int i = 0; i < n - 1; i++) {
      cin >> a;
      sum += a;
    }
    cout << -sum << endl;
  }
  return 0;
}