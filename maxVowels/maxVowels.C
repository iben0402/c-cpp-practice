#include "iostream"

using namespace std;


bool isVowel(char letter) {
	return (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u');
}

int maxVowels(string s, int k) {
	if(k==0) return 0;

	int maxVow = 0;
	for(int i=0; i<k; i++) {
		if(isVowel(s[i])) maxVow++;
	}
	if(maxVow == k) return maxVow;
	int currentAmountOfVow = maxVow;

	for(int i=k; i<s.length(); i++) {
		if(isVowel(s[i])) currentAmountOfVow++;
		if(isVowel(s[i-k])) currentAmountOfVow--;
		if(currentAmountOfVow>maxVow) maxVow = currentAmountOfVow;
		if(maxVow == k) return maxVow;
	}

	return maxVow;
}


int main() {

	string s;
	int k;

	s = "abciiidef";
	k = 3;

	cout << s << " " << k << ": " << maxVowels(s, k) << "\n";

	s = "aeiou";
	k = 2;

	cout << s << " " << k << ": " << maxVowels(s, k) << "\n";

	s = "leetcode";
	k = 3;

	cout << s << " " << k << ": " << maxVowels(s, k) << "\n";

	s = "abedadodep";
	k = 2;

	cout << s << " " << k << ": " << maxVowels(s, k) << "\n";




	return 0;
}
