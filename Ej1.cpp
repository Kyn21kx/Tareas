#pragma once
//Librerías
#include <iostream>
#include<conio.h>

#define U char(163)

/*
* Leónidas Neftalí González Campos. UP190151. ISEI02A.
* Creado en 6/12/2020
* Modificado en 6/12/2020
*/


int main () {
	//Dado un número entero, determinar cuántos dígitos tiene sin utilizar funciones de conteo
	//de caracteres.Por ejemplo, el número 123456 tiene 6 dígitos.
	
	int n, cntr;
	cntr = 0;
	std::cout << "Por favor, ingrese un número: ";
	std::cin >> n;
	do {
		cntr++;
		n /= 10;
	} 
	while (n != 0);
	std::cout<<"El n"
	return 0;
}
