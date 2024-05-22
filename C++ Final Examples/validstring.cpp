#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int k;
    cin >> k;

    int count = 0;

    for (char c : s) {
        if (c >= '0' && c <= '9') {
            count++;
        }

        if (count >= k) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}



