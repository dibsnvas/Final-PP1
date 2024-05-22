#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    for (int i=0; i<n; i+=2){
            cout<<arr[i]<<endl;
        }
    
    return 0;
}
	 
