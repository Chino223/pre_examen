#include <iostream>
#include <string>

using namespace std;


/*// Cadena para agarrar todos los datos de una linea
int main() 
{
	// Buscar cadena ****************************
	string cadena;
	cout << "Ingrese cadena: " << endl;
	//cin >> cadena;
	// Enves de cin usamos getline para agarrar toda la linea
	getline(cin, cadena);


	for (int i = 0; i < cadena.length(); i++)
	{
		if (cadena[i] == 'a')
		{
			cadena[i] = '@';
		}
		else if (cadena[i] == 'e')
		{
			cadena[i] = '3';
		}
		else if (cadena[i] == 'i')
		{
			cadena[i] = '1';
		}
		else if (cadena[i] == 'o')
		{
			cadena[i] = '0';
		}
	}
	cout << "La nueva cadena es: " << cadena << endl;
	


	system("pause");
	return 0;
} */

/*
int main()
{
	cout << endl << "---------------------------" << endl;
	// Unir cadena ****************************
	// Concatenar
	string cadena1, cadena2, concatenar;
	cout << "Ingrese cadena: " << endl;
	getline(cin, cadena1);
	cout << "Ingrese cadena: " << endl;
	getline(cin, cadena2);

	concatenar = cadena1 + " - " + cadena2;

	cout << "Concatenada: " << concatenar << endl;




	system("pause");
	return 0;
} */

/*
int main()
{
	cout << endl << "---------------------------" << endl;
	// Sub cadena ****************************
	// Eliminar cadena
	string cadena1, cadena2, concatenar;
	cadena1 = "Hola mundo";
	cadena2 = cadena1.substr(5, 5);
	cout << cadena2 << endl;



	system("pause");
	return 0;
}  */

/*
int main()
{
	cout << endl << "---------------------------" << endl;
	// Sub cadena ****************************
	// Agregar una cadena
	string cadena1, cadena2, concatenar;
	cadena1 = "hola mundo";
	cadena1.append("-Final");
	cadena2 = "-AEIOU";
	cadena1.append(cadena2);
	cout << cadena1 << endl;


	system("pause");
	return 0;
} */

/*
int main()
{
	cout << endl << "---------------------------" << endl;
	// Sub cadena ****************************
	// Agregar una cadena en medio de dos
	string cadena1, cadena2, concatenar;
	cadena1 = "hola mundo";
	cadena1.append("-Final");
	cadena2 = "-AEIOU";
	cadena1.append(cadena2);

	cadena1.insert(4, "@@");

	cout << cadena1 << endl;


	system("pause");
	return 0;
}  */

int main()
{
	cout << endl << "---------------------------" << endl;
	// Sub cadena ****************************
	// Borrar cadena 
	string cadena1, cadena2, concatenar;
	cadena1 = "hola mundo";
	cadena1.append("-Final");
	cadena2 = "-AEIOU";
	cadena1.append(cadena2);

	cadena1.erase(0, 5);

	cout << cadena1 << endl;


	system("pause");
	return 0;
}