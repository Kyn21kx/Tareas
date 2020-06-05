/*
* Programa para calcular el área y perímetro de un pentágono.
* Autor: Leónidas Neftalí González Campos. ISEI02A. UP190151
*/
#include "HeaderFiles/Ejercicios.h"

int main () {
	system("cls");
	for (int i = 0; i < 6; i++) {
		std::cout << i + 1 << ") Ejercicio " << i + 1 << std::endl;
	}
	std::cout << "Q) Quit" << std::endl;
	switch (_getch()) {
	case '1':
		Ej1();
		break;
	case '2':
		Ej2();
		break;
	case '3':
		Ej3();
		break;
	case '4':

		break;
	case '5':

		break;
	case '6':

		break;
	case 'q':
		return 1;
		break;
	default:

		break;
	}
	main();
	return 0;
}
