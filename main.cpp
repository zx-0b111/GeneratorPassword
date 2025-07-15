#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
using namespace std;

string password = "";

void LetterUpper() {
	random_device seed;
	mt19937 random(seed());
	int valor;
	cout << "Quantity letters Upper: ";
	cin >> valor;
	uniform_int_distribution<> distribution(0, valor);
	
	string letterUpper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	for (int i = 0; i < valor; i++) {
		int index = distribution(random);
		password += letterUpper[index];
	}
}

void LetterLower() {
	random_device seed;
	mt19937 random(seed());
	int valor;
	cout << "Quantity letters Lower: ";
	cin >> valor;
	uniform_int_distribution<> distribution(0, valor);

	string letterLower = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < valor; i++) {
		int index = distribution(random);
		password += letterLower[index];
	}
}

void numbers() {
	
	//Random engine using Mersenne Twister
	random_device seed; //Obtain a seed from the hardware
	mt19937 random(seed()); //Initialize Mersenne Twister with seed
	int valor2;
	cout << "Quantity numbers: ";
	cin >> valor2;
	
	//Define a uniform integer distribution
	uniform_int_distribution<> distribution(0, valor2); //Generate a number 

	string numbers = "1234567890";
	
	for (int i = 0; i < valor2; i++) {
		int index2 = distribution(random); //Get a random index
		password+= numbers[index2];
	}
}

void characters() {
	random_device seed;
	mt19937 random(seed());
	int valor3;
	cout << "Quantity characters: ";
	cin >> valor3;
	uniform_int_distribution<> distribution(0, valor3);
	
	string character = "@-_#!$%¨&*()[]{}";

	for (int i = 0; i < valor3; i++) {
		int index3 = distribution(random);
		password+=character[index3];
	}
}

int main()
{
	LetterUpper();
	LetterLower();
	numbers();
	characters();
	cout << "Senha gerada: " << password;

	return 0;
}
