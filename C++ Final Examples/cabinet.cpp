 #include <bits/stdc++.h>
using namespace std;
int main(){
    int l, r, x;
    cin>>l>>r;
    map<int, bool>mp;
    while(cin>>x){
        mp[x] = true;
        if(cin.get()=='\n') break;
    }
    for(int i=l; i<=r; i++){
        if(!mp[i]) cout<<i<<" ";
    }
}