/*Implementar de forma NÃO recursiva a busca binária e a busca sequencial. Usando a biblioteca
chrono o programa deve realizar uma busca em um vetor ORDENADO de 500 posições. A busca
deve ser feita com o mesmo valor para cada função. Repita o procedimento para 10 valores
aleatórios e anote o tempo que cada função levou para encontrar o número. No final faça um gráfico
comparando qual das duas funções é mais rápida computacionalmente.*/

#include <iostream>
#include <chrono>
#include <cstdio>
#include <cstdlib>

using namespace std;

int sequentialSearch(int k, int vector[], int size) {
	int position = 0;
	do {
	    if (k == vector[position]) {
	        return position; // SUCCESS
	    } else if (k < vector[position]) {
	        return -1; // INSUCCESS
	    }
	    position++;
	} while (position < size);
	return -1; // INSUCCESS
}

int binarySearch(int k, int vector[], int size) {
    int start = 0, end = size - 1, middle;
    while (start <= end) {
        middle = (start+end)/2;
        if (k < vector[middle]) {
            end = middle - 1;
        } else if (k > vector[middle]) {
            start = middle + 1;
        } else {
            return middle; // SUCCESS
        }
    }
    return -1; // INSUCCESS
}

/*
clock_t begin = clock();
clock_t end = clock();
double totalTime = double(end - begin) / CLOCKS_PER_SEC;
cout<<totalTime<<endl;
*/

/*
FILE *file = fopen(insertString(filename, "../files/"), "w");
fprintf(file, "%s\n%d %d\n%d\n", image.format, image.width, image.height, image.max);
fprintf(file, "%d ", image.matrix[i][j].red);
fprintf(file, "%d ", image.matrix[i][j].green);
fprintf(file, "%d\n", image.matrix[i][j].blue);
fclose(file);
*/

int main() {
    FILE *file = fopen("output.txt", "w");
    int array[500];
    double totalTime;
    clock_t begin, end;

    for (int i = 0; i < 500; i++) {
        array[i] = i + 1;
    }

    for (int i = 0; i < 10; i++) {
        cout << "\n" << i + 1 << "ª primeiro teste.\n";
        fprintf(file, "\n%dª primeiro teste.\n", i + 1);
        int k = rand() % 501;

        // SEQUENTIAL
        begin = clock();
        sequentialSearch(k, array, 500);
        end = clock();
        totalTime = double(end - begin) / CLOCKS_PER_SEC;
        cout << "Resultado com busca sequencial para buscar o número " << k << ".\n";
        fprintf(file, "Resultado com busca sequencial para buscar o número %d.\n", k);
        cout << "Tempo: " << totalTime << endl;
        fprintf(file, "Tempo: %lf.\n", totalTime);
        
        // BINARY
        begin = clock();
        binarySearch(k, array, 500);
        end = clock();
        totalTime = double(end - begin) / CLOCKS_PER_SEC;
        cout << "Resultado com busca binária para buscar o número " << k << ".\n";
        fprintf(file, "Resultado com busca binária para buscar o número %d.\n", k);
        cout << "Tempo: " << totalTime << endl;
        fprintf(file, "Tempo: %lf.\n", totalTime);
    }

    fclose(file);
    return 1;
}