#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int ps;
    cin >> ps;
    int solve = 0;
    for (int i = 0; i < ps; i++) {
        int p,v,t;
        cin >> p >> v >> t;
        int amount = 0;
        if (p == 1) {
            amount += 1;
        }
        if (v == 1) {
            amount += 1;
        }
        if (t == 1) {
            amount += 1;
        }
        if (amount >= 2) {
            solve++;
        }
    }
    cout << solve;
}
