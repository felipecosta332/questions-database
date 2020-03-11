/*O máximo divisor comum (mais conhecido como MDC) de dois números inteiros não
negativos é o maior número inteiro que divide igualmente ambos. Escreva uma função recursiva
onde recebe dois números e retorna o MDC.*/

#include <iostream>

using namespace std;

int MDC(int x, int y) {
	if (x < 0 || y < 0) {
		return 1;
	} else if (x == 1 || y == 1) {
		return 1;
	} else if (x == 0) {
		return y;
	} else if (y == 0) {
		return x;
	} else if (x == y) {
		return x;
	} else {
		return MDC(y, x % y);
	}
}

int main() {

	int x, y;

	while (true) {
		cin >> x >> y;
		if (x < 0 || y < 0) {
			break;
		} else {
			cout << MDC(x, y) << endl;
		}
	}

	return 1;
}