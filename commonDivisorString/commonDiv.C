#include "iostream"
#include "cmath"

using namespace std;

bool isCD(string cd, string str) {

	int lenStr = str.length();
	int lenCD = cd.length();

	float div = lenStr / lenCD;

	if(roundf(div) != div) {
		return false;
	}

	int max = roundf(div);
	
	string test = "";

	for(int i = 0; i < max; i++) {
		test+=cd;
	}

	if(test == str) return true;
	return false;

}

string gcdOfStrings(string str1, string str2) {

	int counter = 0;
	string gcd = "";
	string cd = "";

	while(counter < str1.length() || counter < str2.length()) {
	
		if(str1[counter] != str2[counter]) {
			return gcd;
		}

		cd += str1[counter];
		if(isCD(cd, str1) && isCD(cd, str2)) gcd = cd;

		counter++;	
	}
	
	return gcd;
}

int main() {
	

	string str1 = "TAUXXTAUXXTAUXXTAUXXTAUXX";
	string str2 = "TAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXX";
	
	//cout << isCD(str2, str1);

	cout << gcdOfStrings(str1, str2);
	
	return 0;
}

