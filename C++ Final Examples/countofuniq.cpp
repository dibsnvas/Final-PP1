#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    set <int> setik;
    while (cin>>n){
        setik.insert(n);
        if (cin.get()=='\n') break;
    }
    cout<<setik.size()<<endl;
}
