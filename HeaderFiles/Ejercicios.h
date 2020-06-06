#pragma once
#include <iostream>
#include<conio.h>
#include <vector>
#include <algorithm>
/*
* Le�nidas Neftal� Gonz�lez Campos. UP190151. ISEI02A.
* Creado en 6/04/2020
* Modificado en 6/05/2020
*/

void Ej1() {
	//Dado el a�o de nacimiento de una persona determinar la edad y si es mayor de edad 
	//o menor de edad, considerando que el mayor de edad es mayor o igual a 18 a�os.

	//Constante del a�o actual basada en la cual sacaremos nuestro valor de edad.
	const int currYear = 2020;
	//year: Variable de entrada del a�o en el que naci� el usuario
	//age: Variable de "salida", ser� usada para determinar la salida del programa
	int year, age;
	std::cout << "\nIngrese su a"<< (char) 164 << "o de nacimiento" << std::endl;
	std::cin >> year;
	//En caso de que el usuario cometa un error y de un n�mero negativo, usaremos el valor absoluto para evitar errores.
	age = 2020 - abs(year);
	std::cout << "Tu edad es: " << age << std::endl;
	//Secci�n condicional a evaluar la edad
	if (age >= 18) {
		std::cout << "Eres mayor de edad" << std::endl;
	}
	else if (age < 18 && age > 0) {
		std::cout << "Eres menor de edad" << std::endl;
	}
	//Evaluaci�n final, si no es mayor de edad, o menor, el valor debe ser inv�lido.
	else {
		std::cout << "Valor de edad invalido!" << std::endl;
	}
	_getch();
}

void Ej2() {
	//Dado un n�mero entero, devolver el doble del n�mero si es positivo, el triple del
	//n�mero si es negativo y cero si el n�mero es neutro.
	
	//Variable de entrada / salida
	int num;
	std::cout << "\nIngrese un numero entero" << std::endl;
	std::cin >> num;
	//Evaluaci�n de la entrada (Si num > 0 Entonces num = num * 2, de lo contrario, num = num * 3)
	num = num > 0 ? num * 2 : num * 3;
	//Salida despu�s de aplicar las operaciones
	std::cout << "El numero final es: " << num << std::endl;
	_getch();
}

void Ej3() {
	//Crear un programa que al ingresar tres n�meros enteros, devuelva los n�meros
	//ordenados en forma ascendente y en forma descendente.
	
	//Declaramos variable de entrada / salida de la clase vector de la librer�a est�ndar para acceder funciones de lista
	std::vector<int> nums;
	//Ciclo para ingresar la entrada
	for (int i = 0; i < 3; i++) {
		std::cout << "\nIngresa un numero a la entrada " << i + 1 << std::endl;
		//Variable de entrada auxiliar (std::vector no tiene un overload del operador >> para istream)
		int temp;
		std::cin >> temp;
		//A�adir la variable temporal a la lista
		nums.push_back(temp);
	}
	//Orden ascendente por funci�n sort de la librer�a est�ndar
	//Par�metros: Donde empieza la lista, donde termina, la clase de ordenamiento que deseamos
	std::sort(nums.begin(), nums.end(), std::less<>());
	std::cout << "Ascendente" << std::endl;
	for (int j = 0; j < 3; j++) {
		std::cout << nums[j] << std::endl;
	}
	//Orden descendente por funci�n sort de la librer�a est�ndar
	//Par�metros: Donde empieza la lista, donde termina, la clase de ordenamiento que deseamos
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
	
	//Factor constante del iva (16%)
	const float iva = 0.16;
	//Cons: Variable de entrada. Res: Variable de salida. Desc: Variable de salida.
	float cons, res, desc;
	std::cout << "\nIngresa el monto del consumo: " << std::endl;
	std::cin >> cons;
	res = cons;
	//condicional para el descuento (tambi�n puede expresarse con los operadores "?", ":" )
	if (cons <= 100) {
		desc = (cons * 0.1f);
	}
	else {
		desc = (cons * 0.2f);
	}
	res = (res - desc) + (cons * iva);
	//Salida
	std::cout << "El descuento es: " << desc << std::endl;
	std::cout << "El impuesto es: " << cons * iva << std::endl;
	std::cout << "El costo final es: " << res << std::endl;
	_getch();
}

void Ej5() {
	//Enumerador de estados del clima (�nicamente para mayor legibilidad del c�digo)
	enum Clima
	{
		Frio,
		Nublado,
		Calor,
		Tropical
	};
	//Declaraci�n de una variable del enumerador
	Clima weather;
	//Mapeo del enumerador a un arreglo de strings
	std::string sWeather[4]{
		"Frio",
		"Nublado",
		"Calor",
		"Tropical"
	};
	//Variable de entrada de temperatura
	float temp;
	std::cout << "\nIngresa la temperatura: ";
	std::cin >> temp;
	//Evaluaci�n de la temperatura por condicionales
	if (temp < 10) {
		weather = Clima::Frio;
	}
	else if (temp >= 10 && temp <= 20) {
		weather = Clima::Nublado;
	}
	else if (temp > 20 && temp <= 30) {
		weather = Clima::Calor;
	}
	else {
		weather = Clima::Tropical;
	}
	//Salida de datos
	std::cout << "El clima es: " << sWeather[weather] << std::endl;
	_getch();
}

void Ej6() {
	//Elabore un algoritmo que obtenga las ra�ces reales de una ecuaci�n de segundo grado.

	//Variables de entrada: a, b, c. Variables de salida: x1, x2.
	float a, b, c, x1, x2;
	float rootExpression;
	std::cout << "\nIngresar a: ";
	std::cin >> a;
	std::cout << "Ingresar b: ";
	std::cin >> b;
	std::cout << "Ingresar c: ";
	std::cin >> c;
	//Expresi�n de la ra�z para evaluar que no den n�meros imaginarios
	rootExpression = (pow(b, 2) - (4 * a * c));
	if (a != 0 && rootExpression >= 0) {
		x1 = (-b + sqrt(rootExpression)) / (2 * a);
		x2 = (-b - sqrt(rootExpression)) / (2 * a);
		std::cout << "x1 = " << x1 << std::endl;
		std::cout << "x2 = " << x2 << std::endl;
	}
	else {
		std::cout << "Valores ingresados devuelven indeterminacion!!!" << std::endl;
	}
	_getch();
}
