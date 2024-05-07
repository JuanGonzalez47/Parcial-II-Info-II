#ifndef NETWORK_CLASS_H
#define NETWORK_CLASS_H

#include "line_class.h"

class network : public virtual_network_class{

private:

    line *matrixNetwork;
    unsigned int numLines;
    int *elemLine;
    //Atributo que tomar en cuenta las veces que se repite una estacion de transferencia, esto a tener en cuenta en el metodo amountStations
    unsigned int Amount_stations_auxiliar = 0;

public:

    //constructor
    network(unsigned int numLines_);
    network();

    //destructor

    //metodos
    void inicialization_red(virtual_network_class *red_aux);
    void addLine(virtual_network_class *red_aux);
    void deleteLine(string name_line);
    void amountline();
    void amountStations();
    void printNetwork();
    bool line_on_red(string name_line) override;
    bool normal_estation_on_red(string name_estation, unsigned int numLines, bool valid, string name_estation_same_line) override;
    void search_transfer_and_put(string name_line_transfer, string name_estation) override;
    bool normal_estation_on_red(string name_estation);

    //geters
    unsigned int get_numLines () override;
    line* getMatrixnetwork();

    //setter
    void set_Amount_stations_auxiliar(unsigned int new_value) override;
};



#endif // NETWORK_CLASS_H
