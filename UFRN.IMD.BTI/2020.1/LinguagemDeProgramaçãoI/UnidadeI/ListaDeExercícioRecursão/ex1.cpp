/*Implemente uma função recursiva chamada digitSum(n), onde recebe como entrada um valor
inteiro não negativo e tem como retorno a soma dos dígitos. Por exemplo, chamando
digitSum(1729), teríamos como retorno 1 + 7 + 2 + 9, o que seria 19.*/

#include <iostream>

using namespace std;

int digitSum(int n) {
	if (n <= 0) {
		return 0;
	} else {
		return (n % 10) + digitSum(n / 10);
	}
}

int main() {

	int n;

	while (true) {

		cin >> n;

		if (n < 0) {
			break;
		} else {
			cout << digitSum(n) << endl;
		}
		
	}

	return 1;
}