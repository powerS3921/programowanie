#include "Konto.h"

Konto::Konto(string imie, string nazwisko, string nr_rachunku)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
	this->nr_rachunku = nr_rachunku;
	this->stan_konta = 0;
}

Konto::Konto(string nr_rachunku)
{
	this->imie = " ";
	this->nazwisko = " ";
	this->nr_rachunku = nr_rachunku;
	this->stan_konta = 0;
}

Konto::Konto(const Konto& p)
{
	this->imie = p.imie;
	this->nazwisko = p.nazwisko;
	this->nr_rachunku = p.nr_rachunku;
	this->stan_konta = p.stan_konta;
}

Konto::~Konto()
{
	cout << "Destruktor dzia³a" << endl;
}

void Konto::setStanKonta(int stan_konta)
{
	this->stan_konta = stan_konta;
}

int Konto::getStanKonta()
{
	return stan_konta;
}

void Konto::oprocentowanie(double procent)
{
	stan_konta = stan_konta+(stan_konta * (procent / 100));
}


void Konto::changeName(string imie, string nazwisko)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
}


