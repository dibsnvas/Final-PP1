#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string removeVowels(const string& s) {
    string result = s;
    
    result.erase(remove_if(result.begin(), result.end(), 
                    [](char c) { return string("aeiouAEIOU").find(c) !=string::npos; }), 
                    result.end());
    
    return result;
}

int main() {
    string inputString;
    getline(cin, inputString);
    
    string resultString = removeVowels(inputString);
    
    cout<< resultString << endl;
    
    return 0;
}
