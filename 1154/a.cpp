#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[4] = { 0 };
  cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
  sort(arr, arr+4);
  int s = arr[3];
  int a = s - arr[2];
  int b = arr[1] - a;
  int c = arr[0] - a;
  cout << a << " " << b << " " << c << endl;

  return 0;
}
