#include "iostream"

using namespace std;

bool isVowel(char letter) {
	return (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U');
}

string reverseVowels(string s) {
	int indexOfExchangedVowel = s.length();
	for(int i = 0; i < s.length(); i++) {

		if(i+1 > indexOfExchangedVowel) break;
		if(isVowel(s[i])){

			for(int j = indexOfExchangedVowel-1; j>i; j--) {
				if(isVowel(s[j])) {
					char lett = s[j];
					s[j] = s[i];
					s[i] = lett;
					indexOfExchangedVowel = j;
					break;
				}
			}

		}	
	}

	return s;

}


int main() {

	string s;
	
	s="hello";
	cout << s << ": " << reverseVowels(s) << "\n";

	s="leetcode";
	cout << s << ": " << reverseVowels(s) << "\n";

	s="elwqade";
	cout << s << ": " << reverseVowels(s) << "\n";

	s="adwlhedshpo";
	cout << s << ": " << reverseVowels(s) << "\n";

	return 0;
}



