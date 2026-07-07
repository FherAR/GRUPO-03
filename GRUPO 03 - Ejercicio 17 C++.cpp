#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream archEntrada("productos.txt");
    ofstream archSalida("reporte_final.txt");
    
    if(!archEntrada) {
        cout << "No se pudo abrir productos.txt" << endl;
        return 1;
    }
    
    string nombreProducto;
    double precio, precioDesc;
    
    archSalida << "--- REPORTE FINAL ---" << endl;
    
    while(archEntrada >> nombreProducto >> precio) {
        precioDesc = precio - (precio * 0.10);
        archSalida << nombreProducto << ", Precio con Descuento: " << precioDesc << endl;
    }
    
    archEntrada.close();
    archSalida.close();
    cout << "Reporte generado." << endl;
    
    return 0;
}
