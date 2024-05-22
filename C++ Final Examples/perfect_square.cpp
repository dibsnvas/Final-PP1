#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <set>
#include <unordered_set>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    int srt=sqrt(n);
    if (srt*srt==n){
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
}


