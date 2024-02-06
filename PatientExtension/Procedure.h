#pragma once
#include <string>
using namespace std;

class Procedure
{
private:
	string name;
	string date;
	string practitioner;
	double cost;
public:
	Procedure(string n, string d, string p, double c); 
	void SetName(string value);
	string GetName();

	void SetDate(string value);
	string GetDate();

	void SetPractitioner(string value);
	string GetPractitioner();

	void SetCost(double value);
	double GetCost();

	string toString();
};

