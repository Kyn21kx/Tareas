#pragma once
#include <iostream>
#include<conio.h>
#include <vector>
#include <algorithm>

void Ej1() {
	//Dado el año de nacimiento de una persona determinar la edad y si es mayor de edad 
	//o menor de edad, considerando que el mayor de edad es mayor o igual a 18 años.
	const int currYear = 2020;
	int year, age;
	std::cout << "\nIngrese su a"<< (char) 164 << "o de nacimiento" << std::endl;
	std::cin >> year;
	age = 2020 - abs(year);
	std::cout << "Tu edad es: " << age << std::endl;
	if (age >= 18) {
		std::cout << "Eres mayor de edad" << std::endl;
	}
	else if (age < 18 && age > 0) {
		std::cout << "Eres menor de edad" << std::endl;
	}
	else {
		std::cout << "Valor de edad invalido!" << std::endl;
	}
	_getch();
}

void Ej2() {
	//Dado un número entero, devolver el doble del número si es positivo, el triple del
	//número si es negativo y cero si el número es neutro.
	int num;
	std::cout << "\nIngrese un numero entero" << std::endl;
	std::cin >> num;
	if (num > 0) {
		num *= 2;
	}
	else {
		num *= 3;
	}
	std::cout << "El numero final es: " << num << std::endl;
	_getch();
}

void Ej3() {
	//Crear un programa que al ingresar tres números enteros, devuelva los números
	//ordenados en forma ascendente y en forma descendente.
	int lNum, hNum;
	std::vector<int> nums;
	for (int i = 0; i < 3; i++) {
		std::cout << "\nIngresa un numero a la entrada " << i + 1 << std::endl;
		int temp;
		std::cin >> temp;
		nums.push_back(temp);
	}
	//Asc
	std::sort(nums.begin(), nums.end(), std::less<>());
	std::cout << "Ascendente" << std::endl;
	for (int j = 0; j < 3; j++) {
		std::cout << nums[j] << std::endl;
	}
	//Desc
	std::sort(nums.begin(), nums.end(), std::greater<>());
	std::cout << "Descendente" << std::endl;
	for (int j = 0; j < 3; j++) {
		std::cout << nums[j] << std::endl;
	}
	_getch();
}

void Ej4() {
	//Un restaurante ofrece un descuento de 10% para consumos de hasta $100.00 y un
	//descuento de 20 % para consumos mayores, para ambos casos se aplica el IVA de 16 %.
	//Determinar el monto de descuento, el impuesto y el importe a pagar.
}
