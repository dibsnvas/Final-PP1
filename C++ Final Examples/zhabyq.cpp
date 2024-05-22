#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    for (int i=1; i<=num; i++){
        string ID;
        cin>>ID;
        int l=ID.back()-'0';
        if (l%2==0){
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}