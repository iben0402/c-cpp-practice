#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

double findMaxAvarage(vector<int>& nums, int k) {
	if(k==1) {
		double max_el = *max_element(nums.begin(), nums.end());
		return max_el;
	}

	double maxAvarage=0;

	for(int i=0; i<k; i++) {
		maxAvarage+=nums[i];
	}
	double newAvarage = maxAvarage; 

	for(int i=k; i<nums.size(); i++) {
		newAvarage = newAvarage - nums[i-k] + nums[i];
		if(newAvarage > maxAvarage) maxAvarage = newAvarage;
	}

	return maxAvarage/k;
}

int main() {
	vector<int> nums;

	nums = {4, 2, 1, 3, 3};
	cout << findMaxAvarage(nums, 2) << "\n";

	return 1;

}

