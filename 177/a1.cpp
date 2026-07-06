#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int> > arr;
  for (int i = 0; i < n; i++) {
    arr.push_back(vector<int>(n, 0));
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[n / 2][i];
    arr[n / 2][i] = 0;
    sum += arr[i][n / 2];
    arr[i][n / 2] = 0;
    sum += arr[i][i];
    arr[i][i] = 0;
    sum += arr[i][n - i - 1];
    arr[i][n - i - 1] = 0;
  }
  cout << sum << endl;

  return 0;
}