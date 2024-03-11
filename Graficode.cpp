#include <iostream>
#include <cstdlib>     //Para interactuar con el sistema
#include <cmath>       //Funciones matemáticas
#include <fstream>     //Manipula archivos externos




int main(){


    std::ofstream archivosalida("Datos.csv");
    //Validando que el archivo sí abra

    if (!archivosalida.is_open()){

        std::cerr<<"Error, el archivo no abre"<<std::endl;

    }

    archivosalida.close();

    system("gnuplot graficauto.gp");


}