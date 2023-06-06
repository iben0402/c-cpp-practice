#include "iostream"
#include "vector"
#include "algorithm"


using namespace std;

vector <bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

	int maxCandies = *max_element(candies.begin(), candies.end());
	vector <bool> m_candies;

	for(int i = 0; i<candies.size(); i++) {
	
		if(candies[i] + extraCandies >= maxCandies) m_candies.push_back(true);
		else m_candies.push_back(false);

	}

	return m_candies;
}


int main() {

	vector <int> candies = {2, 3, 5, 1, 3};
	vector <bool> m_candies = kidsWithCandies(candies, 3);

	for(auto c : m_candies) {
		cout << c << " ";
	}
	cout << "\n";


	candies = {4, 2, 1, 1, 2};
	m_candies = kidsWithCandies(candies, 1);

	for(auto c : m_candies) {
		cout << c << " ";
	}
	cout << "\n";


	candies = {12, 1, 12};
	m_candies = kidsWithCandies(candies, 10);

	for(auto c : m_candies) {
		cout << c << " ";
	}
	cout << "\n";
	
	
	candies = {5, 6, 3, 7, 3};
	m_candies = kidsWithCandies(candies, 2);

	for(auto c : m_candies) {
		cout << c << " ";
	}
	cout << "\n";


	candies = {2, 4, 7, 12, 6};
	m_candies = kidsWithCandies(candies, 6);

	for(auto c : m_candies) {
		cout << c << " ";
	}
	cout << "\n";



	return 0;
}
