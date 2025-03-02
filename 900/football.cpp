#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main() {
    string f;
    cin >> f;
    int len = 0;
    int which = -1;
    for (int i = 0; i < f.length(); i++) {
        int num = f[i] - '0'; // to int
        if (which == -1) {
            len += 1;
        } 
        else if (num == which) {
            len += 1;
        } else {
            len = 1;
        }
 
        if (len >= 7) {
            cout << "YES";
            break;
        }
        which = num;
    }
    if (len < 7) {
        cout << "NO";
    }
    return 0;
}
