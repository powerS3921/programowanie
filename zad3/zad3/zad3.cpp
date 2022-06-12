#include <iostream>

using namespace std;

template<class Typ1, class Typ2>
class Para {
    Typ1 a;
    Typ2 b;
public:
    Para() {};
    void wpisz(Typ1 a1, Typ2 b1) { a = a1, b = b1; }
    void wypisz() { cout << "Naszapara elementow to: " << a << " " << b << endl; }
};

template <>
void Para<const char*, const char*>::wypisz() {
    cout << "Mamy dwa napisy: " << a << " " << b << endl;
}

template<>
class Para<int, int> {
    int a;
    int b;
    int z;
public:
    Para() {};
    void wpisz(int a1, int b1) { a = a1, b = b1; }
    void podaj_z(int _z) { z = _z; }
    void wypisz() { cout << "Nasza trojka elementow to: " << a << " " << b <<" "<< z << endl; }
};



int main()
{
    int c = 3;
    Para<int, float>p1;
    p1.wpisz('c', 81);
    p1.wypisz();
    cout << endl;
    Para<int, int>p2;
    p2.wpisz(1, 2);
    p2.podaj_z(3);
    p2.wypisz();
    Para<const char*, const char*>p3;
    p3.wpisz("lubie", "C++");
    p3.wypisz();
}


