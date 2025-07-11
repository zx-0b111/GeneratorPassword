#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string password = "";

void Letters() {
	string letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int valor;
	cout << "Quantity letters: ";
	cin >> valor;
	
	for (int i = 0; i < valor; i++) {
		int index = rand() % letters.length();
		password += letters[index];
	}
}

void numbers() {
	string numbers = "12345678910";
	int valor2;
	cout << "Quantity numbers: ";
	cin >> valor2;

	for (int i = 0; i < valor2; i++) {
		int index2 = rand() % numbers.length();
		password+= numbers[index2];
	}
}

void characters() {
	string character = "@-_#!$%¨&*()[]{}";
	int valor3;
	cout << "Quantity characters: ";
	cin >> valor3;

	for (int i = 0; i < valor3; i++) {
		int index3 = rand() % character.length();
		password+=character[index3];
	}
}

int main()
{
	srand(time(0));
	Letters();
	numbers();
	characters();
	cout << "Senha gerada: " << password;

	return 0;
}