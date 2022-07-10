#include <iostream>
#include "Konto.h"

using namespace std;

ostream& operator<<(ostream& wy, Konto& p) {
    wy << p.imie << " " << p.nazwisko << " " << p.nr_rachunku << " " << p.stan_konta;
    return wy;
}

int main()
{
    Konto k1("Maciej", "Opielowski", "487547845784587456897845"), k2("45784569245787651354684321");
    k1.changeName("Jan", "Markowski");
    k1.setStanKonta(20);
    cout << k1.getStanKonta() << endl;
    k1.oprocentowanie(50);
    cout << k1.getStanKonta() << endl;;
    cout << k1 << endl;
}
