#include <iostream>
#include <string>

using namespace std;

bool is_substring(string s1, string s2) {
	if (s1.find(s2) == string::npos)
		return false;

	return true;
}

int main()
{
	string s1 = "waterbottle";
	string s2 = "erbottlewat";
	string s1s1 = s1 + s1;

	cout << boolalpha << is_substring(s1s1, s2) << endl;
}
