#pragma once
//Librer�as
#include <iostream>
#include<conio.h>

#define U char(163)

/*
* Le�nidas Neftal� Gonz�lez Campos. UP190151. ISEI02A.
* Creado en 6/12/2020
* Modificado en 6/12/2020
*/


int main () {
	//Dado un n�mero entero, determinar cu�ntos d�gitos tiene sin utilizar funciones de conteo
	//de caracteres.Por ejemplo, el n�mero 123456 tiene 6 d�gitos.
	
	int n, cntr;
	cntr = 0;
	std::cout << "Por favor, ingrese un n�mero: ";
	std::cin >> n;
	do {
		cntr++;
		n /= 10;
	} 
	while (n != 0);
	std::cout<<"El n"
	return 0;
}
