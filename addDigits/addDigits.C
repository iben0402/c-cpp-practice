#include "iostream"

using namespace std;

int addDigits(int num) {

	int new_num = 0;
	int n = 0;

	while(num != 0) {
		
		n = num % 10;
		new_num += n;
		num -= n;
		num /= 10;

	}

	if(new_num >= 10) {
		return addDigits(new_num);
	}
	
	return new_num;

}


int main() {
	
	int numbers[10] = {15, 123, 125842, 1923, 125, 106, 1923, 60983, 9999999, 6431};

	for(int i=0; i<10; i++) {
		cout << numbers[i] << ": " << addDigits(numbers[i]) << "\n";
	}

	
	return 0;
}
