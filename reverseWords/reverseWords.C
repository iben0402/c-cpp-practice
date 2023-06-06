#include "iostream"
#include "vector"
#include "algorithm"
#include "string.h"


using namespace std;


vector <string> prepareString(string s) {


	string word = "";
	vector <string> words;

	for(auto i = 0; i < s.length(); i++) {
		if(s[i] == ' ') {
		
			if(word.compare("")!=0) {
				words.push_back(word);
				word = "";
			}
		}
		else {
			word += s[i];
		}
	}

	if(word.compare("")!=0)	words.push_back(word);

	return words;
}

string reverseWords(string s) {

	vector <string> words = prepareString(s);
	string n_str= "";

	for (auto ir = words.rbegin(); ir != words.rend(); ++ir) {
		n_str += *ir;
		if(ir != words.rend()-1) n_str += " ";
	}
	return n_str;

}


int main() {

	string s;

	s = "the sky is blue";
	cout << s << ": " << reverseWords(s) << "\n";

	s = "      the   sky   is   blue   ";
	cout << s << ": " << reverseWords(s) << "\n";
	
	s = "    hello world     ";
	cout << s << ": " << reverseWords(s) << "\n";
	

	s = "a good    example";
	cout << s << ": " << reverseWords(s) << "\n";

	s = "12   hello sth    ";
	cout << s << ": " << reverseWords(s) << "\n";

	s = "succes!   great";
	cout << s << ": " << reverseWords(s) << "\n";

	s = "wtf";
	cout << s << ": " << reverseWords(s) << "\n";
	return 0;
}
