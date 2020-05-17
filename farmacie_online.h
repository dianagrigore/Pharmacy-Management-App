//
// Created by Diana Grigore on 16-May-20.
//

#ifndef TEMA3_POO_FARMACIE_ONLINE_H
#define TEMA3_POO_FARMACIE_ONLINE_H
#include "farmacie.h"
#include <string>

class farmacie_online : public farmacie{
private:
    std :: string adresa_web;
    int nr_vizitatori;
    int discount;
public:
    explicit farmacie_online(std :: string adr = "", int vizit = 0, int disc = 0, int val = 0, std :: string  den = "", int ang = 0);
    ~farmacie_online() override = default;
    farmacie_online(const farmacie_online& src) = default;
    farmacie_online& operator= (farmacie_online src);
    friend void swap(farmacie_online& farmacie1, farmacie_online& farmacie2);
    friend std :: ostream& operator <<(std :: ostream& out, const farmacie_online& src);
    friend std :: istream& operator >>(std :: istream& in, farmacie_online& src);
    int get_vizitatori();
};


#endif //TEMA3_POO_FARMACIE_ONLINE_H
