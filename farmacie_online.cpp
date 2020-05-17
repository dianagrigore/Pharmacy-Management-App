//
// Created by Diana Grigore on 16-May-20.
//

#include "farmacie_online.h"
#include "farmacie.h"
#include <utility>
#include <ostream>
#include <istream>

farmacie_online :: farmacie_online(std::string adr, int vizit, int disc, int val, std :: string  den, int ang) : farmacie(val, std::move(den), ang){
    adresa_web = std::move(adr);
    nr_vizitatori = vizit;
    discount = disc;
}

void swap(farmacie_online &farmacie1, farmacie_online &farmacie2) {
    using std :: swap;
    swap(farmacie1.adresa_web, farmacie2.adresa_web);
    swap(farmacie1.nr_vizitatori, farmacie2.nr_vizitatori);
    swap(farmacie1.discount, farmacie2.discount);
}

farmacie_online& farmacie_online :: operator =(farmacie_online src){
    if (this != &src)
        swap(*this, src);
    return *this;
}

std :: ostream& operator <<(std :: ostream & out, farmacie_online const& src){
    out << "Adresa web a paginii este: " << src.adresa_web <<'\n';
    out << "Numarul de vizitatori ai paginii este: " << src.nr_vizitatori << '\n';
    out << "Discount-ul acordat este de: " << src.discount << "% \n";
    return out;
}

std ::  istream& operator >>(std::istream &in, farmacie_online& src) {
    in >> (farmacie&) src;
    in >> src.adresa_web;
    in >> src.nr_vizitatori;
    in >> src.discount;
    return in;
}

int farmacie_online ::get_vizitatori() {
    return nr_vizitatori;
}