#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <pair<int, int>> massive;
    int n;
    cin>>n;
    for (int i=0; i<n; i++){
        int a,b;
        cin>>b>>a;
        massive.push_back(make_pair(a,b));
    }
    sort(massive.begin(), massive.end());
    for (int i=0; i<n; i++){
        cout<<massive[i].second<<" "<<massive[i].first<<endl;
    }
}