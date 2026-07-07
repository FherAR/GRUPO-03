#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string nombre_usuario, p_nombre;
    int edad_usuario, p_cantidad;
    double p_precio, p_ahorro, total_gastado, suma_total = 0.0, ahorro_total = 0.0;
    
    cout << "Ingrese su nombre: "; getline(cin, nombre_usuario);
    cout << "Ingrese su edad: "; cin >> edad_usuario;
    
    ifstream entrada("productos.txt");
    ofstream archDescuento("productos_descuento.txt");
    ofstream archBeneficios("beneficios.txt");
    
    if(!entrada) {
        cout << "Error: No se encontro productos.txt" << endl;
        return 1;
    }
    
    string h1, h2, h3;
    entrada >> h1 >> h2 >> h3; // Leer encabezados
    archDescuento << "NOMBRE\tPRECIO\tCANTIDAD\tTOTAL_GASTADO\n";
    archBeneficios << "REPORTE DE BENEFICIOS\nUsuario: " << nombre_usuario << "\n";
    
    while(entrada >> p_nombre >> p_precio >> p_cantidad) {
        p_ahorro = 0.0;
        if(p_cantidad > 5) {
            double descuento = p_precio * 0.10;
            p_precio -= descuento;
            p_ahorro = descuento * p_cantidad;
        }
        
        total_gastado = p_precio * p_cantidad;
        suma_total += total_gastado;
        ahorro_total += p_ahorro;
        
        archDescuento << p_nombre << "\t" << p_precio << "\t" << p_cantidad << "\t" << total_gastado << "\n";
        if(p_ahorro > 0) archBeneficios << p_nombre << " | Ahorro: " << p_ahorro << "\n";
        else archBeneficios << p_nombre << " | Sin descuento\n";
    }
    
    archDescuento << "SUMA TOTAL GASTADO: " << suma_total << "\n";
    archBeneficios << "AHORRO TOTAL: " << ahorro_total << "\n";
    
    entrada.close(); archDescuento.close(); archBeneficios.close();
    cout << "Proceso terminado. Revise los archivos TXT." << endl;
    return 0;
}


