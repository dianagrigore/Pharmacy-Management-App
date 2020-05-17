//
// Created by Diana Grigore on 16-May-20.
//

#ifndef TEMA3_POO_GESTIONAREFARMACII_H
#define TEMA3_POO_GESTIONAREFARMACII_H
#include <vector>
#include <istream>
#include <ostream>
#include "farmacie_online.h"

template <class T>
class GestionareFarmacii{
private:
    int index;
    const int id_lant = 10;
    std :: vector<T> farmacii;
public:
    explicit GestionareFarmacii(int ind = 0) {
        index = ind;
    }
    ~GestionareFarmacii() = default;
    GestionareFarmacii(const GestionareFarmacii& src) = default;
    GestionareFarmacii& operator+=(const T& src){
        this -> farmacii.push_back(src);
        this -> index++;
        return *this;
    }
    friend std :: ostream& operator <<(std :: ostream& out, const GestionareFarmacii& src){
        out << "Id-ul lantului este: " << src.id_lant << '\n';
        out << "Gestiunea de farmacii cuprinde farmaciile cu urmatoarele informatii: \n";
        for (int i = 0; i < src.index; i++)
        {out << "Indexul farmaciei este: " << i + 1 << '\n';
            out << src.farmacii[i] << '\n';}
        return out;
    }
};

template<>
class GestionareFarmacii<farmacie_online>{
private:
    int nr_total_vizitatori;
public:
    explicit GestionareFarmacii<farmacie_online>(int nr = 0){
        nr_total_vizitatori = nr;
    }
    ~GestionareFarmacii<farmacie_online>() = default;
    GestionareFarmacii<farmacie_online>(const GestionareFarmacii<farmacie_online> & src) = default;
    GestionareFarmacii& operator+=(farmacie_online& src){
        this -> nr_total_vizitatori += src.get_vizitatori();
        return *this;
    }
    friend std::ostream& operator <<(std :: ostream& out, const GestionareFarmacii<farmacie_online>& src){
        out << "Numarul total de vizitatori ai tuturor farmaciilor online este: " << src.nr_total_vizitatori <<'\n';
        return out;
    }
};

#endif //TEMA3_POO_GESTIONAREFARMACII_H
