#include <bits/stdc++.h>

#define INC 0
#define EQ 1
#define DEC 2

using namespace std;

int main() {
  int n, a;
  cin >> n;
  int prev = -1;
  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  int index = 0;
  while (index < n - 1 && nums[index] < nums[index + 1]) {
    index++;
  }
  while (index < n - 1 && nums[index] == nums[index + 1]) {
    index++;
  }
  while (index < n - 1 && nums[index] > nums[index + 1]) {
    index++;
  }
  cout << (index == n - 1 ? "YES" : "NO") << endl;
  return 0;
}