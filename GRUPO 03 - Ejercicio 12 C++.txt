#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int cantidad_alumnos;
    cout << "SISTEMA DE GESTION ACADEMICA" << endl;
    cout << "¿Cuantos alumnos desea registrar?: ";
    cin >> cantidad_alumnos;
    
    vector<string> nombres(cantidad_alumnos);
    vector<double> promedio(cantidad_alumnos);
    
    ofstream archivoNotas("Notas.txt");
    ofstream archivoPromedio("Promedio.txt");
    
    for(int i = 0; i < cantidad_alumnos; i++) {
        cout << "Nombre del alumno " << i + 1 << ": ";
        cin >> ws; // Limpiar buffer
        getline(cin, nombres[i]);
        
        double ec1, pc1, parc1, ec2, pc2, parcFinal;
        cout << "Ingrese EC1, PC1, Parcial 1: ";
        cin >> ec1 >> pc1 >> parc1;
        cout << "Ingrese EC2, PC2, Parcial Final: ";
        cin >> ec2 >> pc2 >> parcFinal;
        
        double ep1 = (ec1*0.15) + (pc1*0.40) + (parc1*0.45);
        double ep2 = (ec2*0.15) + (pc2*0.40) + (parcFinal*0.45);
        promedio[i] = (ep1 + ep2) / 2.0;
        
        archivoNotas << "Alumno: " << nombres[i] << " | EP1: " << ep1 << " | EP2: " << ep2 << endl;
        
        archivoPromedio << "Alumno: " << nombres[i] << " | Promedio Final: " << promedio[i] << " | Estado: ";
        if(promedio[i] > 10.5) archivoPromedio << "APROBADO\n";
        else if(promedio[i] >= 9.5) archivoPromedio << "SUSTITUTORIO\n";
        else archivoPromedio << "DESAPROBADO\n";
    }
    
    archivoNotas.close();
    archivoPromedio.close();
    cout << "Archivos Notas.txt y Promedio.txt generados con éxito." << endl;
    return 0;
}

