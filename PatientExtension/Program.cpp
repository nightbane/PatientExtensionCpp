#include <iostream>
#include <vector>
#include <string>
#include "Patient.h"

using namespace std;


int main() {
	Patient person;
	person.SetName("Kevin");
	person.SetPhoneNumber("555-1234");

	Procedure proc("Plasmapherisis", "1/29", "Dr Jeckel", 45.67);

	person.AddProcedure(proc);
	
	cout << "Patient: " << person.GetName() << ", " << person.GetPhoneNumber() << endl;

	for (int i = 0; i < person.ProcedureCount(); i++) {
		cout << person.GetProcedure(i).toString() << endl;
	}

	cout << "Total Bill: $" << person.GetPatientBill() << endl;


}