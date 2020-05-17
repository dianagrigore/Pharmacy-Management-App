//
// Created by Diana Grigore on 16-May-20.
//

#ifndef TEMA3_POO_FARMACIE_H
#define TEMA3_POO_FARMACIE_H
#include <string>

class farmacie {
protected:
    std :: string denumire;
    int angajati;
    int profituri[12]{};
public:
    explicit farmacie(int val = 0, std :: string  den = "", int ang = 0);
    virtual ~farmacie() = default;
    farmacie(const farmacie& src) = default;
    farmacie& operator= (farmacie src);
    friend void swap(farmacie& farmacie1, farmacie& farmacie2);
    friend std :: ostream& operator <<(std :: ostream& out, const farmacie& src);
    friend std :: istream& operator >>(std :: istream& in, farmacie& src);
};


#endif //TEMA3_POO_FARMACIE_H
