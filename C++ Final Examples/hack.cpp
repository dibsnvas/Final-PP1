#include <bits/stdc++.h>
using namespace std;
int main(){
    map <string, int> mapa;
    int n;
    cin>>n;
    for (int i=0; i<n; i++){
        string name, password;
        cin>>name>>password;
        mapa[name]=mapa[name]+1;
    }
    map <string, int> :: iterator it;
    for (it=mapa.begin(); it!=mapa.end(); it++){
        if (it->second<3){
            cout<<it->first<<" is not hacked"<< endl;
        }
        else {
            cout<<it->first<<" is hacked"<<endl;
        }
    }
    return 0;
}