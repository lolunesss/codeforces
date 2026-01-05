#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

long long operate(long long a, long long b, char op) {
  if (op == '+') return a + b;
  if (op == '-') return a - b;
  if (op == '*') return a * b;
  return 0;
}

int main() {
  long long a, b, c, d;
  cin >> a >> b >> c >> d;
  char operators[3] = {'-', '+', '*'};
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i == j) continue;
      long long result = 0;
      if (operators[i] == '*') {
        result = operate(operate(a, b, operators[i]), c, operators[j]);
      } else if (operators[j] == '*') {
        result = operate(a, operate(b, c, operators[j]), operators[i]);
      } else {
        result = operate(operate(a, b, operators[i]), c, operators[j]);
      }
      // cout << a << operators[i] << b << operators[j] << c << "=" << result
      //      << endl;
      if (result == d) {
        cout << "YES" << endl;
        return 0;
      }
    }
  }
  cout << "NO" << endl;
  return 0;
}