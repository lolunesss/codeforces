#include <iostream>
#include <string>

using namespace std;

int main() {
  string op;
  int a, b;
  cin >> a >> op >> b;
  bool result = false;
  if (op == ">") {
    result = a > b;
  }
  if (op == "<") {
    result = a < b;
  }
  if (op == "=") {
    result = a == b;
  }
  if (result) {
    cout << "Right" << endl;
  } else {
    cout << "Wrong" << endl;
  }
  return 0;
}