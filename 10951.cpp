#include <iostream>
using namespace std;

int main() {
	int a, b;
	int sum;

	while (true) {
		cin >> a >> b;
		if (cin.eof() == true) { 
			break;
		}
		sum = a + b;
		cout << sum << '\n';
	
	}
}