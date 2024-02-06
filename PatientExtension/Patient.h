#pragma once
#include <string>
#include "Procedure.h"
#include <vector>
using namespace std;

class Patient
{
private:
	string name;
	string phoneNumber;
	vector<Procedure> procedures;
public:
	void SetName(string value);
	string GetName();

	void SetPhoneNumber(string phone);
	string GetPhoneNumber();

	void AddProcedure(Procedure proc);
	int ProcedureCount();
	Procedure GetProcedure(int index);
	double GetPatientBill();

};

