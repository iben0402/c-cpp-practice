#include "iostream"
#include "vector"

using namespace std;

bool canPlaceFlowerOnPosition(vector<int>& flowerbed, int i) {
	

	if (flowerbed[i] == 1) return false;
	if (i==0) return (flowerbed[i+1] == 0);
	if (i==flowerbed.size()-1) return (flowerbed[i-1] == 0);
	return (flowerbed[i-1] == 0 && flowerbed[i+1] == 0);
}

int canPlaceFlowers(vector<int>& flowerbed, int n) {
	
	if(n==0) return true;
	if(flowerbed.size() == 1) return (flowerbed[0] == 0 || n == 0);
	int empty_fields = 0;

	for(auto flower : flowerbed) {
		if (flower == 0) empty_fields++;
	}
	
	if(n > empty_fields) return false;
	
	for(auto i = 0; i < flowerbed.size(); i++) {
		
		if(canPlaceFlowerOnPosition(flowerbed, i)){
			flowerbed[i] = 1;
			n--;
			if(n==0) return true;
		}
	}

	return false;

}


int main() {

	
	vector<int> flowerbed = {1, 0, 0, 0, 1};
	cout << canPlaceFlowers(flowerbed, 1);
	
	flowerbed = {1, 0, 0, 0, 1};
	cout << canPlaceFlowers(flowerbed, 2) << "\n";

 	flowerbed = {1, 0, 0, 0, 1, 0, 0};
	cout << canPlaceFlowers(flowerbed, 2) << "\n";

	flowerbed = {1, 0, 1, 0, 1, 0, 0};
	cout << canPlaceFlowers(flowerbed, 1) << "\n";

	flowerbed = {1, 0, 0, 0, 1, 0, 0, 0, 0};
	cout << canPlaceFlowers(flowerbed, 3) << "\n";


	flowerbed = {1, 0, 0, 0, 1, 0, 0, 0, 0};
	cout << canPlaceFlowers(flowerbed, 3) << "\n";


	return 0;
}
