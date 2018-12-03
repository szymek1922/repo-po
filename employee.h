#include <iostream>
#include<string>
using namespace std;

class Employee{
public:
	string Name;
	string Position;
	int Age;

	Employee(string name, string position, int age):
		Name(name),
		Position(position),
		Age(age)
	{		
	}
	
	friend ostream& operator<<(ostream& os, Employee const& e){
		return os<< e.Name << " "<< e.Position << " "<< e.Age;
	}
};


