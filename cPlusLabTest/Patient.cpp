#include "Patient.h"
using namespace std;

void Patient::SetName(string value) {
	name = value;
}
string Patient::GetName() {
	return name;
}

void Patient::SetPhoneNumber(string phone) {
	phoneNumber = phone;
}
string Patient::GetPhoneNumber() {
	return phoneNumber;
}

void Patient::AddProcedure(Procedure proc) {
	procedures.push_back(proc);
}
int Patient::ProcedureCount() {
	return procedures.size();
}
Procedure Patient::GetProcedure(int index) {
	return procedures[index];
}
double Patient::GetPatientBill() {
	double retval = 0.0;

	for (int i = 0; i < procedures.size(); i++) {
		retval += procedures[i].GetCost();
	}

	return retval;
}