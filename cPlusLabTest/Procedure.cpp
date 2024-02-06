#include "Procedure.h"
#include <string>

using namespace std;

Procedure::Procedure(string n, string d, string p, double c) {
	name = n;
	date = d;
	practitioner = p;
	cost = c;
}
void Procedure::SetName(string value) { name = value; }
string Procedure::GetName() { return name; }

void Procedure::SetDate(string value) { date = value; }
string Procedure::GetDate() { return date; }

void Procedure::SetPractitioner(string value) { practitioner = value; }
string Procedure::GetPractitioner() { return practitioner; }

void Procedure::SetCost(double value) { cost = value; }
double Procedure::GetCost() { return cost; }

string Procedure::toString() {
	string temp = name;
	if (name.size() < 9) {
		temp = name + "\t";
	}
	return date + "\t" + temp + "\t" + practitioner + "\t$" + to_string(cost);
}
