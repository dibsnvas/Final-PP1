#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    unordered_set<int> uniqueSet;

    for (int i = 0; i < n; i++) {
        if (uniqueSet.find(a[i]) != uniqueSet.end()) {
            cout << "Not Unique" << endl;
            return 0;  
        }
        uniqueSet.insert(a[i]);
    }
    cout << "Unique" << endl;

    return 0;
}
