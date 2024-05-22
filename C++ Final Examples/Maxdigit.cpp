#include <iostream>
using namespace std;
int main(){
    string n;
    cin>>n;
    char maxDigit = n[0];
    for (char digit : n){
        if (digit > maxDigit){
            maxDigit=digit;
        }
    }
    cout<<maxDigit<<endl;
    return 0;
}