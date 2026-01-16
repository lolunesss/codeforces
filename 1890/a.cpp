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
    int min = 1e5 + 1;
    int max = -1;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
      cin >> a;
      nums[i] = a;
      if (min > a) min = a;
      if (max < a) max = a;
    }
    int min_count = 0, max_count = 0;
    for (auto a : nums) {
      if (a == min) min_count++;
      if (a == max) max_count++;
    }
    if (min_count == n || max_count == n) {
      cout << "YES" << endl;
    } else if (abs(min_count - max_count) <= 1 && min_count + max_count == n) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}