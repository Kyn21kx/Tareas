#pragma once
//Librerías
#include <iostream>
#include<conio.h>
/*
* Leónidas Neftalí González Campos. UP190151. ISEI02A.
* Creado en 6/12/2020
* Modificado en 6/12/2020
*/

//Estas definiciones son únicamente para poder escribir con acentos en la consola sin necesidad de escribir nuestro casteo todo el tiempo
#define A (char)160
#define I (char)161
#define O (char)162
#define U (char)163
#define Ñ (char)164

void Ej1() {
	//Dado un número entero de un dígito (0 al 9), devolver el número en letras, por ejemplo al leer el dígito "9" se desplegará "Nueve".
	
	//Definición de array de strings con los nombres
	std::string numNames[10] {
		"Cero", "Uno", "Dos",
		"Tres", "Cuatro", "Cinco",
		"Seis", "Siete", "Ocho",
		"Nueve"
	};
	//Variable de entrada
	int num;
	//Entrada del usuario
	std::cout << "Ingrese un n"<<U<<"mero del 0 al 9: ";
	std::cin >> num;
	//Evaluación de entrada válida
	if (num <= 9 && num >= 0) {
		std::cout << "El n" << U << "mero es: " << numNames[num] << std::endl;
	}
	else {
		//En caso de entrada inválida
		std::cout << "Entrada inv" << A << "lida, por favor intente de nuevo..."<<std::endl;
		_getch();
		Ej1();
	}
	_getch();
}

void Ej2() {
	//Dado dos números enteros y un operador (+, -, * y / ) devolver el resultado de la
	//operación de los dos números según el operador ingresado, considere si el segundo
	//número es cero y el operador es / , no es divisible con el primero, entonces devolver
    //como resultado 0.
	
	//Entradas
	int n1, n2;
	char op;
	//Salida
	float res;
	//Entrada del usuario
	std::cout << "Ingrese el primer n" << U << "mero: ";
	std::cin >> n1;
	std::cout << "Ingrese el segundo n" << U << "mero: ";
	std::cin >> n2;
	std::cout << "Ingresa con tu teclado el operador...\n";
	op = _getch();
	//Evaluación del caracter op con la función _getch()
	switch (op) {
	case '+':
		res = n1 + n2;
		break;
	case '-':
		res = n1 - n2;
		break;
	case '*':
		res = n1 * n2;
		break;
	case '/':
		res = n2 != 0 ? ((float)n1 / (float)n2) : 0;
		break;
	default:
		//En caso de entrada inválida
		std::cout << "Entrada inv" << A << "lida, por favor intente de nuevo..." << std::endl;
		_getch();
		Ej2();
		break;
	}
	//Salida
	std::cout << "El resultado dado los par" << A << "metros ingresados es: " << n1 << " " << op <<" " << n2 << " = " << res << std::endl;
	_getch();
}

void Ej3() {
	//Al ingresar el día y el número de un mes, devolver la estación del año de acuerdo al
	//periodo:
	//INVIERNO del 21 de Diciembre al 20 de Marzo.
	//PRIMAVERA del 21 de Marzo al 21 de Junio.
	//VERANO del 22 de Junio al 22 de Septiembre.
	//OTOÑO del 23 de Septiembre al 20 de Diciembre.

	//Variables de entrada
	int dia, mes;
	//Variable de salida
	std::string estacion;
	//Entrada de información
	std::cout << "Por favor ingrese el mes: ";
	std::cin >> mes;
	std::cout << "Por favor ingrese el d" << I << "a: ";
	std::cin >> dia;
	//Evaluación de los rangos de mes y días
	if ((mes == 12 && dia >= 21) || mes >= 1 && (mes <= 3 && dia <= 20)) {
		estacion = "Invierno";
	}
	else if (mes == 3 && dia >= 21 || (mes >= 4 && mes < 6)  || (mes == 6 && dia <= 21)) {
		estacion = "Primavera";
	}
	else if ((mes == 6 && dia >= 22) || (mes >= 7 && mes < 9) || (mes == 9 && dia <= 22)) {
		estacion = "Verano";
	}
	else if ((mes == 9 && dia >= 23) || (mes >= 10 && mes < 12) || (mes == 12 && dia <= 20)) {
		estacion = "Otono";
	}
	//Salida de información
	std::cout << estacion << std::endl;
	_getch();
}

void Ej4() {
	//Determine el importe a pagar por el examen de admisión de una Universidad, cuyo
	//valor depende del nivel socioeconómico y la escuela de procedencia.

	//Variable para determinar si es una universidad particular
	bool part;
	//Importe dependerá del proceso
	int importe;
	//Entrada del usuario
	std::cout << "Es su universidad particular?" << std::endl;
	std::cout << "S" << I << " (S)" << " / No (Presione cualquier otra tecla)" << std::endl;
	//Evaluación de la universidad particular
	part = _getch() == 's';
	std::cout << "Por favor entre su nivel social" << std::endl;
	std::cout << "A) Nivel A\nB) Nivel B\nC) Nivel C" << std::endl;
	//Dependiendo de el retorno de la función _getch() será nuestro importe
	switch (_getch()) {
	case 'a':
		importe = part ? 400 : 300;
		break;
	case 'b':
		importe = part ? 300 : 200;
		break;
	case 'c':
		importe = part ? 200 : 100;
		break;
	default:
		std::cout << "Entrada inv" << A << "lida, por favor intente de nuevo..." << std::endl;
		_getch();
		Ej4();
		break;
	}
	//Salida
	std::cout << "Su importe a pagar es: " << importe;
	_getch();
}

void Ej5() {
	//Dado el número del mes y el año (cuatro dígitos) de una fecha, determinar que mes es
	//en letras y cuantos días tiene, considerar que febrero tiene 28 o 29 días si el año es
	//bisiesto, un año es bisiesto si es múltiplo de 4, pero no de 100 y si de 400. Por ejemplo,
	//el mes 2 del año 2000 es Febrero y tiene 29 días.
	
	//Declaración del enumerador de todos los meses
	enum MonthsBase {
		Enero, Febrero, Marzo, Abril,
		Mayo, Junio, Julio, Agosto,
		Septiembre, Octubre, Noviembre,
		Diciembre
	};
	//Variable de nuestro mes a evaluar
	MonthsBase month;
	//Constante de los meses que tienen 31 días
	const MonthsBase months31[7] {
		Enero, Marzo, Mayo, Julio, Agosto,
		Octubre, Diciembre
	};
	//Constante de los meses que tienen 30 días
	const MonthsBase months30[4]{
		Abril, Junio, Septiembre, Noviembre
	};
	//Variable arreglo string que servirá solo de salida
	std::string sMonths[12]{
		"Enero", "Febrero", "Marzo", "Abril",
		"Mayo", "Junio", "Julio", "Agosto",
		"Septiembre", "Octubre", "Noviembre",
		"Diciembre"
	};
	//Id Month es la variable de entrada, al igual que year, amntDays depende de idMonth
	int idMonth, amntDays, year;
	//Variable que determina si será un año bisiesto
	bool bis;
	//Entrada del usuario
	std::cout << "Ingresa el mes de la fecha" << std::endl;
	std::cin >> idMonth;
	std::cout << "Ingrese el a" << Ñ << "o" << std::endl;
	std::cin >> year;
	//En caso de que el usuario ingrese un dato negativo, tomaremos su valor absoluto
	year = abs(year);
	//Determinación de un año bisiesto
	bis = (year % 4 == 0 || (year % 100 == 0 && year % 400 == 0));
	//Casteo de la variable de entrada id a nuestro enumerador
	month = (MonthsBase)(idMonth - 1);
	//Ciclo para evaluar la cantidad de días y cerramos el ciclo con un break cuando encontramos un match
	for (int i = 0; i < 12; i++) {
		if (month == months31[i]) {
			amntDays = 31;
			break;
		}
		else if (month == months30[i]) {
			amntDays = 30;
			break;
		}
		else if (month == MonthsBase::Febrero) {
			amntDays = bis ? 29 : 28;
			break;
		}
	}
	//Salida de información
	std::cout << "El mes es: " << sMonths[month] << ", y tiene " << amntDays << " d" << I << "as" << std::endl;
	if (bis)
		std::cout << "El a" << Ñ << "o " << year << " es bisiesto" << std::endl;
	else 
		std::cout << "El a" << Ñ << "o " << year << " no es bisiesto" << std::endl;
	_getch();
}

void Ej6() {
	//Diseñe un programa que califique el puntaje obtenido en el lanzamiento de tres dados
	//en base a la cantidad de seis obtenidos, de acuerdo a lo siguiente :
	//Tres seis : Oro.Dos seis : Plata.Un Seis; Bronce.Ningún seis : Perdió.
	//Se piden los valores de cada uno de los 3 dados verificando que sean números del 1
	//al 6 y se obtiene el nivel de puntaje.

	//Declaración de variables de entrada
	int valDados[3];
	int cntr6 = 0;
	//Declaración de variables de salida
	std::string cal;
	//Entrada del usuario
	for (int i = 0; i < 3; i++)	{
		std::cout << "Ingrese el valor del dado " << i + 1 << std::endl;
		int tempVal;
		std::cin >> tempVal;
		//Aumento a la variable contadora de "seises"
		if (tempVal == 6)
			cntr6++;
		if (tempVal <= 6 && tempVal > 0)
			valDados[i] = tempVal;
		//En caso de que el usuario ponga un valor inválido
		else {
			std::cout << "Entrada inv" << A << "lida, por favor intenta de nuevo!" << std::endl;
			_getch();
			i--;
		}
	}

	switch (cntr6) {
	case 1:
		cal = "Bronce";
		break;
	case 2:
		cal = "Plata";
		break;
	case 3:
		cal = "Oro";
		break;
	case 0:
		cal = "Perdiste";
		break;
	}

	std::cout << "Calificación: " << cal << std::endl;

	_getch();
}
