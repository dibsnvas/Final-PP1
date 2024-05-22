#include <iostream>
#include <iomanip>
#include <bitset>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ci, cj;
    cin >> n;
    int a[n][n];
    int max=INT_MIN;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin>>a[i][j];  
            if (i==j){
                if (a[i][j]>max){
                    max=a[i][j];
                        ci=i+1;
                        cj=j+1;                }
            } 
        }
    }
    cout << "Maximum element is: " << max << " with coordinates: " << ci << ";" << cj;
    return 0;
}




