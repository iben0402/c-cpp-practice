#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

int maxOperations(vector<int>& nums, int k) {

	sort(nums.begin(), nums.end());

	int i = 0, j=nums.size()-1;

	int count = 0;

	while(i < j) {
		int sum = nums[i] + nums[j];
		if(sum == k) {
			count ++;
			i++;
			j--;
		}
		else if(sum > k) {
			j--;
		}
		else if(sum<k) {
			i++;
		}
	}

	return count;
}


int main() {
	vector<int> nums;
	int k;

	nums={1, 2, 3, 4};
	k =5;

	cout << maxOperations(nums, k) << "\n";


	nums={3, 1, 3, 4, 3};
	k =6;

	cout << maxOperations(nums, k) << "\n";

	return 0;
}
