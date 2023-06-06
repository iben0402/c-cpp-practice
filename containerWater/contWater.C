#include "iostream"
#include "vector"

using namespace std;

int maxArea(vector<int>& height) {
	int ans = 0, n = height.size();
	int i = 0, j = n-1;

	while(i<j) {
		if(height[i] > height[j]) {
			ans = max(ans, (j-i)*height[j]);
			j--;
		}
		else {
			ans = max(ans, (j-i)*height[i]);
			i++;
		}
	}
	return ans;
}

int main() {
	vector<int> h;

	h= {1, 8, 6, 2, 5, 4, 8, 3, 7};
	cout << maxArea(h) << "\n";

	h = {1, 1};
	cout << maxArea(h) << "\n";

	return 0;
}
