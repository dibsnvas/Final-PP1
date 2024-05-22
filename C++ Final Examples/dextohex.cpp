#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int decimalNumber;
    cin >> decimalNumber;
    cout << hex << setfill('0') << uppercase << decimalNumber << endl;

    return 0;
}




