#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <set>
#include <unordered_set>
using namespace std;
int main() {
    string s;
    cin>>s;
    int count=0;
    for (char c : s){
        char lowercase=tolower(c);
        if (lowercase=='a' || lowercase=='i' || lowercase=='e' || lowercase=='o' || lowercase=='u'){
            count++;
        }
    }
        cout<<count<<endl;
    }


