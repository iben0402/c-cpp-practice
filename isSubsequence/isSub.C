#include "iostream"

using namespace std;

bool isSubsequence(string s, string t) {

	int count = 0;
	for(int i =0; i<t.length(); i++) {
	
		if(count == s.length()) return true;
		if(s[count]==t[i]) count++;
	}
	if(count==s.length()) return true;
	return false;

}


int main() {

	string s, t;

	s="abc";
	t="ahbgdc";

	cout << isSubsequence(s, t) << " ";

	
	s="axc";
	t="ahbgdc";

	cout << isSubsequence(s, t) << " ";

	s="abc";
	t="ahgdcbawsadwac";

	cout << isSubsequence(s, t) << " ";

	s="abc";
	t="ahgdcb";

	cout << isSubsequence(s, t) << " ";


	s="abcd";
	t="ahbgdcgsfefd";

	cout << isSubsequence(s, t) << " ";
}
