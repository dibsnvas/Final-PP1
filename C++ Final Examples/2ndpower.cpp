#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    if (n>0){
        while (n%2==0){
            n=n/2;
        }
        if (n==1){
            cout<<"Yes";
        }
        else {
            cout<<"No";
        }
    }
}

