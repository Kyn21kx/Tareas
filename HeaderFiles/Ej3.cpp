#include "Utilities.h"
/*
* Leónidas Neftalí González Campos. UP190151. ISEI02A.
* Creado en 6/24/2020
* Modificado en 6/25/2020
*/


//Determinar si un número es primo, se dice que un número es primo si es divisible entre 1
//y entre sí mismo.
int main3() {
	long int num;
	bool prime = true;

	std::cout << "Ingrese un n" << U << "mero para determinar si es primo: ";
	std::cin >> num;

	num = abs(num);

	if (num != 0 || num != 1) {
		for (int i = num - 1; i > 0; i--) {
			if (num % i == 0 && i != 1) {
				prime = false;
				break;
			}
		}
	}
	else {
		prime = false;
	}
	if (prime)
		std::cout << "El n" << U << "mero es primo!" << std::endl;
	else 
		std::cout << "El n" << U << "mero NO es primo!" << std::endl;
	_getch();
	return 0;
}
