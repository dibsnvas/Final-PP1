#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    int max=INT_MIN;
    int max2=INT_MIN;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i][j]>max){
                max2=max;
                max=a[i][j];
            }
            else if (a[i][j]>max2 && a[i][j]<max){
                max2=a[i][j];
            }
        }
    }
    if (max == max2 || max2 == INT_MIN) {
        cout<<"0";
    }
    else {cout<<max2<<endl;}
    return 0;
}

