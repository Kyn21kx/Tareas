#include "Utilities.h"
/*
* Leónidas Neftalí González Campos. UP190151. ISEI02A.
* Creado en 6/24/2020
* Modificado en 6/25/2020
*/

bool EsCapicua(int n);

//Dado un rango de números donde el primero sea menor que el segundo, determine
//cuantos números capicúa hay.Entre el 90 y el 110 hay 2 números capicúa, el 99 y 101.
int main5() {
	int lowerLim, upperLim, cntr = 0;
	std::cout << "Ingresa el l" << I << "mite inferior: ";
	std::cin >> lowerLim;
	std::cout << "Ingresa el l" << I << "mite superior: ";
	std::cin >> upperLim;

	for (int i = lowerLim; i <= upperLim; i++) {
		if (EsCapicua(i))
			cntr++;
	}

	std::cout << "Entre el " << lowerLim << " y el " << upperLim << " hay " << cntr << " n" << U << "meros capic" << U << "a..." << std::endl;

	_getch();
	return 0;
}
//Determina si un número n es capicúa
bool EsCapicua(int n) {
	std::vector<int> normalList, reversedList;
	do {
		reversedList.push_back(n % 10);
		n /= 10;
	}
	while(n != 0);
	normalList = reversedList;
	std::reverse(normalList.begin(), normalList.end());
	for (int i = 0; i < normalList.size(); i++) {
		if (normalList[i] != reversedList[i])
			return false;
	}
	return true;
}
