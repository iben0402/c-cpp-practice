#include "iostream"
#include "vector"

using namespace std;

bool increasingTriplet(vector<int>& nums) {
	
	vector<int> lis;

	for(int i : nums) {

		auto low_bound = lower_bound(lis.begin(), lis.end(), i);
		if(low_bound == lis.end()) lis.push_back(i);
		else *low_bound = i;
	}
	return lis.size()>=3;
}


int main() {


	vector<int> nums;

	nums = {1, 2, 3, 4, 5};
	cout << increasingTriplet(nums) << "\n";

	nums = {6, 2, 1, 4, 5};
	cout << increasingTriplet(nums) << "\n";

	nums = {1, 6, 3, 2, 5};
	cout << increasingTriplet(nums) << "\n";

	nums = {1, 0, 15, 10, 20};
	cout << increasingTriplet(nums) << "\n";

	nums = {1, 7, 6, 5, 5};
	cout << increasingTriplet(nums) << "\n";

	nums = {1, 6, 3, 4, 2};
	cout << increasingTriplet(nums) << "\n";

	nums = {1, 2, 6, 2, 5};
	cout << increasingTriplet(nums) << "\n";
}
