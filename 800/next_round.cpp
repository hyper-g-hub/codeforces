#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    } 
    int target = scores[k - 1];
    int amount = 0;
    for (int s : scores) {
        if (s >= target && s > 0) {
            amount += 1;
        }
    }
    cout << amount;
    return 0;
}
