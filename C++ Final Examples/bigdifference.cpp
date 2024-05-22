#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max_val = a[0], min_val = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > max_val) {
            max_val = a[i];
        }
        if (a[i] < min_val) {
            min_val = a[i];
        }
    }

    cout << max_val - min_val << endl;

    return 0;
}

