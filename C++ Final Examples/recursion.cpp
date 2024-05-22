#include <bits/stdc++.h>

using namespace std;

void num(int c, int n){
    if (c>n){
        return;
    }
    cout<<c<<" ";
    num(c+1, n);
}
int main(){
    int n;
    cin>>n;
    num(1,n);
}


