#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    string n;
    cin>>n;
    bool IsPolindrome = true;
    int l = n.length();
    for (int i=0; i<l/2; i++){
        if (n[i]!=n[l-1-i]){
            IsPolindrome=false;
            break;
        }
    }
    if (IsPolindrome){
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }
}