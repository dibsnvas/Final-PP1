#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1; i<=sqrt(n); i++){
        int square = i*i;
        if (square<=n){
            cout<<square<<endl;
        }
        else {
            break;
        }
    }
    return 0;
}