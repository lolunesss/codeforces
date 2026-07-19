#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  cin >> c;
  while (c--) {
    int n;
    cin >> n;
    vector<int> ns(n);
    for (auto &x: ns) {
      cin >> x;
    }
    int arr[101] = {0};
    for (auto x: ns) {
      arr[x]++;
    }

    int count = 0;
    for (int i = 0; i < 101; i++) {
      if (arr[i] >= i) {
	count += arr[i] - i;
      } else {
	count += arr[i];
      }
    }
    cout << count << endl;
  }
  return 0;
}
