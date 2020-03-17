/*Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros. Ao final da leitura
o programa deverá imprimir o número da linha que contém o menor dentre todos os números lidos.*/

#include <iostream>

using namespace std;

int main() {
    int x, least, leastRow;

    cout << "Escreva as dimensões da matriz quadrada de inteiro.\n";
    cout << "Digite o número de linhas ou colunas da matriz: ";
    cin >> x;

    int matrix[x][x];

    cout << "Escreva os elementos da matriz.\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << "Digite o elemento da " << i + 1 << "ª linha e " << j + 1 << "ª coluna: ";
            cin >> matrix[i][j];
        }
    }
    least = matrix[0][0];
    leastRow = 0;

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            if (matrix[i][j] < least) {
                least = matrix[i][j];
                leastRow = i;
            }
        }
    }

    cout << "O menor elemento da matriz é " << least << ".\n";
    cout << "O número da linha desse elemento é " << leastRow << " ("<< leastRow + 1 << "ª linha).\n";
    
    return 1;
}