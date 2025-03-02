#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int x = 0;

  for (int i = 0; i < n; i++) {
    string oper;
    cin >> oper;
    for (int j = 0; j < oper.length(); j++) {
        if (oper[j] == '+') {
            x += 1;
            break;
        } else if (oper[j] == '-') {
            x -= 1;
            break;
        }
    }
  }
  cout << x;
}