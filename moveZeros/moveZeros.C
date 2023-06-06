#include "iostream"
#include "vector"

using namespace std;

void moveZeroes(vector<int>& nums) {
	int lastNonZeroIdx = 0;

	for(int i = 0; i < nums.size(); i++) {
		if(nums[i] != 0) nums[lastNonZeroIdx++] = nums[i];
	}

	for(int i = lastNonZeroIdx; i<nums.size(); i++) {
		nums[i] = 0;
	}
}

int main() {
	vector<int> nums;

	nums = {0, 1, 0, 3, 12};
	moveZeroes(nums);
	for(auto n : nums) cout << n << " ";
	
	cout << "\n";


	nums = {0, 1, 0, 0, 2, 9, 9, 0};
	moveZeroes(nums);
	for(auto n : nums) cout << n << " ";
	

	cout << "\n";

}

