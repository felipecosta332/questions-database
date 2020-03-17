/*Através de uma função recursiva que recebe de entrada um valor n, gere todas as possíveis
combinações com as n primeiras letras do alfabeto. Exemplo: n = 3. Resposta: ABC, ACB, BAC,
BCA, CAB, CBA.*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int alphabetShuffler(int x, string word, int start, int end) {
	if (x <= 0 || x > 26) {
		return 0;
	} else if (start == end) {
		cout<<word<<endl;
		return 1;
	} else {
		for (int i = start; i <= end; i++) {
            swap(word[start], word[end]);
            alphabetShuffler(x, word, start+1, end);
            swap(word[start], word[i]);
        }
		return 1;
	}
}

int main() {

	int x, start, end;
	char letter;
	string word = "";

	while (true) {
		cin >> x;
		word = "";
		for (int i = 0; i < x && x < 26; i++) {
			letter = (65 + i);
			word += letter;
		}
		start = 0;
		end = word.size() - 1;
		if (x <= 0) {
			break;
		} else {
			alphabetShuffler(x, word, start, end);
		}
	}

	return 1;
}