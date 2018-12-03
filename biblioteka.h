#include <iostream>
#include<string>
using namespace std;

class Employee1{
public:
	string Name;   //tytul
	string Author;
    string kategoria;
	int liczba_stron;
    string czy_wypozyczona;

	Employee1(string name, string author, string kategoria, int liczba_stron, string czy_wypozyczona):
		Name(name),
		Author(author),
        kategoria(kategoria),
		liczba_stron(liczba_stron),
        czy_wypozyczona(czy_wypozyczona)
	{		
	}
	
	friend ostream& operator<<(ostream& os, Employee1 const& e){
		return os<< e.Name << " "<< e.Author << " "<< e.kategoria<<" "<< e.liczba_stron<< " Czy wypozyczona: "<< e.czy_wypozyczona;
	}
};


