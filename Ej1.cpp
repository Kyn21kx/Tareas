#include "HeaderFiles/Utilities.h"
/*
* Le�nidas Neftal� Gonz�lez Campos. UP190151. ISEI02A.
* Creado en 6/24/2020
* Modificado en 6/25/2020
*/


//Elaborar un programa que indique si un n�mero es perfecto o no, se dice que un n�mero
//es perfecto si la suma de sus divisores es igual al n�mero, por ejemplo 6 tiene como
//divisores 1, 2 y 3, entonces 1 + 2 + 3 = 6, el n�mero 6 es perfecto, si el n�mero es 9 tiene
//como divisores 1, 3, entonces 1 + 3 = 4, el n�mero 9 no es perfecto.
int main1 () {
	int num;
	bool perfect;
	std::vector<int> divs;
	int sum;

	std::cout << "Ingrese un n" << U << "mero: ";
	std::cin >> num;

	sum = 0;

	for (int i = num - 1; i > 0; i--) {
		if (num % i == 0)
			divs.push_back(i);
	}
	for (int j = 0; j < divs.size(); j++) {
		sum += divs[j];
	}
	perfect = sum == num;

	if (perfect)
		std::cout << "El n" << U << "mero es perfecto" << std::endl;
	else
		std::cout << "El n" << U << "mero NO es perfecto" << std::endl;

	_getch();
	return 0;
}
