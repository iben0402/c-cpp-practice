#include "iostream"

using namespace std;

string mergeAlternately(string word1, string word2) {

	int counter = 0;
	string merged = "";
	while(counter < word1.length() || counter < word2.length()) {

		if(counter < word1.length()) {
			merged += word1[counter];
		}
		if(counter < word2.length()) {
			merged += word2[counter];
		}
		counter++;
	}

	return merged;

}

int main() {

	string w1 = "abcd";
	string w2 = "pqrs";

	cout << w1 << "+" << w2 << "=" << mergeAlternately(w1, w2) << "\n";


	w1 = "ab";
	w2 = "pqrs";

	cout << w1 << "+" << w2 << "=" << mergeAlternately(w1, w2) << "\n";
	
	
	w1 = "abcdef";
	w2 = "pqrs";

	cout << w1 << "+" << w2 << "=" << mergeAlternately(w1, w2) << "\n";
	

	w1 = "acegikmortwy";
	w2 = "bdfhjlnpsuxz";

	cout << w1 << "+" << w2 << "=" << mergeAlternately(w1, w2) << "\n";


	return 0;

}
