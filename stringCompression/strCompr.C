#include "iostream"
#include "vector"

using namespace std;

int compress(vector<char>& chars) {

	if(chars.size() ==1)
		return 1;


	char current = chars[0];
	int counter = 1;
	vector<char> new_list;
	vector<char> numbers;

	for(int i = 1; i<chars.size(); i++) {
		
		if(chars[i] != current) {
		
			new_list.push_back(current);
			if(counter != 1) {
				
				while (counter > 0) {
					int digit = counter % 10;
					numbers.push_back(static_cast<char>('0' + digit));
					counter /= 10;
				}

				reverse(numbers.begin(), numbers.end());
				new_list.insert(new_list.end(), numbers.begin(), numbers.end());
				
				counter = 1;
				numbers.clear();
			}
			current = chars[i];
			
		}
		else counter++;

	}
	
	new_list.push_back(current);
	if(counter != 1) {
		while (counter > 0) {
			int digit = counter % 10;
			numbers.push_back(static_cast<char>('0' + digit));
			counter /= 10;
		}

		reverse(numbers.begin(), numbers.end());
		new_list.insert(new_list.end(), numbers.begin(), numbers.end());
	}

			
	chars = new_list;
	return chars.size();
}

int main() {
	
	vector<char> chars;

	chars = {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'b', 'c'};
	cout << compress(chars) << "\n";

	chars = {'a'};
	cout << compress(chars) << "\n";

	chars = {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'b', 'c'};
	cout << compress(chars) << "\n";

	chars = {'a', 'a', 'a', 'a', 'a', 'a', 'a',  'b', 'b', 'c'};
	cout << compress(chars) << "\n";

	chars = {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'b', 'b'};
	cout << compress(chars) << "\n";

	chars = {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'};
	cout << compress(chars) << "\n";

	return 0;
}
