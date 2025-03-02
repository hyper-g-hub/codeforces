#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int words;
 
    cin >> words;
    for (int i = 0; i < words; i++) {
        string ts_word;
        cin >> ts_word;
        if (ts_word.length() <= 10) {
            cout << ts_word << "\n";
            continue;
        } 
        char start = ts_word[0];
        char end = ts_word[ts_word.length() - 1];
        cout << start << ts_word.length() - 2 << end << "\n";
    }
}
