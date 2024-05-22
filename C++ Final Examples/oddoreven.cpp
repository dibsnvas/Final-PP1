#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n%2==0 && n!=0){
        cout<<"Even";
    }
    else if (n==0){
        cout<<"None";
    }
    else {
        cout<<"Odd";
    }
}