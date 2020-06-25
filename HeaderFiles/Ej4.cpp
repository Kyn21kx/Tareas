#include "Utilities.h"
/*
* Leónidas Neftalí González Campos. UP190151. ISEI02A.
* Creado en 6/24/2020
* Modificado en 6/25/2020
*/

bool IsPrime(int n);

//Determine cuántos números primos hay en los primeros N números enteros positivos,
//por ejemplo, si ingresa 7 hay 4 números primos 2, 3, 5, y 7.
int main4() {
	int max;
	int cntr = 0;

	std::cout << "Ingresa el l" << I << "mite desde el cu" << A << "l se van a revisar los n" << U << "meros primos: ";
	std::cin >> max;

	for (int i = max; i > 0; i--) {
		if (IsPrime(i))
			cntr++;
	}

	std::cout << "Hay " << cntr << " n" << U << "meros primos desde el l" << I << "mite " << max << std::endl;
	_getch();
	return 0;
}

bool IsPrime(int n) {
	n = abs(n);

	if (n == 1) return false;
	
	for (int i = n - 1; i > 0; i--) {
		if (n % i == 0 && i != 1) 
			return false;
	}
	return true;
}
