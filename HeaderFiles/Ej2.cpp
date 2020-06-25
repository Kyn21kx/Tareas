#include "Utilities.h"
/*
* Leónidas Neftalí González Campos. UP190151. ISEI02A.
* Creado en 6/24/2020
* Modificado en 6/25/2020
*/


//Elaborar un programa para hallar el factorial de un número, el factorial es el producto de
//todos los números consecutivos desde la unidad hasta el número, por ejemplo factorial de
//3!(se denota !) es 1 x 2 x 3 = 6.
int main2() {
	int n;
	int fact;
	std::cout << "Ingrese un n" << U << "mero para calcular su factorial: ";
	std::cin >> n;
	fact = n;
	if (n != 0) {
		for (int i = n - 1; i > 0; i--) {
			fact *= i;
		}
	}
	else {
		fact = 1;
	}
	std::cout << "El factorial es: " << fact << std::endl;
	_getch();
	return 0;
}
