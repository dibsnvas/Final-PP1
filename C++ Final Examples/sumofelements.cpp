#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int col = 4;
    int row = 3;
    cin>>row>>col;
    int a[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < row; i++) {
        int rowsum = 0;
        for (int j = 0; j < col; j++) {
            rowsum += a[i][j];
        }
        cout << "The sum of row number " << i + 1 << " is " << rowsum << endl;
    }
    for (int j = 0; j < col; j++) {
        int colsum = 0;
        for (int i = 0; i < row; i++) {
            colsum += a[i][j];
        }
        cout << "The sum of column number " << j + 1 << " is " << colsum << endl;
    }

    return 0;
}




