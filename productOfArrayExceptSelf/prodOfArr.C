#include "iostream"
#include "vector"

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
	
	int n = nums.size();

	vector<int> ret(n);
	vector<int> left_prod(n);
	vector<int> right_prod(n);

	left_prod[0] = 1;
	for(auto i=1; i <n; i++) {
		left_prod[i] = left_prod[i-1] * nums[i-1];
	}

	right_prod[n-1] = 1;
	for(auto i =n-2; i>=0; i--) {
		right_prod[i] = right_prod[i+1]*nums[i+1];
	}

	for(auto i = 0; i<n; i++) {
		ret[i]=left_prod[i]*right_prod[i];
	}

	return ret;

}


int main() {

	vector<int> nums;
	vector<int> prod;

	nums = {1, 2, 3, 4};
	prod = productExceptSelf(nums);

	for(auto n : prod) cout << n << " ";
	cout<<"\n";

	nums = {-1, 1, 0, -3, 3};
	prod = productExceptSelf(nums);

	for(auto n : prod) cout << n << " ";
	cout<<"\n";

	nums = {5, 12, -3, 10, -3};
	prod = productExceptSelf(nums);

	for(auto n : prod) cout << n << " ";
	cout<<"\n";

	nums = {-11, 0, 1, 5};
	prod = productExceptSelf(nums);

	for(auto n : prod) cout << n << " ";
	cout<<"\n";

	nums = {-1, -2, -3, -4};
	prod = productExceptSelf(nums);

	for(auto n : prod) cout << n << " ";
	cout<<"\n";




	return 0;
}
