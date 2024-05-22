#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    vector <int> model;
    for (int i=0; i<num; i++){
        int height;
        cin>>height;
        if (height%2==0){
            model.push_back(height);
        }
        else {
            model.insert(model.begin(), height);
        }
    }
    for (int height : model){
        cout<<height<<" ";
    }
}