#pragma once
#include <iostream>
using namespace std;
class Konto
{
	string nr_rachunku;
	string imie;
	string nazwisko;
	double stan_konta;
public:
	Konto(string imie, string nazwisko, string nr_rachunku);
	Konto(string nr_rachunku);
	Konto(const Konto& p);
	~Konto();
	void setStanKonta(int stan_konta);
	int getStanKonta();
	
	void changeName(string imie, string nazwisko);
	void oprocentowanie(double procent);

	friend ostream& operator<<(ostream& wy, Konto& p);
};

