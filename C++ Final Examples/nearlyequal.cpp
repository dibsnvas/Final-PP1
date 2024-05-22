#include <iostream>
#include <string>

using namespace std;

string is_recursive_equiv(string A, string B) {
	// Check if A and B are already equivalent
	if (A == B) {
		return "YES";
	}
	
	// Check if the length of A and B is even
	if (A.length() % 2 != 0 || B.length() % 2 != 0) {
		return "NO";
	}
	
	// Divide A and B into two halves
	int n = A.length();
	string A1 = A.substr(0, n/2);
	string A2 = A.substr(n/2);
	string B1 = B.substr(0, n/2);
	string B2 = B.substr(n/2);
	
	// Recursively check if the halves of A and B are equivalent
	if ((is_recursive_equiv(A1, B1) == "YES" && is_recursive_equiv(A2, B2) == "YES") ||
		(is_recursive_equiv(A1, B2) == "YES" && is_recursive_equiv(A2, B1) == "YES")) {
		return "YES";
	}
	
	return "NO";
}

int main() {
	string A = "aaba";
	string B = "abaa";
	cout << is_recursive_equiv(A, B) << endl; // Output: YES

	A = "aabb";
	B = "abab";
	cout << is_recursive_equiv(A, B) << endl; // Output: NO

	return 0;
}
