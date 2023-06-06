#include "iostream"
#include "vector"

using namespace std;

bool containsDuplicate(vector<int>& nums) {
	
	sort(nums.begin(), nums.end());

	for(int i = 0; i < nums.size()-1; i++) {
		if(nums[i] == nums[i+1]) {
			return true;
		}
	}

	return false;
}

int main(void) {
	vector<int> v0 = {1, 2, 1, 5, 7};
	vector<int> v1 = {1, 2, 1, 5, 7};	
	vector<int> v2 = {1, 2, 1, 5, 7};
	vector<int> v3 = {1, 2, 1, 5, 5};

	cout << "v0: "	<< containsDuplicate(v0) << "\n";
	cout << "v1: "	<< containsDuplicate(v1) << "\n";
	cout << "v2: "	<< containsDuplicate(v2) << "\n";
	cout << "v3: "	<< containsDuplicate(v3) << "\n";

	return 0;

}

