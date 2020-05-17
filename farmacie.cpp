//
// Created by Diana Grigore on 16-May-20.
//

#include "farmacie.h"
#include <istream>
#include <ostream>
#include <utility>

farmacie :: farmacie(int val, std :: string  den, int ang) : denumire{std::move(den)}, angajati{ang} {
    for (int i = 0; i < 12; i++)
        profituri[i] = val;
}

void swap(farmacie &farmacie1, farmacie &farmacie2) {
    using std :: swap;
    swap(farmacie1.denumire, farmacie2.denumire);
    swap(farmacie1.angajati, farmacie2.angajati);
    swap(farmacie1.profituri, farmacie2.profituri);
}

farmacie& farmacie :: operator =(farmacie src){
    if (this != &src)
        swap(*this, src);
    return *this;
}

std :: istream& operator >>(std :: istream& in, farmacie& src){
    in >> src.denumire;
    in >> src.angajati;
    for (int i = 0; i < 12; i++)
        in >> src.profituri[i];
    return in;
}

std :: ostream& operator <<(std :: ostream & out, farmacie const& src){
    out << "Denumirea farmaciei este: " << src.denumire << '\n';
    out << "Farmacia are " << src.angajati << " angajati\n";
    out << "Profiturile specifice fiecarei luni au fost: \n";
    for (int i = 0; i < 12; i++)
        out << "Luna " << i+1 << ": " << src.profituri[i] <<'\n';
    return out;
}




