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
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
      cin >> a;
      nums[i] = a;
    }
    if (nums[0] == 1)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}