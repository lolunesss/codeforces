#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  long long t;
  cin >> t;
  int res = 0;
  while (t--) {
    int n;
    int twos = 0;
    cin >> n;
    vector<int> as(n);
    for (int i = 0; i < n; i++) {
      cin >> as[i];
      if (as[i] == 2) twos++;
    }
    if (twos % 2 == 0) {
      int c = 0;
      int index = 0;
      for (index = 0; index < n; index++) {
        if (as[index] == 2) c++;
        if (c == twos / 2) break;
      }
      cout << index + 1 << endl;
    } else {
      cout << -1 << endl;
    }
  }
  return 0;
}