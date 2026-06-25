#include <bits/stdc++.h>

using namespace std;

int iabs(int a, int b) { return a - b > 0 ? a - b : b - a; }

int main() {
  int arr[5][5];
  int ox, oy;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> arr[i][j];
      if (arr[i][j] == 1) {
        ox = i;
        oy = j;
      }
    }
  }
  cout << iabs(ox, 2) + iabs(oy, 2) << endl;
  return 0;
}