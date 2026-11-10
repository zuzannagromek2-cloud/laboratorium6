// laboratorium6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main() {
	//zad.1
	/*int a = 7;
	int b = 2;
	cout << a / b << endl;
	cout << static_cast<double>(a) / b << endl;
	cout << static_cast<double>(a / b) << endl;
}*/
//zad.2.1
/*double a = 3.99;
int b = a;
cout << b << endl;
cout << static_cast<int>(a) << endl;
}*/
//zad.2.2
	/*double a = -3.99;
	int b = a;
	cout << b << endl;
	cout << " Liczba a po konwersji: " << static_cast<int>(a) << endl;
}*/ //czesc ulamkowa zostaje "odcieta" a program przy zad.2.1 wyswietla 3, a przy zad 2.2 wyswietla -3
//zad.3
	/*char x = 'A';
	cout << "Znak A po konwersji: "<< static_cast<int>(x) << endl;
	int a = 66;
	cout <<"Liczba 66 po konwersji: "<< static_cast<char>(a) << endl;
}*/
//zad.4 - przed rzutowaniem
	/*int a;
	int b;
	cout << "Podaj dwie liczby calkowite:" << endl;
	cin >> a >> b;
	cout <<"Srednia arytmetyczna: "<< (a + b) / 2 << endl;

}*/
//po rzutowaniu
	/*int a;
	int b;
	cout << "Podaj liczby calkowite" << endl;
	cin >> a >> b;
	int srednia = (a + b) / 2;
	cout << "Srednia arytmatyczna wynosi: " << static_cast<double>(srednia) << endl;
}*/
//zad.5
	/*int a; //liczba wykonanych elementow
	int b; //calkowita liczba elementow do wykonania
	cout << "Podaj liczbe wykonanych elementow i calkowita liczbe elementow do wykonania: " << endl;
	cin >> a >> b;
	if (a == 0 || b == 0) {
		cout << "Nieprawidlowe dane" << endl;
	}
	else {
		cout << "Procent wykonania zadania jest rowny: " << static_cast<double>(a) / b * 100 << "%" << endl;
	}
}*/
//zad.6
	/*string text;
	cout << "Wpisz dowolny tekst" << endl;
	getline(cin, text);
	cout << "Dlugosc tekstu: " << text.length() << endl;
}*/ //spacje sa takze uwzgledniane
//zad.7
	/*string text;
	cout << "Wpisz dowolny tekst" << endl;
	getline(cin, text);
	int a; //indeks poczatkowy
	int b; //dlugosc wycinanego fragmentu
	cout << "Podaj indeks poczatkowy i dlugosc fragmentu jaki chcesz wyciac" << endl;
	cin >> a >> b;
	string wycinek = text.substr(a, b);
	cout << "Wycinek tekstu: " << wycinek << endl;
}*/
//zad.8
	/*string text = "2026-11-10";
	cout << "Podana data: " << text << endl;
	string rok = text.substr(0, 4);
	cout << "Podany rok: " << rok << endl;
	string miesiac = text.substr(5,2);
	cout << "Podany miesiac: " << miesiac << endl;
	string dzien = text.substr(8,2);
	cout << "Podany dzien: " << dzien << endl;
}*/
//zad.8 - po modyfikacji
	/*string text;
	cout << "Podaj date wg wzoru: rok-miesiac-dzien:" << endl;
	cin >> text;
	cout << "Podana data: " << text << endl;
	string rok = text.substr(0, 4);
	cout << "Podany rok: " << rok << endl;
	string miesiac = text.substr(5, 2);
	cout << "Podany miesiac: " << miesiac << endl;
	string dzien = text.substr(8, 2);
	cout << "Podany dzien: " << dzien << endl;
}*/





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
