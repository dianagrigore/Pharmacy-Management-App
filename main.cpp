#include <iostream>
#include <fstream>
#include "farmacie.h"
#include "farmacie_online.h"
#include "GestionareFarmacii.h"

int main(){
    std :: ifstream f("farmacii.in");
    std :: ofstream g("farmacii.out");
    GestionareFarmacii<farmacie_online> f_online;
    GestionareFarmacii<farmacie> f_fizice;
    farmacie_online fo;
    farmacie ff;
    int nr_online, nr_fizice;
    f >> nr_online;
    for (int i = 0; i < nr_online; i++){
        f >> fo;
        f_online += fo;
    }
    g << f_online;
    f >> nr_fizice;
    for (int i = 0; i < nr_fizice; i++){
        f >> ff;
        f_fizice += ff;
    }
    g << f_fizice;
    f.close();
    g.close();
    return 0;
}


