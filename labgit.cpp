#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
int main(){
	ifstream archivoentrada("input/ArchivoEntrada.txt");
    ofstream archivosalida("output/ArchivoSalida.txt");

    if (archivoentrada.is_open() and archivosalida.is_open()) {
        cout<<"Archivo abierto"<<endl;
        string linea;

        while (getline(archivoentrada, linea)) {
            archivosalida << linea<<endl;
        }
    }
    cout<<"Archivo copiado correctamente"<<endl;
}
