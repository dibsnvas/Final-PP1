#include <iostream>
#include <iomanip>
#include <bitset>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector <int> a(n);
    unordered_set<int>unique;
    for (int i=0; i<n ; i++){
        cin>>a[i];
        if (unique.find(a[i])!=unique.end()){
            cout<<"Not Unique"<<endl;
            return 0;
        }
        unique.insert(a[i]);
    }
    cout<<"Unique"<<endl;
    return 0;
}




