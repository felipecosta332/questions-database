/*Usar recursão para converter um número dado na sua forma decimal para a forma binária.*/

#include <iostream>

using namespace std;

long decimalToBinary(long x) {
	if (x == 0) {
		return 0;
	} else {
		return (x % 2) + (10 * decimalToBinary(x / 2));
	}
}

int main() {

	int x;

	while (true) {
		cin >> x;
		if (x == 0) {
			break;
		} else {
			cout << decimalToBinary(x) << endl;
		}
	}

	return 1;
}