#include "Utilities.h"


//Calcular una suma dada por la serie
//S = 1/0! + x/1! + x^2 /2! + x^3 / 3! ...

int GetFact(int n);

int main() {
	//2, 2 = 5
	float x, sum = 0, n;
	std::cout << "Ingrese la base de la serie: ";
	std::cin >> x;
	std::cout << "Ingrese el l"<<I<<"mite de la serie: ";
	std::cin >> n;

	for (int i = 0; i <= n; i++) {
		sum += (powf(x, i) / GetFact(i));
	}
	std::cout << "El resultado de la serie es: " << sum << std::endl;
	_getch();
	return 0;
}

int GetFact(int n) {
	int fact = n;
	if (n != 0) {
		for (int i = n - 1; i > 0; i--) {
			fact *= i;
		}
	}
	else {
		fact = 1;
	}
	return fact;
}
