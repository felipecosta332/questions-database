/*1 – Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número máximo (no
exemplo, 9). Este número deve ser sempre ímpar.
1 2 3 4 5 6 7 8 9
  2 3 4 5 6 7 8
    3 4 5 6 7
      4 5 6
        5
*/

#include <iostream>

using namespace std;

int main() {

    int x, y = 0;

    cout << "Digite um número natural ímpar para ser o máximo.\n";

    cin >> x;

    for (int i = 0; i <= ((x - 1) / 2); i++) {
        for (int j = 1; j <= x; j++) {
            if (j == x && y == 0) {
                cout << j << " \n";
            } else if (j - y <= 0) {
                cout << "  ";
            } else if (j + y >= x + 1) {
                cout << "  \n";
                break;
            } else {
                cout << j << " ";
            }
        }
        y++;
    }

    return 1;
}