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
    cin >> n;
    int prev = 1;
    int current_count = 0;
    int max_len = 0;
    for (int i = 0; i < n; i++) {
      cin >> a;
      if (a == 0)
        current_count++;
      else
        current_count = 0;
      max_len = max(max_len, current_count);
    }
    cout << max_len << endl;
  }
  return 0;
}