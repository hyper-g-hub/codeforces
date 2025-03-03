#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int m, n;
    int amount = 0;
    cin >> m >> n;
    if (n > m) {
        int temp = n;
        n = m;
        m = temp;
    }
    //cout << "m,n" << m << n << "\n";
    int x = floor(n/2);
    amount += m * x;
    if (n % 2 > 0) {
        amount += floor(m/2);
    }
    cout << amount;
    return 0;
}
