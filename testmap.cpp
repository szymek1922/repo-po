#include <iostream>
using namespace std;

#include "employee.h"
#include "biblioteka.h"				//defines class Employee
#include "map_template.h"		//defines template map_template<Key,Value>

int main(void)
{
	typedef unsigned int ID; 							//Identification number of Employee
	map_template<ID,Employee> Database;					//Database of employees

	Database.Add(1,Employee("Jan Kowalski","salesman",28)); 	//Add first employee: name: Jan Kowalski, position: salseman, age: 28,
	Database.Add(2,Employee("Adam Nowak","storekeeper",54)); 	//Add second employee: name: Adam Nowak, position: storekeeper, age: 54
	Database.Add(3,Employee("Anna Zaradna","secretary",32)); 	//Add third employee: name: Anna Zaradna, position: secretary, age: 32

	cout << Database << endl;							//Print databese

	map_template<ID,Employee> NewDatabase = Database;	//Make a copy of database
	
	Employee* pE;
	pE = NewDatabase.Find(2);					//Find employee using its ID
	pE->Position = "salesman";							//Modify the position of employee
	pE = NewDatabase.Find(3);					//Find employee using its ID
	pE->Age = 29;										//Modify the age of employee

	Database = NewDatabase;								//Update original database
	
	cout << Database << endl;							//Print original databese

	typedef unsigned int ID1; 							//Identification number of Employee
	map_template<ID1,Employee1> Database1;					//Database of employees


	Database1.Add(1,Employee1("Kamienie na szaniec","Gal Anonim","Wojenne",310,"Tak")); 	//Add first employee: name: Kamienie na szaniec, author: Gal Anonim,kategoria: Wojenne, age: 310, czy_wypozyczona: Tak 

	Database1.Add(2,Employee1("Potop","Gal Anonim","Historyczna",1310,"nie")); 	//Add first employee: name: Kamienie na szaniec, author: Gal Anonim,kategoria: Wojenne age: 310,czy_wypozyczona: Tak 

	Database1.Add(3,Employee1("Krzyzacy","Gal Anonim","Wojenne",410,"Tak")); 	//Add first employee: name: Kamienie na szaniec, author: Gal Anonim,kategoria: Wojenne age: 310,czy_wypozyczona: Tak 
/*	Database.Add(2,Employee1("Adam Nowak","storekeeper",54)); 	//Add second employee: name: Adam Nowak, position: storekeeper, age: 54
	Database.Add(3,Employee1("Anna Zaradna","secretary",32)); 	//Add third employee: name: Anna Zaradna, position: secretary, age: 32
*/
	cout << Database1 << endl;							//Print databese

/*	map_template<ID1,Employee1> NewDatabase = Database;	//Make a copy of database
	
	Employee1* pE;
	pE = NewDatabase.Find(2);					//Find employee using its ID
	pE->Position = "salesman";							//Modify the position of employee
	pE = NewDatabase.Find(3);					//Find employee using its ID
	pE->Age = 29;										//Modify the age of employee

	Database = NewDatabase;								//Update original database
	
	cout << Database << endl;							//Print original databese
*/

    

}
