#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int r = 0;
  int cabs = 0;
  int arr[4] = { 0 };
  for (int i = 0; i < n; i++) {
    int s;
    cin >> s;
    arr[s - 1] ++;
  }
  cabs += arr[3];
  int c = min(arr[2], arr[0]);
  arr[0] = max(arr[0] - c, 0);
  arr[2] = max(arr[2] - c, 0);
  cabs += c + arr[2];

  
  cabs += arr[1] / 2;
  arr[1] -= arr[1] / 2 * 2;
  
  if (arr[1] == 1) {
    arr[0] = max(arr[0] - 2, 0);
    cabs += 1;
  }

  cout << cabs + (arr[0] + 3) / 4 << endl;
  return 0;
}
